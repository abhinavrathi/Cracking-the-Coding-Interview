// Created by Abhinav Rathi on 07/08/2016

#include <iostream>
#include "Problem_3_URLify.hpp"
using namespace std;
void Problem_3_URLify::input(){
	cout<<"\nEnter string : ";
	cin.ignore();
	getline(cin,str);
};
void Problem_3_URLify::urlify(){
	int l=str.length();
	while(str[l-1]==' ')
		l--;
	int i,c;
	c=0;
	for(i=0;i<l;++i){
		if(str[i]==' ')
			c++;
	}
	str[l+2*c]='\0';	
	for(i=l-1+2*c;i>=0;--i){
		if(str[i-2*c]!=' ')
			str[i]=str[i-2*c];
		else{
			str[i]='0';
			str[--i]='2';
			str[--i]='%';
			--c;
		}
	}
	cout<<"\nOUTPUT -> The URL string is : "<<str<<"\n";
};