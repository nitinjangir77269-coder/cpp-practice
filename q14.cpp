// Q17 = to check the number is armstrong or not 
#include<iostream>
 using namespace std ;
int main ()
     {
        int num , reminder , sum =0, qub , copy;
        cout<<"enter the number   ";
        cin>>num;
        copy = num;
        for(; num>0 ;)
        {
            reminder= num%10;
            num = num/10;
            qub = reminder*reminder*reminder;
            sum = sum+qub;

        }
        cout<<sum;
        if(sum  ==copy)
        {
            cout<<"it is a armstrong number   ";
        }
        else
        {
            cout<<"it is not a armstrong number";
        }
        return 0;
        
     }
