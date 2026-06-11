// Q12== palindrome number 

#include<iostream>
using namespace std ;
int main ()
{
    int num , reminder , rev=0, copy;
    cout<<"enter the number  =";
    cin>>num ;
    copy = num ;
    for(; num>0; )
    {
        reminder = num%10;
        rev = (rev*10)+reminder ;
        num = num/10;
    }
    cout<<rev;
    if(rev == copy)
    {
      cout<<"palindrome "<<endl; 
    }
   else
   {
    cout<<" no palindrome";
   }
   return 0;
    
}
