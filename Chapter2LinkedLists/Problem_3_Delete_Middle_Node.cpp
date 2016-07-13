// Created by Abhinav Rathi on 07/13/2016

#include "Problem_3_Delete_Middle_Node.hpp"
using namespace std;
int Problem_3_Delete_Middle_Node::remove_middle(){
	node *temp; // Can hold any node but first or last if present
	temp=head;
	if(temp&&temp->next&&temp->next->next)
		temp=temp->next;
	else
		return -1;
	head=delete_middle(temp);
	return 1;
};
node* Problem_3_Delete_Middle_Node::delete_middle(node *to_delete){
	to_delete->data=to_delete->next->data;
	to_delete->next=to_delete->next->next;
	return head;
};