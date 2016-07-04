// Created by Abhinav Rathi on 07/04/2016

#include <vector>
using namespace std;
class ExpandingArrayMedian{
private:vector<int> small,big;
	void max_heapify(vector<int> &arr,int i);
	void max_heap_insert(vector<int> &arr,int n);
	void remove_max(vector<int> &arr);
	void min_heapify(vector<int> &arr,int i);
	void min_heap_insert(vector<int> &arr,int n);
	void remove_min(vector<int> &arr);
	void swap(vector<int> &arr,int i,int j);
public:	void median();
};