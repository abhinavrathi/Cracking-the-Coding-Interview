// Created by Abhinav Rathi on 07/04/2016

#include <unordered_map>
#include <utility>
#include <iostream>
#include <cmath>
#include "MathIdentity.hpp"
using namespace std;
void MathIdentity::find(){
	pair<int,int> mypair;
	unordered_map<int,pair<int,int> > mymap;
	cout<<"\nOUTPUT -> Pair of numbers which satisfy a^3 + b^3 = c^3 + d^3 are:\n";
	for(int a=1;a<=1000;++a){
		for(int b=1;b<=1000;++b){
			int t=pow(a,3)+pow(b,3);
			if(mymap.find(t)!=mymap.end()&&mymap[t].first!=b){
				cout<<"("<<mymap[t].first<<","<<mymap[t].second<<")"<<" "<<"("<<a<<","<<b<<")\n";
			}
			mypair=make_pair(a,b);
			mymap[t]=mypair;
		}
	}
}