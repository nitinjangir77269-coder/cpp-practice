#include<iostream>
using namespace std;
struct  student 
{
    int roll;
    char name[30];
    int age;
    float marks;

};
int main()
{
    struct student s1 ,s2;
    cout<<"enter the name of student";
    cin>>s1.name;
    cout<<"enter the roll of the student ";
    cin>>s1.roll;
    cout<<" enter the age of the student ";
    cin>>s1.age;
    cout<<" enter the ,arks of the student ";
    cin>>s1.marks;
    cout<<"entre the name of the student agian ";
    cin>>s2.name;
    cout<<"enter the roll of teh student ";
    cin>>s2.roll;
    cout<<" entre the age of the student ";
    cin>>s2.age;
    cout<<" enter the marks of the student ";
    cin>>s2.marks;
    cout<<"****** STUDENTS DETAILS ARE *********"<<endl;
    cout<<" Name ="<<s1.name<<endl;
    cout<<"roll ="<<s1.roll<<endl;
    cout<<"age ="<<s1.age<<endl;
    cout<<" marks ="<<s1.marks<<endl;
    

    cout<<" Name = "<<s2.name<<endl;
    cout<<" roll = "<<s2.roll<<endl;
    cout<<"age ="<<s2.age<<endl;
    cout<<" marks="<<s2.marks<<endl;
    return 0;
}
