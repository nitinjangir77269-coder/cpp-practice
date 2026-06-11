//Q22 count odd digits in a number 

#include<iostream>
using namespace std ;
int main ()
{
    int  num , reminder , count =0;
    cout<<"enter the number  =";
    cin>>num;
    for(; num>0;)
    {
        reminder = num%10;
        num = num/10;
        if(reminder%2==1)
        {
            count++;
        }
    }
    cout<<"odd digits in the number is   ="<<count<<endl;
    return 0;
}
