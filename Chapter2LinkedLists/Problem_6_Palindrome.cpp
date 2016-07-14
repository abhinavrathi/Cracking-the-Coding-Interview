// Created by Abhinav Rathi on 07/13/2016

#include <vector>
#include "Problem_6_Palindrome.hpp"
using namespace std;
bool Problem_6_Palindrome::check_palindrome(){
	node *slow,*fast;
	vector<int> stack;
	slow=fast=head;
	if(!head||!head->next)
		return true;
	while(fast&&fast->next){
		stack.push_back(slow->data);
		slow=slow->next;
		fast=fast->next->next;
	}
	if(fast)
		slow=slow->next;	// Odd Items
	while(slow){
		if(slow->data!=stack.back())
			return false;
		stack.pop_back();
		slow=slow->next;
	}
	return true;
};