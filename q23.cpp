//Q 23 to chck a number is prime or not 
#include<iostream>
using namespace std ;
int main ()
{
    int num , i, count = 0, div;
    cout<<"enter the number   =";
    cin>>num;
    for(i=1; i<=num ; i++)
    {
          div = num%i;
          if(div==0 )
          {
            count++;
          }
    }
    if(count==2)
    {
        cout<<"is the prime number ";
    }
    else
    {
        cout<<" there has not prime number  ";
    }
    return 0;
}
