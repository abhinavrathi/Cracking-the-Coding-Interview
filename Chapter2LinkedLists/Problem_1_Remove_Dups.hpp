// Created by Abhinav Rathi on 07/11/2016

#ifndef Problem_1_Remove_Dups_hpp
#define Problem_1_Remove_Dups_hpp

#include "Linked_List.hpp"
using namespace std;
class Problem_1_Remove_Dups:public Linked_List{
private:node* remove_duplicate(node *head);
public:	void remove();
};

#endif