// Created by Abhinav Rathi on 07/13/2016

#include <iostream>
#include "Problem_4_Partition.hpp"
using namespace std;
void Problem_4_Partition::make_partition(){
	int x;
	cout<<"\n\nEnter a number to partition the list around : ";
	cin>>x;
	head=partition(head,x);
};
node* Problem_4_Partition::partition(node *head,int x){
	node *left,*right,*temp;
	left=NULL;
	right=NULL;
	while(head){
		if(head->data<x){
			if(left){
				temp=head;
				head=head->next;
				temp->next=left;
				left=temp;
			}
			else{
				left=head;
				head=head->next;
				left->next=NULL;
			}
		}
		else{
			if(right){
				temp=head;
				head=head->next;
				temp->next=right;
				right=temp;
			}
			else{
				right=head;
				head=head->next;
				right->next=NULL;
			}
		}
	}
	temp=left;
	if(!temp)
		return right;
	else{
		while(temp->next!=NULL)
			temp=temp->next;
	}
	temp->next=right;
	return left;
};