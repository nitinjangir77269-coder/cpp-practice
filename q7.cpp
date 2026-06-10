// Q6== sum of 1-->N number 
#include<iostream>
using namespace std ;
int main ()
{
    int num , sum =0 , i;
    cout<<"enter number =  ";
    cin>>num;
    for(i=1; i<=num; i++)
    {
        sum = sum +i;
    }
    cout<<" sum of the number   ="<<sum<<endl;
    return 0;
    

}
