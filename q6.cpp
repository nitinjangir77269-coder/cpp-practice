// Q6= oddd number from n-->1

#include<iostream>
using namespace std;
int main ()
{
    int i , num ;
    cout<<" enter number   =";
    cin>>num ;
    for(i=num; i>=1; i--)
    {
        if(i%2==1)
        {
        cout<<i<<endl;
        }
    }
    return 0;
}

