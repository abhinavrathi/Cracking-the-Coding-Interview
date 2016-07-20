#include <iostream>
#include <vector>
#include "AdditionalProblems/Additional_main.hpp"
#include "Chapter1ArraysAndStrings/Chapter1_main.hpp"
#include "Chapter2LinkedLists/Chapter2_main.hpp"
#include "Chapter3StacksAndQueues/Chapter3_main.hpp"
using namespace std;
int main(){
	Additional_main AM;
	Chapter1_main C1M;
	Chapter2_main C2M;
	Chapter3_main C3M;
	int choice;
	do{
		cout<<"\n=========\nMAIN MENU\n=========\n";
		cout<<"Press 1 for Chapter 1. Arrays and Strings.\n";
		cout<<"Press 2 for Chapter 2. Linked Lists.\n";
		cout<<"Press 3 for Chapter 3. Stacks and Queues.\n";
		cout<<"Press 4 for Chapter 4. Trees and Graphs.\n";
		cout<<"Press 5 for Chapter 5. Bit Manipulation.\n";
		cout<<"Press 6 for Chapter 6. Math and Logic Puzzles.\n";
		cout<<"Press 7 for Chapter 7. Object-Oriented Design.\n";
		cout<<"Press 8 for Chapter 8. Recursion and Dynamic Programming.\n";
		cout<<"Press 9 for Chapter 9. System Design and Scalability.\n";
		cout<<"Press 10 for Chapter 10. Sorting and Searching.\n";
		cout<<"Press 11 for Chapter 11. Testing.\n";
		cout<<"Press 12 for Chapter 12. C and C++.\n";
		cout<<"Press 13 for Chapter 13. Java.\n";
		cout<<"Press 14 for Chapter 14. Databases.\n";
		cout<<"Press 15 for Chapter 15. Threads and Locks.\n";
		cout<<"Press 16 for Chapter 16. Moderate.\n";
		cout<<"Press 17 for Chapter 17. Hard.\n";
		cout<<"Press 18 for Introduction - Big O.\n";
		cout<<"Press 19 for Additional Problems.\n";
		cout<<"Press -1 to Exit\n";
		cout<<"Enter your choice : ";
		cin>>choice;
		switch(choice){
			case -1:cout<<"\nProgram will now exit!\n\n";
				break;
			case 1: C1M.init();
				break;
			case 2: C2M.init();
				break;
			case 3: C3M.init();
				break;
			case 4: 
				break;
			case 5: 
				break;
			case 6: 
				break;
			case 7: 
				break;
			case 8: 
				break;
			case 9: 
				break;
			case 10: 
				break;
			case 11: 
				break;
			case 12: 
				break;
			case 13: 
				break;
			case 14: 
				break;
			case 15: 
				break;
			case 16: 
				break;
			case 17: 
				break;
			case 18: cout<<"\nRelevant Information is posted as Various Notes on GitHub Repository!\n";
				break;
			case 19: AM.init();
				break;
			default:cout<<"\nIllegal Choice!\n";	
		}
		if(choice!=-1){
			cin.ignore();
			cout<<"\nPress Enter to continue...";
			while(cin.get()!='\n');
		}
	}while(choice!=-1);
	return 1;
};