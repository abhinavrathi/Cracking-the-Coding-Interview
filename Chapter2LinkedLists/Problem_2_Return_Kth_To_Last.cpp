// Created by Abhinav Rathi on 07/12/2016

#include <iostream>
#include "Problem_2_Return_Kth_To_Last.hpp"
using namespace std;
void Problem_2_Return_Kth_To_Last::process(){
	int k;
	cout<<"\n\nEnter data index (from end) to search in the list : ";
	cin>>k;
	int val=kth_to_last(head,k);
	if(val==-1)
		cout<<"\nOUTPUT -> Invalid index!\n";
	else{
		cout<<"\nOUTPUT -> "<<k;
		if(k==1)
			cout<<"st";
		else if(k==2)
			cout<<"nd";
		else if(k==3)
			cout<<"rd";
		else
			cout<<"th";
		cout<<" to last element in the list is "<<val<<"\n";
	}
};
int Problem_2_Return_Kth_To_Last::kth_to_last(node *head,int k){
	node *temp,*follow;
	temp=head;
	follow=head;
	while(temp&&k>0){
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