// Created by Abhinav Rathi on 07/14/2016

#ifndef Problem_8_Loop_Detection_hpp
#define Problem_8_Loop_Detection_hpp

#include "Linked_List.hpp"
using namespace std;
class Problem_8_Loop_Detection:public Linked_List{
private:void make_loop();
public:	int loop_detect();
};

#endif