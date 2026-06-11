//Q13 = product of the number

#include<iostream>
using namespace std ;
int main ()
{
    int num , reminder, product =1;
    cout<<"enter the number " ;
    cin>>num;
    for(; num>0; )
    {
        reminder = num%10;
        product = product*reminder;
        num = num/10;
    }
    cout<<"product of the number ="<<product<<"\n";
    return 0 ;
}
