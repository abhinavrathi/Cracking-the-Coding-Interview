// Created by Abhinav Rathi on 07/04/2016

#include <vector>
#include <iostream>
#include "SortStringList.hpp"
using namespace std;
void SortStringList::input(){
	int N;
	string temp;
	cout<<"\nEnter number of strings : ";
	cin>>N;
	for(int i=1;i<=N;++i){
		cout<<"Enter string "<<i<<": ";
		cin>>temp;
		list.push_back(temp);
	}
};
void SortStringList::sort(){
	for(int i=0;i<list.size();++i)
		sort_single(list[i],0,list[i].length()-1);
	sort_all(list,0,list.size()-1);
	cout<<"\nOUTPUT -> The sorted list of strings :\n";
	for(int i=0;i<list.size();++i)
		cout<<list[i]<<"\n";
};
void SortStringList::sort_single(string &s,int p,int r){
	if(p<r){
		int q=(p+r)/2;
		sort_single(s,p,q);
		sort_single(s,q+1,r);
		merge_single(s,p,q,r);
	}
};
void SortStringList::merge_single(string &s,int p,int q,int r){
	int l1,l2,i,j,k;
	l1=q-p+1;
	l2=r-q;
	string a=s.substr(p,l1);
	string b=s.substr(q+1,l2);
	i=j=0;
	k=p;
	while(i<l1&&j<l2){
		if(a[i]<b[j])
			s[k++]=a[i++];
		else
			s[k++]=b[j++];
	}
	while(i<l1)
		s[k++]=a[i++];
	while(j<l2)
		s[k++]=b[j++];
};
void SortStringList::sort_all(vector<string> &s,int p,int r){
	if(p<r){
		int q=(p+r)/2;
		sort_all(s,p,q);
		sort_all(s,q+1,r);
		merge_all(s,p,q,r);
	}
};
void SortStringList::merge_all(vector<string> &s,int p,int q,int r){
	int l1,l2,i,j,k;
	l1=q-p+1;
	l2=r-q;
	vector<string> a,b;
	for(i=p;i<=q;++i)
		a.push_back(s[i]);
	for(j=q+1;j<=r;++j)
		b.push_back(s[j]);
	i=j=0;
	k=p;
	while(i<l1&&j<l2){
		if(compare(a[i],b[j]))
			s[k++]=a[i++];
		else
			s[k++]=b[j++];
	}
	while(i<l1)
		s[k++]=a[i++];
	while(j<l2)
		s[k++]=b[j++];
};
bool SortStringList::compare(string a,string b){
	for(int i=0;i<a.length()&&i<b.length();++i){
		if(a[i]==b[i])
			continue;
		else if(a[i]<b[i])
			return true;
		else
			return false;
	}
	if(a.length()<b.length())
		return true;
	else
		return false;
};