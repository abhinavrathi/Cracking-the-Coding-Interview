// Created by Abhinav Rathi on 07/20/2016

#ifndef Problem_6_Animal_Shelter_hpp
#define Problem_6_Animal_Shelter_hpp

#include <vector>
using namespace std;
class Problem_6_Animal_Shelter{
private:vector<string> cat,dog;
	vector<int> catno,dogno;
	void cat_remove();
	void dog_remove();
public:	void menu();
};

#endif