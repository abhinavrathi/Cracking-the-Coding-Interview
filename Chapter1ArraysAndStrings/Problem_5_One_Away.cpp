// Created by Abhinav Rathi on 07/08/2016

#include <iostream>
#include "Problem_5_One_Away.hpp"
using namespace std;
void Problem_5_One_Away::input(){
	cout<<"\nEnter first string : ";
	cin.ignore();
	getline(cin,a);
	cout<<"Enter second string : ";
	getline(cin,b);
};
bool Problem_5_One_Away::one_edit(){
	int ch=a.length()-b.length();
	if(ch>1||ch<-1)
		return false;
	int i,j,e=0;
	for(i=0,j=0;i<a.length()&&j<b.length();++i,++j){
		if(a[i]==b[j])
			continue;
		++e;
		if(e>1)
			return false;
		if(a.length()>b.length())
			--j;
		else if(a.length()<b.length())
			--i;
	}
	return true;
};