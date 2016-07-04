// Created by Abhinav Rathi on 07/04/2016

#include <vector>
#include <iostream>
#include "RecursivePermutation.hpp"
using namespace std;
void RecursivePermutation::input(){
	cout<<"\nEnter string : ";
	cin>>str;
};
void RecursivePermutation::display_permutation(){
	if(str.length()>0){
		cout<<"\nOUTPUT -> The permutations of "<<str<<" are :\n";
		permutation(str,"");
	}
};
void RecursivePermutation::permutation(string rem,string prefix){
	if(rem.length()==0)
		cout<<prefix<<"\n";
	for(int i=0;i<rem.length();++i){
		string remainder=rem.substr(0,i)+rem.substr(i+1);
		permutation(remainder,prefix+rem[i]);
	}
};