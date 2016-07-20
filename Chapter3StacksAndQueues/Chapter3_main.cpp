// Created by Abhinav Rathi on 07/14/2016

#include <iostream>
#include "Chapter3_main.hpp"
using namespace std;
void Chapter3_main::init(){
	int ch,data;
	do{
		cout<<"\n==========\nSTACK MENU\n==========\n";
		cout<<"Press 1 to Push Item\n";
		cout<<"Press 2 to Pop Item\n";
		cout<<"Press 3 to Peek Item\n";
		cout<<"Press 4 to determine whether Stack is Empty\n";
		cout<<"Press 0 to Exit\n";
		cin>>ch;
		switch(ch){
			case 0:	break;
			case 1:	cin>>data;
				obj.push(data);
				break;
			case 2: data=obj.pop();
				if(data==INT_MIN)
					cout<<"\nStack is Empty!";
				else
					cout<<data;
				break;
			case 3:	data=obj.peek();
				if(data==INT_MIN)
					cout<<"\nStack is Empty!";
				else
					cout<<data;
				break;
			case 4:	if(obj.isEmpty())
					cout<<"\nStack is Empty!";
				else
					cout<<"\nStack is NOT Empty!";
				break;
			default:cout<<"\nIllegal Choice!\n";
		}
	}while(ch!=0);
};