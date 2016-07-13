// Created by Abhinav Rathi on 07/11/2016

#include <unordered_map>
#include "Problem_1_Remove_Dups.hpp"
using namespace std;
void Problem_1_Remove_Dups::remove(){
	head=remove_duplicate(head);
};
node* Problem_1_Remove_Dups::remove_duplicate(node *head){
	
	// Method 1 -> Using extra space

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

	// Method 2 -> Without using extra space

	/*
	node *i,*j,*prev;
	for(i=head;i!=NULL;i=i->next){
		prev=i;
		for(j=i->next;j!=NULL;j=j->next){
			if(j->data==i->data)
				prev->next=j->next;
			else
				prev=prev->next;
		}
	}
	return head;
	*/
};