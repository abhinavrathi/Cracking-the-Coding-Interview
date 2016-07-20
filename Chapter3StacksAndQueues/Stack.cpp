// Created by Abhinav Rathi on 07/14/2016

#include "Stack.hpp"
using namespace std;
void Stack::push(int d){
	stack_node *temp=new stack_node(d);
	if(myStack)
		temp->next=myStack;
	myStack=temp;
};
int Stack::pop(){
	if(isEmpty())
		return INT_MIN;
	int n=myStack->data;
	myStack=myStack->next;
	return n;
};
int Stack::peek(){
	if(isEmpty())
		return INT_MIN;
	return myStack->data;
};
bool Stack::isEmpty(){
	return myStack==NULL;
};