// Created by Abhinav Rathi on 07/13/2016

#ifndef Problem_5_Sum_Lists_hpp
#define Problem_5_Sum_Lists_hpp

#include "Linked_List.hpp"
using namespace std;
class Problem_5_Sum_Lists:public Linked_List{
private:node *a,*b;
	node* sum_backward(node *a,node *b);
	node* sum_forward(node *a,node *b);
public:void process();
};

#endif