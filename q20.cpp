//Q20 count number of zero (o) in a number

#include<iostream>
using namespace std ;
int main ()
{
    int num , reminder, count =0;
    cout<<"enter the number   =";
    cin>>num;
    for(; num >0;)
    {
    reminder = num%10;
    num = num/10;
    if(reminder==0)
       {
        count++;
       }
    }
    cout<<"number of zeros is  = "<<count<<endl;
    return 0;
}
