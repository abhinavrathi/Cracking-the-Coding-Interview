// Created by Abhinav Rathi on 07/12/2016

#include <iostream>
#include "Linked_List.hpp"
using namespace std;
void Linked_List::input(){
	int in;
	head=NULL;
	node *it;
	cout<<"\nFirstly, Enter Numbers sequentially to be inserted at end, in an empty List.\nPress 0 any time to stop entering.\n\n";
	do{
		cout<<"Enter input : ";
		cin>>in;
		if(in){
			node *temp=new node(in);
			if(head){
				it->next=temp;
				it=it->next;
			}
			else{
				head=temp;
				it=head;
			}
		}
	}while(in!=0);
};
void Linked_List::display(){
	node *it=head;
	while(it){
		cout<<it->data;
		if(it->next)
			cout<<" -> ";
		it=it->next;
	}
};