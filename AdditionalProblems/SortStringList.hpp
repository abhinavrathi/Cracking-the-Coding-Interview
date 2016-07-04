// Created by Abhinav Rathi on 07/04/2016

#include <vector>
using namespace std;
class SortStringList{
private:vector<string> list;
	void sort_single(string &s,int p,int r);
	void merge_single(string &s,int p,int q,int r);
	void sort_all(vector<string> &s,int p,int r);
	void merge_all(vector<string> &s,int p,int q,int r);
	bool compare(string a,string b);
public:	void input();
	void sort();
};