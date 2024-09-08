// find charecter lowercase or uppercase.
/*
#include <iostream>
using namespace std;
int main()
{
    char ch;

    cout << "Enter the charecter : ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "lowercase" << endl;
    }
    else
    {
        cout << "uppercase" << endl;
    }
    return 0;
}
*/
//_________________________________________________________________________________________

// find charecter lowercase or uppercase.
/*
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter charecter :";
    cin>>ch;

    if (ch>=65 && ch<=90)
    {
        cout<<"uppercase"<<endl;
    }
    else
    {
        cout<<"lowercase"<<endl;
    }

    return 0;
}
*/
//______________________________________________________________________________________________________

//  print number 1 to 5  using while loop.
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number:";
    cin>>n;

    int count =1;
    while(count<=n)
    {
        cout<<count<<" ";
        count++;
    }

    return 0;
}
*/
//_____________________________________________________________________________________

//  print number 1 to 5  using for loop.
/*
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cout<<i<<" " ;
    }
    cout<<endl;

    return 0;
}
*/
//__________________________________________________________________________________________

// Sum of numbers 1 to n.
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;

    return 0;
}
*/
//________________________________________________________________________________________

// Sum of all oddSum number from 1 to N.
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int sumOdd = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sumOdd += i;
        }

    }
     cout << sumOdd <<endl;


    return 0;
}
*/
//_________________________________________________________________________________________

// Sum of all sumEven number from 1 to N.
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;

    int sumEven = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sumEven += i;
        }
    }
    cout << sumEven << endl;

    return 0;
}
*/
//____________________________________________________________________________________________

// Sum of all sunEven number from 1 to N.(while loop)
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;

    int sumEven = 0;
    int i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
             sumEven += i;
        }
        i++;
    }
    cout<<sumEven<<endl;

    return 0;
}
*/
//___________________________________________________________________________________________

// Check if a number is prime or not.
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    bool isprime = true;

    for(int i=2; i<=(n-1);i++)
    {
        if(n%2==0)     // not prime number
        {
            isprime = false;
            break;

        }
    }


        if(isprime == true)
        {
            cout<<"prime number";
        }
        else
        {
            cout<<"not prime number";
        }


    return 0;
}
*/
//_________________________________________________________________________________________________________________

// print factorial of a number N..


#include <iostream>
using namespace std;
main()
{
    int n;
    cout << "Enetr the number : ";
    cin >> n;

    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        cout << factorial << endl;
    }
    cout << endl;

    return 0;
}

//__________________________________________________________________________________________________________
    
    //  Sum of all number from 1 to N which are divisible by 3.







