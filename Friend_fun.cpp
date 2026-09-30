#include<iostream>
using namespace std;
class student 
{
  int roll ;
  int marks ;
  friend void com(student s1, student s2);
  public :
  void setdata()
  {
    cout<<" entert the roll;"<<endl;
    cin>>roll;
    cout<<" enter the marks "<<endl;
    cin>>marks;
  }
};
void com(student s1, student s2)
{
  if(s1.marks>s2.marks)
  {
    cout<<" student 1"<<s1.roll<<" with the higher marks "<<endl<<" marks is ="<<s1.marks<<endl;

  }
  else if(s2.marks>s1.marks)
  {
    cout<<" 2nd studuent"<<s2.roll<<" with thw high marks ="<<endl<<s2.marks<<endl;
  }
}
int main ()
{
  student s1,s2;
  cout<<" enter the detals of the first dtudent "<<endl;
  s1.setdata();
  cout<<" enter the details of the second student "<<endl;
  s2.setdata();
  cout<<" enter the details of the second student "<<endl;
  com(s1,s2);
  return 0;

}
