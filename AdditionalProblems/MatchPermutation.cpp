// Created by Abhinav Rathi on 07/04/2016

#include <iostream>
#include <vector>
#include "MatchPermutation.hpp"
using namespace std;
void MatchPermutation::input(){
	cout<<"\nEnter smaller string: ";
	cin>>a;
	cout<<"Enter bigger string: ";
	cin>>b;
};
void MatchPermutation::find_permutation(){
	if(a.length()>0){
		vector<int> count(26),save;
		int i,j,flag=1;;
		for(i=0;i<a.length();++i)
			count[a[i]-97]++;
		for(i=0;i<b.length();++i){
			save=count;
			for(j=0;j<a.length();++j){
				if(save[b[i+j]-97]<=0)
					break;
				save[b[i+j]-97]--;
			}
			if(j==a.length()&&flag){
				cout<<"\nOUTPUT -> The matched permutations of \""<<a<<"\" in \""<<b<<"\" are:\n";
				cout<<b.substr(i,a.length())<<" at location "<<(i+1)<<"\n";
				flag=0;
			}
			else if(j==a.length())
				cout<<b.substr(i,a.length())<<" at location "<<(i+1)<<"\n";
			else if(count[b[i+j]-97]==0)
				i=i+j;
		}
	}
};