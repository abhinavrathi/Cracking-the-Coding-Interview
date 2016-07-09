// Created by Abhinav Rathi on 07/06/2016

#include <iostream>
#include "Chapter1_main.hpp"
#include "Problem_1_Is_Unique.hpp"
#include "Problem_2_Check_Permutation.hpp"
#include "Problem_3_URLify.hpp"
#include "Problem_4_Palindrome_Permutation.hpp"
#include "Problem_5_One_Away.hpp"
#include "Problem_6_String_Compression.hpp"
#include "Problem_7_Rotate_Matrix.hpp"
#include "Problem_8_Zero_Matrix.hpp"
#include "Problem_9_String_Rotation.hpp"
using namespace std;
void Chapter1_main::init(){
	Problem_1_Is_Unique P1;
	Problem_2_Check_Permutation P2;
	Problem_3_URLify P3;
	Problem_4_Palindrome_Permutation P4;
	Problem_5_One_Away P5;
	Problem_6_String_Compression P6;
	Problem_7_Rotate_Matrix P7;
	Problem_8_Zero_Matrix P8;
	Problem_9_String_Rotation P9;
	int choice;
	do{
		cout<<"\n=============================\nCHAPTER 1. ARRAYS AND STRINGS\n=============================\n";
		cout<<"Press 1 for 1.1 Is Unique\n";
		cout<<"Press 2 for 1.2 Check Permutation\n";
		cout<<"Press 3 for 1.3 URLify\n";
		cout<<"Press 4 for 1.4 Palindrome Permutation\n";
		cout<<"Press 5 for 1.5 One Away\n";
		cout<<"Press 6 for 1.6 String Compression\n";
		cout<<"Press 7 for 1.7 Rotate Matrix\n";
		cout<<"Press 8 for 1.8 Zero Matrix\n";
		cout<<"Press 9 for 1.9 String Rotation\n";
		cout<<"Press -1 to Exit\n";
		cout<<"Enter your choice : ";
		cin>>choice;
		switch(choice){
			case -1:cout<<"\nGoing back to Main Menu!\n";
				break;
			case 1: P1.input();
				cout<<"\nOUTPUT -> ";
				if(P1.is_unique())
					cout<<"The string has unique characters.\n";
				else
					cout<<"The string does NOT have unique characters.\n";
				break;
			case 2: P2.input();
				cout<<"\nOUTPUT -> ";
				if(P2.check_permutation())
					cout<<"The two strings are permutations of each other.\n";
				else
					cout<<"The two strings are NOT permutations of each other.\n";
				break;
			case 3: P3.input();
				P3.urlify();
				break;
			case 4: P4.input();
				cout<<"\nOUTPUT -> ";
				if(P4.palin_permutation())
					cout<<"The string is a palindrome permutation.\n";
				else
					cout<<"The string is NOT a palindrome permutation.\n";
				break;
			case 5: P5.input();
				cout<<"\nOUTPUT -> ";
				if(P5.one_edit())
					cout<<"The two strings are one (or zero) edits away.\n";
				else
					cout<<"The two strings are NOT one (or zero) edits away.\n";
				break;
			case 6: P6.input();
				cout<<"\nOUTPUT -> The modified string is : "<<P6.compress()<<"\n";
				break;
			case 7: P7.input();
				cout<<"\nOUTPUT -> The rotated matrix is :\n";
				P7.rotate_90();
				break;
			case 8: P8.input();
				cout<<"\nOUTPUT -> The modified matrix is :\n";
				P8.zero_matrix();
				break;
			case 9: P9.input();
				cout<<"\nOUTPUT -> ";
				if(P9.string_rotation())
					cout<<"The second string is a rotation of the first.\n";
				else
					cout<<"The second string is NOT a rotation of the first.\n";
				break;
			default:cout<<"\nIllegal Choice!\n";	
		}
	}while(choice!=-1);
};