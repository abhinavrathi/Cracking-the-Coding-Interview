// Created by Abhinav Rathi on 07/04/2016

#include <vector>
#include <iostream>
#include "ExpandingArrayMedian.hpp"
using namespace std;
void ExpandingArrayMedian::median(){
	int input;
	cout<<"\nInput one number at a time.\nCurrent Median would be displayed.\nEnter 0 to stop input.";
	cout<<"\n\nEnter: ";
	cin>>input;
	while(input!=0){
		if(small.size()==0&&big.size()==0)
			max_heap_insert(small,input);
		else if(small.size()==0&&big[0]>=input)
			max_heap_insert(small,input);
		else if(small.size()==0&&big[0]<input){
			max_heap_insert(small,big[0]);
			big[0]=input;
			min_heapify(big,0);
		}
		else if(big.size()==0&&small[0]<=input)
			min_heap_insert(big,input);
		else if(big.size()==0&&small[0]>input){
			min_heap_insert(big,small[0]);
			small[0]=input;
			max_heapify(small,0);
		}
		else if(input<=small[0])
			max_heap_insert(small,input);
		else if(input>=big[0])
			min_heap_insert(big,input);
		else{
			max_heap_insert(small,big[0]);
			big[0]=input;
			min_heapify(big,0);
		}
		while(small.size()>big.size()+1){
			min_heap_insert(big,small[0]);
			remove_max(small);
		}
		while(big.size()>small.size()+1){
			max_heap_insert(small,big[0]);
			remove_min(big);
		}
		cout<<"\nOUTPUT -> Current Median is/are : ";
		if(small.size()>big.size())
			cout<<small[0]<<"\n\n";
		else if(big.size()>small.size())
			cout<<big[0]<<"\n\n";
		else
			cout<<small[0]<<" and "<<big[0]<<"\n\n";
		cout<<"Enter: ";
		cin>>input;
	}
};
void ExpandingArrayMedian::max_heapify(vector<int> &arr,int i){
	int l,r,largest;
	l=2*i+1;
	r=2*i+2;
	largest=arr[i];
	if(l<arr.size()&&arr[l]>largest)
		largest=arr[l];
	if(r<arr.size()&&arr[r]>largest)
		largest=arr[r];
	if(largest!=arr[i]){
		if(largest==arr[l]){
			swap(arr,i,l);
			max_heapify(arr,l);
		}
		else{
			swap(arr,i,r);
			max_heapify(arr,r);	
		}
	}
};
void ExpandingArrayMedian::max_heap_insert(vector<int> &arr,int n){
	arr.push_back(n);
	int i=arr.size()-1;
	while(i>=0&&arr[i]>arr[(i-1)/2]){
		swap(arr,i,(i-1)/2);
		i=(i-1)/2;
	}
};
void ExpandingArrayMedian::remove_max(vector<int> &arr){
	arr[0]=arr[arr.size()-1];
	arr.pop_back();
	max_heapify(arr,0);
};
void ExpandingArrayMedian::min_heapify(vector<int> &arr,int i){
	int l,r,smallest;
	l=2*i+1;
	r=2*i+2;
	smallest=arr[i];
	if(l<arr.size()&&arr[l]<smallest)
		smallest=arr[l];
	if(r<arr.size()&&arr[r]<smallest)
		smallest=arr[r];
	if(smallest!=arr[i]){
		if(smallest==arr[l]){
			swap(arr,i,l);
			min_heapify(arr,l);
		}
		else{
			swap(arr,i,r);
			min_heapify(arr,r);	
		}
	}
};
void ExpandingArrayMedian::min_heap_insert(vector<int> &arr,int n){
	arr.push_back(n);
	int i=arr.size()-1;
	while(i>=0&&arr[i]<arr[(i-1)/2]){
		swap(arr,i,(i-1)/2);
		i=(i-1)/2;
	}
};
void ExpandingArrayMedian::remove_min(vector<int> &arr){
	arr[0]=arr[arr.size()-1];
	arr.pop_back();
	min_heapify(arr,0);
};
void ExpandingArrayMedian::swap(vector<int> &arr,int i,int j){
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
};