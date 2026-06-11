//q15 = sum of even digit number in a number//
#include<iostream>
    using namespace std ;
    int main ()
    {
        int num , reminder , sum=0;
        cout<<"enter the number   =";
        cin>>num;
        for(; num>0;)
        {
            reminder = num%10;
            num = num/10;
            if(reminder%2==0)
            {
            sum = sum +reminder;
            }

        }
        cout<<"sum of even number   ="<<sum;
        return 0;
    }
