 //Q17 sum of odd and even digit of the given number 

    #include<iostream>
    using namespace std ;
    int main ()
    {
        int num , even =0 , reminder ,odd=0; 
        cout<<"enter the number " ;
        cin>>num;
        for(; num>0;)
        {
            reminder = num%10;
            num = num/10;
            if(reminder%2==0)
            {
                even = even + reminder;
            }
            else if(reminder%2==1)
            {
                 odd = odd+reminder;
            }
        }
        cout<<"the sum of even number is   ="<<even<<endl<<endl;
        cout<<"sum of odd number   ="<<odd<<endl;
        return 0;
    }
