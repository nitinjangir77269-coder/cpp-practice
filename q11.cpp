//Q11= reverse of number

#include<iostream>
using namespace std ;
int main ()
{
    int num , reminder, rev = 0;
    cout<<"enter the number =";
    cin>>num;
    for( ; num>0 ;)
    {
        reminder = num%10;
        rev = (rev*10)+reminder;
        num = num/10;
       
    }
    cout<<" reverse of the number is  = "<<rev<<endl;
    return 0;

}
