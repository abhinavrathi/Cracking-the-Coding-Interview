// Created by Abhinav Rathi on 07/06/2016

#include <iostream>
#include <vector>
#include "Problem_2_Check_Permutation.hpp"
using namespace std;
void Problem_2_Check_Permutation::input(){
	cout<<"\nEnter first string : ";
	cin.ignore();
	getline(cin,a);
	cout<<"Enter second string : ";
	getline(cin,b);
};
bool Problem_2_Check_Permutation::check_permutation(){
	if(a.length()!=b.length())
		return false;
	vector<int> letter(26);
	int i;
	for(i=0;i<a.length();++i)
		letter[a[i]-97]++;
	for(i=0;i<b.length();++i){
		letter[b[i]-97]--;
		if(letter[b[i]-97]<0)
			return false;
	}
	return true;
};