// Created by Abhinav Rathi on 07/13/2016

#include <vector>
#include "Problem_7_Intersection.hpp"
using namespace std;
bool Problem_7_Intersection::check_intersection(){
	cout<<"\nEnter contents for List 1.\n";
	input();
	a=head;
	cout<<"\nEnter contents for List 2.\n";
	input();
	b=head;
	make_intersection_by_values();	// All except first data values
	node* temp;
	int l1,l2,i;
	l1=l2=0;
	temp=a;
	while(temp){
		temp=temp->next;
		l1++;
	}
	temp=b;
	while(temp){
		temp=temp->next;
		l2++;
	}
	for(i=0;i<l1-l2;++i)
		a=a->next;
	for(i=0;i<l2-l1;++i)
		b=b->next;
	while(a){
		if(a==b)
			return true;
		a=a->next;
		b=b->next;
	}
	return false;
}
void Problem_7_Intersection::make_intersection_by_values(){
	node *temp,*temp1;;
	vector<int> stack1,stack2;
	int l1,l2;
	l1=l2=0;
	temp=a;
	while(temp){
		stack1.push_back(temp->data);
		temp=temp->next;
		l1++;
	}
	temp=b;
	while(temp){
		stack2.push_back(temp->data);
		temp=temp->next;
		l2++;
	}
	while(stack1.size()&&stack2.size()&&stack1.back()==stack2.back()){
		stack1.pop_back();
		stack2.pop_back();
	}
	if(l1!=stack1.size()){
		temp=a;
		while(stack1.size()){
			temp=temp->next;
			stack1.pop_back();
		}
		temp1=b;
		while(stack2.size()){
			temp=temp->next;
			stack2.pop_back();
		}
		temp->next=temp1->next;
	}
};