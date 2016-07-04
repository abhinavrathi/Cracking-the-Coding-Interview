// Created by Abhinav Rathi on 07/04/2016

#include <iostream>
#include <unordered_map>
#include "RansomNote.hpp"
using namespace std;
void RansomNote::input(){
	cin.ignore();
	cout<<"\nEnter Note Contents: ";
	getline(cin,note);
	cout<<"\nEnter Magazine Contents: ";
	getline(cin,magazine);
};
void RansomNote::display(){
	cout<<"\nOUTPUT -> ";
	if(ransom())
		cout<<"It is possible to form note out of the magazine!\n";
	else
		cout<<"It is NOT possible to form note out of the magazine!\n";
};
bool RansomNote::ransom(){
	unordered_map<string,int> mymap;
	int i,j=0;
	for(i=0;i<=magazine.length();++i){
		if(magazine[i]==' '||magazine[i]=='\0'){
			string temp=magazine.substr(j,i-j);
			if(mymap.find(temp)!=mymap.end())
				mymap[temp]++;
			else
				mymap[temp]=1;
			j=i+1;
		}
	}
	j=0;
	for(i=0;i<=note.length();++i){
		if(note[i]==' '||note[i]=='\0'){
			string temp=note.substr(j,i-j);
			if(mymap.find(temp)==mymap.end())
				return false;
			j=i+1;
		}
	}
	return true;
};