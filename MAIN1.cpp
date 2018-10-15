#include <iostream>
#include <string>
#include <fstream>

//There are 5 students in a class, with:
//ID number
//Name
//Age
//Gender
//Score
//write a c++ program that will collect 5 "student data" from the console and produce the following(in a file)  
using namespace std;

struct Student{
	string idNumber;
	string Name;
	int Age;
	string Gender;
	float Score;
	char Grade;
};


char myGrade(float score){
	char Grade;

	
	if(score >=80 && score <=100){
		Grade = 'A';
	}
	 if (score >=70 && score <=79){
		Grade = 'B';
	}
	 if (score >=60 && score <=79){
		Grade = 'C';
	}
	 if (score >=50 && score <=59){
		Grade = 'D';
	}
	 if (score >=40 && score <=49){
		Grade = 'E';
	} 
	 if(score>=30 && score<=39){
	 
		Grade = 'F';
	}
	
	return Grade;
}

int main(){
	
	Student student[5];
	
	for(int i=0; i<5; i++){
		cout << "Enter Student " << i << "'s Name:";
		cin >> student[i].Name;
		cout << "Enter Student " << i << "'s Id: ";
		cin >> student[i].idNumber;
		cout << "Enter Student " << i << "'s Age: ";
		cin >> student[i].Age;
		cout << "Enter Student " << i << "'s Gender: ";
		cin >> student[i].Gender;
		cout << "Enter Student " << i << "'s Score: ";
		cin >> student[i].Score;
		student[i].Grade = myGrade(student[i].Score);
	}
	
	
	
	fstream fin;
	fin.open("dog.txt");

	fin << "  IdNumber\tName\tAge\tGender\tScore\t\Grade" << endl;
	for(int i=0; i<3; i++){
		fin << i << " " << student[i].idNumber <<"\t\t"<<student[i].Name << "\t" << student[i].Age << "\t" << student[i].Gender<< "\t" << student[i].Score << "\t" << student[i].Grade << endl;
	}
	

	

	return 0;
	
	}
