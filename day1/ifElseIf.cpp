// Given a person's age ,find if they should get a driving license or not.
/*
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
*/
//____________________________________________________________________________________________

// ----- Find Result -----//

#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "enter your marks : " ;
    cin >> marks;

    if (marks > 100 || marks < 0)
    {
        cout << "not valid  :";
    }
    else if (marks >= 95)
    {
        cout << "A++";
    }
    else if (marks >= 90)
    {
        cout << "A+";
    }
    else if (marks >= 80)
    {
        cout << "A";
    }
    else if (marks >= 75)
    {
        cout << "B+";
    }
    else if (marks >= 60)
    {
        cout << "B";
    }
    else if (marks >= 45)
    {
        cout << "C";
    }
    else if (marks >= 35)
    {
        cout << "D";
    }
    else if (marks >= 25)
    {
        cout << "E";
    }
    else
    {
        cout << "fali";
    }

    return 0;
}

//_______________________________________________________________________________________
//_______________________________________________________________________________________

