// Created by Abhinav Rathi on 07/20/2016

#ifndef Problem_3_Stack_Of_Plates_hpp
#define Problem_3_Stack_Of_Plates_hpp

#include <vector>
using namespace std;
class Problem_3_Stack_Of_Plates{
private:vector<vector<int> > plates;
	int no,limit;
public:	Problem_3_Stack_Of_Plates(){
		no=0;
		limit=5;
	};
	Problem_3_Stack_Of_Plates(int n){
		no=0;
		limit=n;
	};
	void menu();
};

#endif