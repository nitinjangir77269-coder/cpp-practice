#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
    char first_name[50] , middle_name[50],last_name[50];
    cout<<"first name charcter max 50 "<<endl;
    cout<<" enter your first name ";
    cin>>first_name;
    cout<<"took length "<<endl<<strlen(first_name)<<endl;
    cout<<"middla name charcter max 50 "<<endl;
    cout<<" enter your middle name ";
    cin>>middle_name;
    cout<<" took length ="<<strlen(middle_name)<<endl;
    cout<<" last name character max 50"<<endl;
    cout<<" enter your last name ";
    cin>>last_name;
    cout<<" took length ="<<strlen(last_name)<<endl;
    cout<<"first name ="<<first_name<<endl<<" middle name="<<middle_name<<endl<<"last name ="<<last_name<<endl;
    cout<<"totel size occupied your full name is="<<strlen(first_name)+strlen(middle_name)+strlen(last_name);
    cout<<" in totel size="<< sizeof(first_name)+ sizeof(middle_name)+sizeof(last_name)<<endl;
    cout<<sizeof(first_name)<<endl;
    cout<<sizeof(middle_name)<<endl;
    cout<<sizeof(last_name)<<endl;
    return 0;

}
