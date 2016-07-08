// Created by Abhinav Rathi on 07/08/2016

#include <iostream>
#include "Problem_6_String_Compression.hpp"
using namespace std;
void Problem_6_String_Compression::input(){
	cout<<"\nEnter string : ";
	cin.ignore();
	getline(cin,org);
};
string Problem_6_String_Compression::compress(){
	int i,c;
	string mod="";
	for(i=0;i<org.length();++i){
		c=1;
		while(i+1<org.length()&&org[i+1]==org[i]){
			++i;
			++c;
		}
		mod+=org[i]+toString(c);
	}
	if(mod.length()<org.length())
		return mod;
	return org;
};
string Problem_6_String_Compression::toString(int c){
	string res="";
	while(c!=0){
		int a=c%10;
		c/=10;
		res=char(a+48)+res;
	}
	return res;
};