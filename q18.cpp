// Q 18 to find the largest number to the given numebr

    #include<iostream>
    using namespace std;
    int main ()
    {
        int num , reminder , max=0 ;
        cout<<" enter the number  =";
        cin>>num;
        for(; num>0; )
        {
          reminder = num%10;
          num = num/10;
          if(reminder>max)
          {
            max =reminder;
          }
        }
        cout<<max;
        return 0;
    }
