// Created by Abhinav Rathi on 07/08/2016

#include <iostream>
#include <vector>
#include "Problem_4_Palindrome_Permutation.hpp"
using namespace std;
void Problem_4_Palindrome_Permutation::input(){
	cout<<"\nEnter string : ";
	cin.ignore();
	getline(cin,str);
};
bool Problem_4_Palindrome_Permutation::palin_permutation(){
	vector<int> letter(26);
	int i,c=0;
	for(i=0;i<str.length();++i)
		letter[str[i]-97]++;
	for(i=0;i<26;++i)
		if(letter[i]%2!=0)
			++c;
	if(c>1)
		return false;
	return true;
};