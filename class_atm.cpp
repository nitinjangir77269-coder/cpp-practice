#include<iostream>
using namespace std;
class bank
{
    string name;
    long long account;
    string dob;
    int pin;
    int balance;
    int current;
    public :
    void details()
    {
        name = " KKboy";
        account = 227210035207;
        dob = "27/02/2008";
        pin = 7654;
        balance = 20000;
        current = balance;
        

    }
    bool withdraw()
    {
        int enteredPin, ammount;
        int attemps =0;
    
        while(attemps<3)
        {
            cout<<" enter the 4 digit pin"<<endl;
            cin>>enteredPin;
            if(enteredPin==pin)
            {
              cout<<" corect pin"<<endl;
              cout<<" enter the ammount "<<endl;
              cin>>ammount;
              if(ammount<=balance)
              {
                cout<<" withdrowl complited"<<endl;
                cout<<" your current balance is =="<<endl;
                current=balance-ammount;
                cout<<current<<endl;
                cout<<" thankyou for visiting"<<endl;
                return true;

              }
              else
              {
                cout<<" insufficient balance"<<endl;
                return false;
              }
            }
            else
            {
                attemps++;
                cout<<" incorrect pin plese try again"<<endl;
            }
            if(attemps==3)
            {
                cout<<" to many wron attemp please try after 24 hower "<<endl;
                break;
            }
            
        }
        return false;

    }
    
    void display()
    {
        cout<<" **** ACCOUNT DETAILS ARE ****"<<endl;
        cout<<"__________________________________"<<endl;
        cout<<"ACCOUNT HOILDER NAME ="<<name<<endl;
        cout<<"date of birth ="<<dob<<endl;
        cout<<"Your current balance is="<<current<< endl;
        cout<<"___________________________________"<<endl;
        cout<<" *** THANKYOU FOR VISITING *** "<<endl;
    }
    void security()
    {
        int enteredPin;
        int attemps=0;
        while(attemps<3)
        {

        cout<<" enter your pin"<<endl;
        cin>>enteredPin;
        if(enteredPin==pin)
        {
            display();
            break;
        }
        else
        {
            cout<<" wrong pin please try again "<<endl;
            attemps++;
        }
        if(attemps==3)
        {
            cout<<"wrong attemps many time plese try again after 24 howr"<<endl;
            break;
        }
       
       }
    }

};
int main ()
{
    int click;
    bank c1;
    cout<<"_____ WELLCOME_____"<<endl;
    cout<<" Please selecr service "<<endl;
    cout<<" CASH -->1"<<endl<<" bank details --> 2"<<endl;
    cin>>click;
    c1.details();
    if(click==1)
    {
        if(c1.withdraw())
        {
        
          c1.display();
        }
    }
    else if(click==2)
    {
        c1.security();
    }
    else
    {
      cout<<" invalid option "<<endl;
    }
    return 0;
}
