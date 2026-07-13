#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int age;
    int marks;
};
int main()
{
    student s1;
    s1.name = "Nitin";
    s1.roll = 23;
    s1.age = 12;
    s1.marks = 23;
    cout<<s1.age<<endl<<s1.marks<<endl<<s1.name<<endl<<s1.roll;
    return 0;
}
