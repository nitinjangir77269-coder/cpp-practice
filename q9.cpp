// q 19 fect of N number
#include<iostream>
using namespace std ;
int main ()
{
    int num , i , fect =1 ;
    cout<<"enter your number   =";
    cin>>num;
    for(i =num ; i>=1; i--)
    {
          fect = fect*i;
    }
    cout<<"fectorial of number is   ="<<fect<<endl;
    return 0 ;
}
