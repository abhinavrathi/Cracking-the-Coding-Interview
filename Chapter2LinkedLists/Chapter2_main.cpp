// Created by Abhinav Rathi on 07/11/2016

#include <iostream>
#include "Chapter2_main.hpp"
#include "Problem_1_Remove_Dups.hpp"
#include "Problem_2_Return_Kth_To_Last.hpp"
#include "Problem_3_Delete_Middle_Node.hpp"
#include "Problem_4_Partition.hpp"
#include "Problem_5_Sum_Lists.hpp"
#include "Problem_6_Palindrome.hpp"
#include "Problem_7_Intersection.hpp"
#include "Problem_8_Loop_Detection.hpp"
using namespace std;
void Chapter2_main::init(){
	Problem_1_Remove_Dups P1;
	Problem_2_Return_Kth_To_Last P2;
	Problem_3_Delete_Middle_Node P3;
	Problem_4_Partition P4;
	Problem_5_Sum_Lists P5;
	Problem_6_Palindrome P6;
	Problem_7_Intersection P7;
	Problem_8_Loop_Detection P8;
	int choice,val;
	do{
		cout<<"\n=======================\nCHAPTER 2. LINKED LISTS\n=======================\n";
		cout<<"Press 1 for 2.1 Remove Dups\n";
		cout<<"Press 2 for 2.2 Return Kth to Last\n";
		cout<<"Press 3 for 2.3 Delete Middle Node\n";
		cout<<"Press 4 for 2.4 Partition\n";
		cout<<"Press 5 for 2.5 Sum Lists\n";
		cout<<"Press 6 for 2.6 Palindrome\n";
		cout<<"Press 7 for 2.7 Intersection\n";
		cout<<"Press 8 for 2.8 Loop Detection\n";
		cout<<"Press -1 to Exit\n";
		cout<<"Enter your choice : ";
		cin>>choice;
		switch(choice){
			case -1:cout<<"\nGoing back to Main Menu!\n";
				break;
			case 1: P1.input();
				cout<<"\nOriginal List : ";
				P1.display();
				P1.remove();
				cout<<"\n\nModified List : ";
				P1.display();
				cout<<"\n";
				break;
			case 2: P2.input();
				cout<<"\nOriginal List : ";
				P2.display();
				P2.process();
				break;
			case 3: P3.input();
				cout<<"\nOriginal List : ";
				P3.display();
				if(P3.remove_middle()!=-1){
					cout<<"\n\nModified List : ";
					P3.display();
				}
				else
					cout<<"\n\nOUTPUT -> The list is too short for the operation!";
				cout<<"\n";
				break;
			case 4: P4.input();
				cout<<"\nOriginal List : ";
				P4.display();
				P4.make_partition();
				cout<<"\nModified List : ";
				P4.display();
				cout<<"\n";
				break;
			case 5: P5.process();
				break;
			case 6: P6.input();
				cout<<"\nOriginal List : ";
				P6.display();
				if(P6.check_palindrome())
					cout<<"\n\nOUTPUT -> The list is a palindrome!\n";
				else
					cout<<"\n\nOUTPUT -> The list is NOT a palindrome!\n";
				break;
			case 7: if(P7.check_intersection())
					cout<<"\nOUTPUT -> The two lists intersect each other!\n";
				else
					cout<<"\nOUTPUT -> The two lists do NOT intersect each other!\n";
				break;
			case 8: P8.input();
				cout<<"\nOriginal List : ";
				P8.display();
				val=P8.loop_detect();
				if(val!=-1)
					cout<<"\n\nOUTPUT -> The start of the loop is "<<val<<"!\n";
				else
					cout<<"\n\nOUTPUT -> The list does NOT have a loop!\n";
				break;
			default:cout<<"\nIllegal Choice!\n";	
		}
	}while(choice!=-1);
};