// Created by Abhinav Rathi on 07/12/2016

#include <iostream>
#include <unordered_map>
#include "Problem_2_Return_Kth_To_Last.hpp"
using namespace std;
void Problem_2_Return_Kth_To_Last::process(){
	int k;
	cout<<"\nEnter data index from last : ";
	cin>>k;
	int val=kth_to_last(head,k);
	if(val==-1)
		cout<<"\nOUTPUT -> Invalid index!\n";
	else
		cout<<"\nOUTPUT -> "<<k<<"th to last element in the list is "<<val<<"\n";
};
int Problem_2_Return_Kth_To_Last::kth_to_last(node *head,int k){
	node *temp,*follow;
	temp=follow=head;
	while(temp&&k>=0){
		temp=temp->next;
		--k;
	}
	if(k)
		return -1;
	while(temp!=NULL){
		temp=temp->next;
		follow=follow->next;
	}
	return follow->data;
};