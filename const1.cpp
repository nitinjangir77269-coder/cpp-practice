#include<iostream>
using namespace std ;
class student
{
  public:
  string name ;
  int roll;
  int age ;
  float marks;
  student ()
  {  
  
    cout<<" enter the name ="<<endl;
    cin>>name;
    cout<<" enter the roll "<<endl;
    cin>>roll;
    cout<<" enter the age of the student "<<endl;
    cin>>age;
    cout<<" entre the marks of the student "<<endl;
    cin>>salery;
    cout<<" *** details of the students are ***"<<endl;
    cout<<" name ="<<name <<endl;
    cout<<" roll ="<<roll<<endl;
    cout<<" age ="<<age<<endl;
    cout<<" marks ="<<salery<<endl;   
  }
};
int main ()
{
  student s1;
  student s2;
  student s3;
  return 0;

}
