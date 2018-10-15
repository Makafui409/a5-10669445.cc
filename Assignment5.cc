#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	struct student{
		string ID;
		string Name;
		string gender;
		int age;
		double score;
		char grade;
	}s[5];
	
	for(int i=0; i<5; i++)
	{
		cout<<"Please enter your credentials"<<endl;
		cout<<"ID : ";
		cin>>s[i].ID;
		cout<<endl;
		cout<<"Name:";
		cin>>s[i].Name;
		cout<<endl;
		cout<<"Gender:";
		cin>>s[i].gender;
		cout<<endl;
		cout<<"Age:";
		cin>>s[i].age;
		cout<<endl;
		cout<<"Exam score:";
		cin>>s[i].score;
		cout<<endl;
		cout<<"nextstudent"<<endl;
		
		
		if(s[i].score>=80 && s[i].score<=100)
		s[i].grade='A';
		else if(s[i].score>=70 && s[i].score<80)
		s[i].grade='B';
		else if(s[i].score>=60 && s[i].score<70)
		s[i].grade='c';
		else if(s[i].score>=50 && s[i].age<60)
		s[i].grade='D';
		else if(s[i].score>40 && s[i].age<50)
		s[i].grade='E';
		else if(s[i].score<40)
		s[i].grade='F';
		
	
	
}
return 0;
}
