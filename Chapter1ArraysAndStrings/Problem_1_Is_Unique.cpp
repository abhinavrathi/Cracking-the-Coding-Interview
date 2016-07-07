// Created by Abhinav Rathi on 07/06/2016

#include <iostream>
#include <vector>
#include "Problem_1_Is_Unique.hpp"
using namespace std;
void Problem_1_Is_Unique::input(){
	cout<<"\nEnter string : ";
	cin.ignore();
	getline(cin,str);
};
bool Problem_1_Is_Unique::is_unique(){
	if(str.length()>128)
		return false;
	if(str.length()>1){
		vector<bool> alpha(128);
		for(int i=0;i<str.length();++i){
			if(alpha[str[i]])
				return false;
			alpha[str[i]]=true;
		}
	}
	return true;
};