 // Q19  to find the smallest digit in the number 

    #include<iostream>
    using namespace std ;
    int main ()
    {
        int num , reminder , max=9;
        cout<<"ernter the number   =";
        cin>>num;
        for(; num>0;)
        {
            reminder = num %10;
            num = num/10;
            if(reminder<max)
            {
                max = reminder;
            }
        }
        cout<<max;
        return 0;
    }
