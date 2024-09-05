// Given a person's age ,find if they should get a driving license or not.

#include <iostream>
using namespace std;
int main ()
{
    int age;
    cout<<"Enter your Age : ";
    cin>>age;

    if(18<=age)
    {
        cout<<"Driving license approved ";
    }
    else if(0<=17)
    {
        cout<<"Driving license not approved ";
    }
    else
    {
        cout<<age;

    }
    return 0;
}
