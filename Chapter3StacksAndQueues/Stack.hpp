// Created by Abhinav Rathi on 07/14/2016

#ifndef Stack_hpp
#define Stack_hpp

#include <iostream>
using namespace std;
struct stack_node{
	int data;
	stack_node *next;
	stack_node(){
		next=NULL;
	}
	stack_node(int d){
		data=d;
		next=NULL;
	}
};
class Stack{
private:stack_node *myStack;
public:	Stack(){
		myStack=NULL;
	}
	void clear(){
		myStack=NULL;
	}
	void push(int d);
	int pop();
	int peek();
	bool isEmpty();
};

#endif