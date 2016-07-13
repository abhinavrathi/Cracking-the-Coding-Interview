// Created by Abhinav Rathi on 07/12/2016

#ifndef Problem_2_Return_Kth_To_Last_hpp
#define Problem_2_Return_Kth_To_Last_hpp

#include "Linked_List.hpp"
using namespace std;
class Problem_2_Return_Kth_To_Last:public Linked_List{
private:int kth_to_last(node *head,int k);
public:	void process();
};

#endif