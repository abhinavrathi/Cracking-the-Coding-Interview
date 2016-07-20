// Created by Abhinav Rathi on 07/20/2016

#include <iostream>
#include <vector>
#include "Problem_3_Stack_Of_Plates.hpp"
using namespace std;
void Problem_3_Stack_Of_Plates::menu(){
	int ch,data,q,r;
	plates.clear();
	do{
		cout<<"\n==============\nSTACK MIN MENU\n==============\n";
		cout<<"Press 1 to Push Item\n";
		cout<<"Press 2 to Pop Item\n";
		cout<<"Press 3 to Peek Item\n";
		cout<<"Press 4 to Pop Item at Index\n";
		cout<<"Press -1 to Exit\n";
		cout<<"Enter your choice : ";
		cin>>ch;
		switch(ch){
			case -1:break;
			case 1:	cout<<"\nEnter Data : ";
				cin>>data;
				if(no==-1||plates.size()==0||plates[no].size()==limit){
					vector<int> temp;
					temp.push_back(data);
					plates.push_back(temp);
					if(plates[no].size()==limit)
						++no;
				}
				else
					plates[no].push_back(data);
				break;
			case 2: if(no==-1||plates.size()==0)
					cout<<"\nOUTPUT -> Stack is Empty!\n";
				else{
					cout<<"\nOUTPUT -> "<<plates[no].back()<<"\n";
					plates[no].pop_back();
					if(plates[no].size()==0)
						--no;
				}
				break;
			case 3:	if(no==-1||plates.size()==0)
					cout<<"\nOUTPUT -> Stack is Empty!\n";
				else
					cout<<"\nOUTPUT -> "<<plates[no].back()<<"\n";
				break;
			case 4:	cout<<"\nEnter Index : ";
				cin>>data;
				data-=1;
				q=data/limit;
				r=data%limit;
				if(data>=0&&plates.size()!=0&&q<=no&&r<=plates[no].size()){
					cout<<"\nOUTPUT -> "<<plates[q][r]<<"\n";
					while(q<no){
						plates[q].erase(plates[q].begin()+r);
						plates[q].push_back(plates[q+1][0]);
						plates[q+1].erase(plates[q+1].begin());
						r=0;
						q++;
					}
				}
				else
					cout<<"\nOUTPUT -> Invalid Index!\n";
				break;
			default:cout<<"\nIllegal Choice!\n";
		}
	}while(ch!=-1);
};