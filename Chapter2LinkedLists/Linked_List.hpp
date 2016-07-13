// Created by Abhinav Rathi on 07/12/2016

#ifndef Linked_List_hpp
#define Linked_List_hpp

using namespace std;
struct node{
	int data;
	node *next;
	node(){
		next=NULL;
	}
	node(int d){
		data=d;
		next=NULL;
	}
};
class Linked_List{
public:	node *head;
	void input();
	void display();
};

#endif