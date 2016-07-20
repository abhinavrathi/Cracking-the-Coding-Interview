// Created by Abhinav Rathi on 07/20/2016

#include <iostream>
#include "Problem_2_Stack_Min.hpp"
using namespace std;
void Problem_2_Stack_Min::menu(){
	int ch,data;
	arr.clear();
	min.clear();
	do{
		cout<<"\n==============\nSTACK MIN MENU\n==============\n";
		cout<<"Press 1 to Push Item\n";
		cout<<"Press 2 to Pop Item\n";
		cout<<"Press 3 to Peek Item\n";
		cout<<"Press 4 to Find Minimum in Stack\n";
		cout<<"Press 5 to determine whether Stack is Empty\n";
		cout<<"Press -1 to Exit\n";
		cout<<"Enter your choice : ";
		cin>>ch;
		switch(ch){
			case 0:	break;
			case 1:	cout<<"\nEnter Data : ";
				cin>>data;
				arr.push(data);
				if(min.isEmpty()||data<min.peek())
					min.push(data);
				else
					min.push(min.peek());
				break;
			case 2: data=arr.pop();
				min.pop();
				if(data==INT_MIN)
					cout<<"\nOUTPUT -> Stack is Empty!\n";
				else
					cout<<"\nOUTPUT -> "<<data<<"\n";
				break;
			case 3:	data=arr.peek();
				if(data==INT_MIN)
					cout<<"\nOUTPUT -> Stack is Empty!\n";
				else
					cout<<"\nOUTPUT -> "<<data<<"\n";
				break;
			case 4:	data=min.peek();
				if(data==INT_MIN)
					cout<<"\nOUTPUT -> Stack is Empty!\n";
				else
					cout<<"\nOUTPUT -> "<<data<<"\n";
				break;
			case 5:	if(arr.isEmpty())
					cout<<"\nOUTPUT -> Stack is Empty!\n";
				else
					cout<<"\nOUTPUT -> tack is NOT Empty!\n";
				break;
			default:cout<<"\nIllegal Choice!\n";
		}
	}while(ch!=-1);
}