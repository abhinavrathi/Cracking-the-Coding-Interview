// Created by Abhinav Rathi on 07/14/2016

#include "Problem_8_Loop_Detection.hpp"
using namespace std;
int Problem_8_Loop_Detection::loop_detect(){
	make_loop();	// Loop on Previous occuring value
	node *slow,*fast;
	slow=head;
	fast=head;
	while(fast&&fast->next){
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
			break;
	}
	if(!fast||!fast->next)
		return -1;
	slow=head;
	while(slow!=fast){
		slow=slow->next;
		fast=fast->next;
	}
	return slow->data;
};
void Problem_8_Loop_Detection::make_loop(){
	node *temp=head;
	if(temp){
		while(temp->next)
			temp=temp->next;
		node *temp1=head;
		while(temp1){
			if(temp1->data==temp->data&&temp!=temp1)
				break;
			temp1=temp1->next;
		}
		if(temp1&&temp1->data==temp->data&&temp!=temp1)
			temp->next=temp1;
	}
};