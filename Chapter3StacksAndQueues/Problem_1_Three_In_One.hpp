// Created by Abhinav Rathi on 07/20/2016

#ifndef Problem_1_Three_In_One_hpp
#define Problem_1_Three_In_One_hpp

#include <stdlib.h>
using namespace std;
class Problem_1_Three_In_One{
private:int *arr;
	int n;
public:	Problem_1_Three_In_One(){
		n=9;	//Can Make User Input
		arr=(int*)malloc(sizeof(int)*n);
	}
	void menu();
};

#endif