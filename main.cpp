#include <iostream>
#include <vector>
#include "AdditionalProblems/Additional_main.hpp"
#include "Chapter1ArraysAndStrings/Chapter1_main.hpp"
using namespace std;
int main(){
	Additional_main AM;
	Chapter1_main C1M;
	int choice;
	do{
		cout<<"\n=========\nMAIN MENU\n=========\n";
		cout<<"Chapter 1. Arrays and Strings. Press 1\n";
		cout<<"Chapter 2. Linked Lists. Press 2\n";
		cout<<"Chapter 3. Stacks and Queues. Press 3\n";
		cout<<"Chapter 4. Trees and Graphs. Press 4\n";
		cout<<"Chapter 5. Bit Manipulation. Press 5\n";
		cout<<"Chapter 6. Math and Logic Puzzles. Press 6\n";
		cout<<"Chapter 7. Object-Oriented Design. Press 7\n";
		cout<<"Chapter 8. Recursion and Dynamic Programming. Press 8\n";
		cout<<"Chapter 9. System Design and Scalability. Press 9\n";
		cout<<"Chapter 10. Sorting and Searching. Press 10\n";
		cout<<"Chapter 11. Testing. Press 11\n";
		cout<<"Chapter 12. C and C++. Press 12\n";
		cout<<"Chapter 13. Java. Press 13\n";
		cout<<"Chapter 14. Databases. Press 14\n";
		cout<<"Chapter 15. Threads and Locks. Press 15\n";
		cout<<"Chapter 16. Moderate. Press 16\n";
		cout<<"Chapter 17. Hard. Press 17\n";
		cout<<"Introduction - Big O. Press 18\n";
		cout<<"Additional Problems. Press 19\n";
		cout<<"Press -1 to Exit\n";
		cout<<"Enter your choice : ";
		cin>>choice;
		switch(choice){
			case -1:cout<<"\nProgram will now exit!\n\n";
				break;
			case 1: C1M.init();
				break;
			case 2: 
				break;
			case 3: 
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