// Created by Abhinav Rathi on 07/08/2016

#include <vector>
#include <iostream>
#include "Problem_7_Rotate_Matrix.hpp"
using namespace std;
void Problem_7_Rotate_Matrix::input(){
	int N,i,j,t;
	mat.clear();
	cout<<"\nEnter size of square matrix : ";
	cin>>N;
	for(i=0;i<N;++i){
		vector<int> temp;
		for(j=0;j<N;++j){
			cout<<"Enter element at ("<<(i+1)<<","<<(j+1)<<") : ";
			cin>>t;
			temp.push_back(t);
		}
		mat.push_back(temp);
	}
};
void Problem_7_Rotate_Matrix::rotate_90(){
	int i,j,N,temp;
	N=mat.size();
	for(i=0;i<N/2;++i){
		for(j=i;j<N-i-1;++j){
			temp=mat[j][N-i-1];
			mat[j][N-i-1]=mat[i][j];
			mat[i][j]=mat[N-j-1][i];
			mat[N-j-1][i]=mat[N-i-1][N-j-1];
			mat[N-i-1][N-j-1]=temp;
		}
	}
	for(i=0;i<N;++i){
		for(j=0;j<N;++j)
			cout<<mat[i][j]<<" ";
		cout<<"\n";
	}
};