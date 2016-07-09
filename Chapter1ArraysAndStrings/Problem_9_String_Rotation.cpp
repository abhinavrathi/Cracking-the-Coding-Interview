// Created by Abhinav Rathi on 07/08/2016

#include <iostream>
#include "Problem_9_String_Rotation.hpp"
using namespace std;
void Problem_9_String_Rotation::input(){
	cout<<"\nEnter first string : ";
	cin.ignore();
	getline(cin,s1);
	cout<<"Enter second string : ";
	getline(cin,s2);
};
bool Problem_9_String_Rotation::string_rotation(){
	s2+=s2;
	return isSubstring(s1,s2);
};
bool Problem_9_String_Rotation::isSubstring(string a,string b){
	return b.find(a)!=string::npos;
};