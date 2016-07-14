// Created by Abhinav Rathi on 07/13/2016

#ifndef Problem_7_Intersection_hpp
#define Problem_7_Intersection_hpp

#include "Linked_List.hpp"
using namespace std;
class Problem_7_Intersection:public Linked_List{
private:node *a,*b;
	void make_intersection_by_values();
public:	bool check_intersection();
};

#endif