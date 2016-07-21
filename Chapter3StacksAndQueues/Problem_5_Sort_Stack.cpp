// Created by Abhinav Rathi on 07/20/2016

#include <iostream>
#include "Problem_5_Sort_Stack.hpp"
using namespace std;
void Problem_5_Sort_Stack::menu(){
	int ch,data;
	stack1.clear();
	stack2.clear();
	do{
		cout<<"\n==============\nSTACK MIN MENU\n==============\n";
		cout<<"Press 1 to Push Item\n";
		cout<<"Press 2 to Pop Item\n";
		cout<<"Press 3 to Peek Item\n";
		cout<<"Press 4 to Sort Stack\n";
		cout<<"Press 5 to determine whether Stack is Empty\n";
		cout<<"Press -1 to Exit\n";
		cout<<"Enter your choice : ";
		cin>>ch;
		switch(ch){
			case -1:break;
			case 1:	cout<<"\nEnter Data : ";
				cin>>data;
				stack1.push(data);
				break;
			case 2: data=stack1.pop();
				if(data==INT_MIN)
					cout<<"\nOUTPUT -> Stack is Empty!\n";
				else
					cout<<"\nOUTPUT -> "<<data<<"\n";
				break;
			case 3:	data=stack1.peek();
				if(data==INT_MIN)
					cout<<"\nOUTPUT -> Stack is Empty!\n";
				else
					cout<<"\nOUTPUT -> "<<data<<"\n";
				break;
			case 4:	if(!stack1.isEmpty()){
					sort();
					stack1=stack2;
					stack2.clear();
				}
				break;
			case 5:	if(stack1.isEmpty())
					cout<<"\nOUTPUT -> Stack is Empty!\n";
				else
					cout<<"\nOUTPUT -> tack is NOT Empty!\n";
				break;
			default:cout<<"\nIllegal Choice!\n";
		}
	}while(ch!=-1);
};
void Problem_5_Sort_Stack::sort(){
	int N,M,s;
	bool flag=true;
	while(flag){
		N=stack1.pop();
		s=1;
		while(!stack1.isEmpty()){
			M=stack1.peek();
			if(N<M)
				stack2.push(M);
			else{
				stack2.push(N);
				N=M;
			}
			stack1.pop();
			++s;
		}
		if(s==1){
			break;
			flag=false;
		}
		while(s!=1){
			stack1.push(stack2.pop());
			--s;
		}
		stack2.push(N);
	}
	stack2.push(N);
};