// Created by Abhinav Rathi on 07/11/2016

#include <iostream>
#include <unordered_map>
#include "Problem_1_Remove_Dups.hpp"
using namespace std;
void Problem_1_Remove_Dups::input(){
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
void Problem_1_Remove_Dups::remove(){
	head=remove_duplicate(head);
};
node* Problem_1_Remove_Dups::remove_duplicate(node *head){
	node *temp=head,*prev=head;
	unordered_map<int,int> mymap;
	while(temp){
		if(mymap.find(temp->data)!=mymap.end())
			prev->next=temp->next;
		else{
			mymap[temp->data]=1;
			prev=temp;
		}
		temp=temp->next;
	}
	return head;
};
void Problem_1_Remove_Dups::display(){
	node *it=head;
	while(it){
		cout<<it->data;
		if(it->next)
			cout<<" -> ";
		it=it->next;
	}
};