// Created by Abhinav Rathi on 07/11/2016

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
class Problem_1_Remove_Dups{
private:node *head;
	node* remove_duplicate(node *head);
public:	void input();
	void remove();
	void display();
};