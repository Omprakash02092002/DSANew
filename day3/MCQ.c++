// find charecter lowercase or uppercase.

#include <iostream>
using namespace std;
int mian()
{
    char ch;

    cout << "Enter the charecter : ";
    cin >> ch;

    if (  ch >= 'a' && 'z' >= ch)
    {
        cout << "lowercase"<<endl;
    }
    else
    {
        cout << "uppercase"<<endl;
    }
    return 0;
}
