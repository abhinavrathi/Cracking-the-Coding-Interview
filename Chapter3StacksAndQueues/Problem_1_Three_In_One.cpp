// Created by Abhinav Rathi on 07/20/2016

#include <iostream>
#include "Problem_1_Three_In_One.hpp"
using namespace std;
void Problem_1_Three_In_One::menu(){
	int ch,data;
	int stack1_start,stack1_end,stack2_start,stack2_end,stack3_start,stack3_end;
	stack1_start=0;
	stack1_end=n/3;
	stack2_start=n/3+1;
	stack2_end=2*n/3;
	stack3_start=2*n/3+1;
	stack3_end=n-1;
	int i,j,k;
	i=stack1_start;
	j=stack2_start;
	k=stack3_start;
	do{
		cout<<"\n================\nTHREE STACK MENU\n================\n";
		cout<<"Press 1 to Push Item onto Stack 1\n";
		cout<<"Press 2 to Pop Item from Stack 1\n";
		cout<<"Press 3 to Peek Item from Stack 1\n";
		cout<<"Press 4 to determine whether Stack 1 is Empty\n";
		cout<<"Press 5 to Push Item onto Stack 2\n";
		cout<<"Press 6 to Pop Item from Stack 2\n";
		cout<<"Press 7 to Peek Item from Stack 2\n";
		cout<<"Press 8 to determine whether Stack 2 is Empty\n";
		cout<<"Press 9 to Push Item onto Stack 3\n";
		cout<<"Press 10 to Pop Item from Stack 3\n";
		cout<<"Press 11 to Peek Item from Stack 3\n";
		cout<<"Press 12 to determine whether Stack 3 is Empty\n";
		cout<<"Press -1 to Exit\n";
		cout<<"Enter your choice : ";
		cin>>ch;
		switch(ch){
			case -1:break;
			case 1:	if(i>stack1_end)
					cout<<"\nOUTPUT -> Stack 1 is Full!\n";
				else{
					cout<<"\nEnter Data : ";
					cin>>data;
					arr[i++]=data;
				}
				break;
			case 2:	if(i==stack1_start)
					cout<<"\nOUTPUT -> Stack 1 is Empty!\n";
				else
					cout<<"\nOUTPUT -> "<<arr[--i]<<"\n";
				break;
			case 3:	if(i==stack1_start)
					cout<<"\nOUTPUT -> Stack 1 is Empty!\n";
				else
					cout<<"\nOUTPUT -> "<<arr[i-1]<<"\n";
				break;
			case 4:	if(i==stack1_start)
					cout<<"\nOUTPUT -> Stack 1 is Empty!\n";
				else
					cout<<"\nOUTPUT -> Stack 1 is NOT Empty!\n";
				break;
			case 5:	if(j>stack2_end)
					cout<<"\nOUTPUT -> Stack 2 is Full!\n";
				else{
					cout<<"\nEnter Data : ";
					cin>>data;
					arr[j++]=data;
				}
				break;
			case 6:	if(j==stack2_start)
					cout<<"\nOUTPUT -> Stack 2 is Empty!\n";
				else
					cout<<"\nOUTPUT -> "<<arr[--j]<<"\n";
				break;
			case 7:	if(j==stack2_start)
					cout<<"\nOUTPUT -> Stack 2 is Empty!\n";
				else
					cout<<"\nOUTPUT -> "<<arr[j-1]<<"\n";
				break;
			case 8:	if(j==stack2_start)
					cout<<"\nOUTPUT -> Stack 2 is Empty!\n";
				else
					cout<<"\nOUTPUT -> Stack 2 is NOT Empty!\n";
				break;
			case 9:	if(k>stack3_end)
					cout<<"\nOUTPUT -> Stack 3 is Full!\n";
				else{
					cout<<"\nEnter Data : ";
					cin>>data;
					arr[k++]=data;
				}
				break;
			case 10:if(k==stack3_start)
					cout<<"\nOUTPUT -> Stack 3 is Empty!\n";
				else
					cout<<"\nOUTPUT -> "<<arr[--k]<<"\n";
				break;
			case 11:if(k==stack3_start)
					cout<<"\nOUTPUT -> Stack 3 is Empty!\n";
				else
					cout<<"\nOUTPUT -> "<<arr[k-1]<<"\n";
				break;
			case 12:if(k==stack3_start)
					cout<<"\nOUTPUT -> Stack 3 is Empty!\n";
				else
					cout<<"\nOUTPUT -> Stack 3 is NOT Empty!\n";
				break;
			default:cout<<"\nIllegal Choice!\n";
		}
	}while(ch!=-1);
};