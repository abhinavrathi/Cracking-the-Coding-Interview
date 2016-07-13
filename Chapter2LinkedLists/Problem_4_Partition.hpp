// Created by Abhinav Rathi on 07/13/2016

#ifndef Problem_4_Partition_hpp
#define Problem_4_Partition_hpp

#include "Linked_List.hpp"
using namespace std;
class Problem_4_Partition:public Linked_List{
private:node* partition(node *head,int x);
public: void make_partition();
};

#endif