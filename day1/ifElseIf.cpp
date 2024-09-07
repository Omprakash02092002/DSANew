// ----- Find Result -----//
#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter your marks :" <<endl;
    cin>> marks;

    if (marks>100 || marks<0)
    {
        cout<<"not valid  :";
    }
    else if(marks>=95)
    {
        cout<<"A++";
    }
    else if (marks>=90)
    {
        cout<<"A+";
    }
    else if (marks>=80)
    {
        cout<<"A";
    }
    else if (marks>=75)
    {
        cout<<"B+";
    }
    else if(marks>=60)
    {
        cout<<"B";
    }
    else if (marks>=45)
    {
        cout<<"C";
    }
    else if (marks>=35)
    {
        cout<<"D";
    }
    else if (marks>=25)
    {
        cout<<"E";
    }
    else
    {
        cout<<"fali";
    }

     

    return 0;
}

//_______________________________________________________________________________________

