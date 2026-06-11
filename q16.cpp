 // q16 sum of odd digit number in given number 

    #include<iostream>
    using namespace std ;
    int main ()
    {
        int num , sum=0, reminder;
        cout<<"enter the number   =";
        cin>>num;
        for(; num>0;)
        {
            reminder = num%10 ;
            num = num/10;
            if(reminder%2==1)
            {
                sum = sum + reminder;
            }
        }
        cout<<"sum of odd digit in the number  "<<sum<<endl;
        return 0;

    }
