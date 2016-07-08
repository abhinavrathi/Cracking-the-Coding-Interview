// Created by Abhinav Rathi on 07/08/2016

#include <iostream>
#include <vector>
#include "Problem_8_Zero_Matrix.hpp"
using namespace std;
void Problem_8_Zero_Matrix::input(){
	int i,j,N,M,t;
	mat.clear();
	cout<<"\nEnter no. of rows in the matrix : ";
	cin>>N;
	cout<<"Enter no. of columns in the matrix : ";
	cin>>M;
	for(i=0;i<N;++i){
		vector<int> temp;
		for(j=0;j<M;++j){
			cout<<"Enter element at ("<<(i+1)<<","<<j+1<<") : ";
			cin>>t;
			temp.push_back(t);
		}
		mat.push_back(temp);
	}
};
void Problem_8_Zero_Matrix::zero_matrix(){
	int i,j,N,M;
	N=mat.size();
	if(N>0){
		M=mat[0].size();
		vector<int> row(N),col(M);
		for(i=0;i<N;++i){
			for(j=0;j<M;++j){
				if(mat[i][j]==0){
					row[i]=1;
					col[j]=1;
				}
			}
		}
		for(i=0;i<N;++i){
			if(row[i]==1){
				for(j=0;j<M;++j)
					mat[i][j]=0;
			}
		}
		for(j=0;j<M;++j){
			if(col[j]==1){
				for(i=0;i<N;++i)
					mat[i][j]=0;
			}
		}
		for(i=0;i<N;++i){
			for(j=0;j<M;++j)
				cout<<mat[i][j]<<" ";
			cout<<"\n";
		}
	}
};