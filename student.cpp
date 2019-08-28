//#include<iostream>
//#include<cstring>
#include "student.h"
using namespace std;
student::student()
{
	rollno=1;
	name="abs";
	percentage=60;
}
void student::Accept()
{
	cout<<"-------Enter info----"<<endl;
	cout<<"Enter your roll no.:";
	cin>>rollno;
	cout<<"Enter your name:";
	cin.get();
	getline(cin,name);
	cout<<"Enter your %age";
	cin>>percentage;
}
void student::Display()
{
	cout<<"rollno::"<<rollno<<endl;
	cout<<"name::"<<name<<endl;
	cout<<"percentage::"<<percentage<<endl;
}

