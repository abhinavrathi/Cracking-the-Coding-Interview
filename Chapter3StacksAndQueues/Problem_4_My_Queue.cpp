// Created by Abhinav Rathi on 07/20/2016

#include <iostream>
#include "Problem_4_My_Queue.hpp"
using namespace std;
void Problem_4_My_Queue::menu(){
	int ch,data;
	do{
		cout<<"\n========\nMY QUEUE\n========\n";
		cout<<"Press 1 to Enqueue\n";
		cout<<"Press 2 to Dequeue\n";
		cout<<"Press 3 to Peek\n";
		cout<<"Press 4 to determine whether Queue is Empty\n";
		cout<<"Press -1 to Exit\n";
		cout<<"Enter your choice : ";
		cin>>ch;
		switch(ch){
			case -1:break;
			case 1:	cout<<"\nEnter Data : ";
				cin>>data;
				push_stack.push(data);
				break;
			case 2:	if(push_stack.isEmpty()&&pop_stack.isEmpty())
					cout<<"\nOUTPUT -> Queue is Empty!\n";
				else if(!pop_stack.isEmpty()){
					cout<<"\nOUTPUT -> "<<pop_stack.pop()<<"\n";
				}
				else{
					while(!push_stack.isEmpty())
						pop_stack.push(push_stack.pop());
					cout<<"\nOUTPUT -> "<<pop_stack.pop()<<"\n";
				}
				break;
			case 3:	if(push_stack.isEmpty()&&pop_stack.isEmpty())
					cout<<"\nOUTPUT -> Queue is Empty!\n";
				else if(!pop_stack.isEmpty()){
					cout<<"\nOUTPUT -> "<<pop_stack.peek()<<"\n";
				}
				else{
					while(!push_stack.isEmpty())
						pop_stack.push(push_stack.pop());
					cout<<"\nOUTPUT -> "<<pop_stack.peek()<<"\n";
				}
				break;
			case 4:	if(push_stack.isEmpty()&&pop_stack.isEmpty())
					cout<<"\nOUTPUT -> Queue is Empty!\n";
				else
					cout<<"\nOUTPUT -> Queue is NOT Empty!\n";
				break;
			default:cout<<"\nIllegal Choice!\n";
		}
	}while(ch!=-1);
};