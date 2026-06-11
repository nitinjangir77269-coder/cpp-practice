// Q= to cout digits of  number
#include<iostream>
using namespace std ;
int main ()
{
    int num , count =0;
    cout<<"enter the number ";
    cin>>num;
    for(; num>0 ;)
    {
        num = num/10;
        count++;
    }
    cout<<"digit of the number   ="<<count<<endl;
    return 0;
}
