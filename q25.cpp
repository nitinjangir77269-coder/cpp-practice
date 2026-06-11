//  Q 25 count prime number from 1to n


#include<iostream>
using namespace std ;
int main ()
{
    int i, num , reminder , count , j , primecount =0;
    cout <<"enter number  ";
    cin>>num ;
    for(j = 1; j<=num ; j++)
    {
        count =0;
        for(i=1; i<=j; i++)
        {
            reminder = j%i;
            if (reminder ==0)
            {
                count++;
            }
        }
        if(count==2)
        {
           primecount++; 
        }

    }
    cout<<primecount;
    
    return 0;
}
