// Q5 = even  number 1-->N
#include<iostream>
using namespace std ;
int main ()
{
    int i , num ;
    cout <<"enter number = ";
    cin>>num;
    for(i=1; i<= num ; i++)
    {
        if(i%2==0)
        {
           cout<<i<<endl<<endl; 
        }
        
    }
    return 0 ;

 }
