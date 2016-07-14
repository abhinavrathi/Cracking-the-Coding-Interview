// Created by Abhinav Rathi on 07/13/2016

#include <vector>
#include "Problem_5_Sum_Lists.hpp"
using namespace std;
void Problem_5_Sum_Lists::process(){
	int in;
	cout<<"\nEnter contents for List 1.\n";
	input();
	a=head;
	cout<<"\nEnter contents for List 2.\n";
	input();
	b=head;
	cout<<"\nEnter 1 if numbers stored in backward order, or 2 if in forward order : ";
	cin>>in;
	while(in<1||in>2){
		cout<<"Wrong Input! Enter again : ";
		cin>>in;
	}
	if(in==1){
		head=sum_backward(a,b);
		cout<<"\nOUTPUT -> Sum of Lists with numbers stored backward :\n";
	}
	else if(in==2){
		head=sum_forward(a,b);
		cout<<"\nOUTPUT -> Sum of Lists with numbers stored forward :\n";
	}
	display();
	cout<<"\n";
};
node* Problem_5_Sum_Lists::sum_backward(node *a,node *b){
	node *head,*temp;
	head=temp=NULL;
	int carry=0;
	if(!a)
		return b;
	else if(!b)
		return a;
	while(a&&b){
		if(head){
			head->next=a;
			head=head->next;
			head->data+=b->data+carry;
			carry=head->data/10;
			head->data%=10;
			a=a->next;
			b=b->next;
			head->next=NULL;
		}
		else{
			head=a;
			head->data+=b->data+carry;
			carry=head->data/10;
			head->data%=10;
			a=a->next;
			b=b->next;
			head->next=NULL;
			temp=head;
		}
	}
	if(a)
		head->next=a;
	else if(b)
		head->next=b;
	while(carry&&head->next){
		head=head->next;
		head->data+=carry;
		carry=head->data/10;
		head->data%=10;
	}
	if(carry)
		head->next=new node(carry);
	return temp;
}
node* Problem_5_Sum_Lists::sum_forward(node *a,node *b){
	node *head,*temp;
	vector<int> x,y;
	head=temp=NULL;
	int carry=0;
	if(!a)
		return b;
	else if(!b)
		return a;
	while(a){
		x.push_back(a->data);
		a=a->next;
	}
	while(b){
		y.push_back(b->data);
		b=b->next;
	}
	while(x.size()&&y.size()){
		temp=new node;
		temp->data=x[0]+y[0]+carry;
		carry=temp->data/10;
		temp->data%=10;
		if(head){
			temp->next=head;
			head=temp;
		}
		else
			head=temp;
		x.erase(x.begin());
		y.erase(y.begin());
	}
	while(x.size()){
		temp=new node;
		temp->data=x[0]+carry;
		carry=temp->data/10;
		temp->data%=10;
		temp->next=head;
		head=temp;
		x.erase(x.begin());
	}
	while(y.size()){
		temp=new node;
		temp->data=y[0]+carry;
		carry=temp->data/10;
		temp->data%=10;
		temp->next=head;
		head=temp;
		y.erase(y.begin());
	}
	if(carry){
		temp=new node(carry);
		temp->next=head;
		head=temp;
	}
	return head;
}