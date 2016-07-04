//Created by Abhinav Rathi on 07/04/2016

#include <vector>
#include <iostream>
#include "CommonElements.hpp"
using namespace std;
void CommonElements::input(){
	int N,i,in;
	cout<<"\nEnter number of elements in first sorted array : ";
	cin>>N;
	for(i=0;i<N;++i){
		cout<<"Enter element "<<(i+1)<<" of first sorted array : ";
		cin>>in;
		a.push_back(in);
	}
	cout<<"\nEnter number of elements in second sorted array : ";
	cin>>N;
	for(i=0;i<N;++i){
		cout<<"Enter element "<<(i+1)<<" of second sorted array : ";
		cin>>in;
		b.push_back(in);
	}
};
void CommonElements::display_common(){
	int i,j;
	i=j=0;
	cout<<"\nOUTPUT -> Common Elements are ";
	while(i<a.size()&&j<b.size()){
		if(a[i]==b[j]){
			cout<<a[i]<<" ";
			i++;
			j++;
		}
		else if(a[i]>b[j])
			j++;
		else
			i++;
	}
	cout<<"\n";
};