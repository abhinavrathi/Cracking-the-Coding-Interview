// Created by Abhinav Rathi on 07/20/2016

#include <iostream>
#include "Problem_6_Animal_Shelter.hpp"
using namespace std;
void Problem_6_Animal_Shelter::menu(){
	int ch,subch,i,no;
	string data;
	cat.clear();
	dog.clear();
	catno.clear();
	dogno.clear();
	no=0;
	do{
		cout<<"\n===================\nANIMAL SHELTER MENU\n===================\n";
		cout<<"Press 1 to Enqueue Animal\n";
		cout<<"Press 2 to Dequeue Animal\n";
		cout<<"Press 3 to Dequeue Cat\n";
		cout<<"Press 4 to Dequeue Dog\n";
		cout<<"Press 5 to determine whether Animal Shelter is Empty\n";
		cout<<"Press -1 to Exit\n";
		cout<<"Enter your choice : ";
		cin>>ch;
		switch(ch){
			case -1:break;
			case 1:	cout<<"\nEnter 1 for Cat or 2 for Dog : ";
				cin>>subch;
				while(subch!=1&&subch!=2){
					cout<<"\nIllegal Choice. Please Enter again : ";
					cin>>subch;
				}
				if(subch==1){
					cout<<"\nEnter Name of Cat : ";
					cin.ignore();
					getline(cin,data);
					cat.push_back(data);
					catno.push_back(no++);
				}
				else{
					cout<<"\nEnter Name of Dog : ";
					cin.ignore();
					getline(cin,data);
					dog.push_back(data);
					dogno.push_back(no++);
				}
				break;
			case 2: if(cat.size()==0&&dog.size()==0)
					cout<<"\nOUTPUT -> Animal Shelter is Empty!\n";
				else if(dog.size()==0)
					cat_remove();
				else if(cat.size()==0)
					dog_remove();
				else{
					if(catno[0]<dogno[0])
						cat_remove();
					else
						dog_remove();
				}
				break;
			case 3:	if(cat.size()==0)
					cout<<"\nOUTPUT -> No Cats in Animal Shelter!\n";
				else
					cat_remove();
				break;
			case 4:	if(dog.size()==0)
					cout<<"\nOUTPUT -> No Dogs in Animal Shelter!\n";
				else
					dog_remove();
				break;
			case 5:	if(cat.size()==0&&dog.size()==0)
					cout<<"\nOUTPUT -> Animal Shelter is Empty!\n";
				else
					cout<<"\nOUTPUT -> Animal Shelter is NOT Empty!\n";
				break;
			default:cout<<"\nIllegal Choice!\n";
		}
	}while(ch!=-1);
};
void Problem_6_Animal_Shelter::cat_remove(){
	cout<<"\nOUTPUT -> "<<cat[0]<<"\n";
	cat.erase(cat.begin());
	catno.erase(catno.begin());
};
void Problem_6_Animal_Shelter::dog_remove(){
	cout<<"\nOUTPUT -> "<<dog[0]<<"\n";
	dog.erase(dog.begin());
	dogno.erase(dogno.begin());
};