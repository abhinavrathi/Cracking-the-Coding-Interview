// Created by Abhinav Rathi on 07/13/2016

#ifndef Problem_3_Delete_Middle_Node_hpp
#define Problem_3_Delete_Middle_Node_hpp

#include "Linked_List.hpp"
using namespace std;
class Problem_3_Delete_Middle_Node:public Linked_List{
private:node* delete_middle(node *to_delete);
public:	int remove_middle();
};

#endif