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

//  print number 1 to 5  using while loop.
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
