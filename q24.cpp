// Q 24 Print all prime number from 1-->N //

#include<iostream>
using namespace std ;
int main ()
{
    int i , j , count , reminder , num;
    cout<<"enter the number  =";
    cin>>num;
    for(j=2; j<=num; j++)
    {
        count=0;
        for(i=1; i<=j; i++)
        {
            reminder = j%i;
            if(reminder==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            cout<<j <<endl;
        }
    }
    
    return 0;
    
}
