// Q8 = sum of firt n even numbers

#include<iostream>
using namespace std;
int main ()
{
    int num ,i , sum =0;
    cout<<"enter the number  = ";
    cin>>num;
    for (i= 2; i<=num; i=i+2)
    {
        sum = sum+i;
    }
    cout<<" sum of even number in given number = "<<sum<<endl;
}
