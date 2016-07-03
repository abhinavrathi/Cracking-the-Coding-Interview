// Created by Abhinav Rathi on 07/03/2016

#include <vector>
#include <iostream>
#include "IterativePermutation.hpp"
using namespace std;
void IterativePermutation::input(){
	cout<<"\nEnter string : ";
	cin>>str;
};
void IterativePermutation::display_permutation(){
	vector<string> prev,curr;
	if(str.length()>0){
		string temp,now;
		temp="";
		temp+=str[0];
		prev.push_back(temp);
		for(int i=1;i<str.length();++i){
			while(prev.size()!=0){
				temp=prev.front();
				prev.erase(prev.begin());
				for(int j=0;j<=temp.length();++j){
					now=temp.substr(0,j)+str[i]+temp.substr(j);
					curr.push_back(now);
				}
			}
			prev=curr;
			curr.clear();
		}
	}
	cout<<"\nOUTPUT -> The permutations of "<<str<<" are :\n";
	for(int i=prev.size()-1;i>=0;--i)
		cout<<prev[i]<<"\n";
}