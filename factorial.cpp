/*   Print the first N factorial numbers.
1! = 1
2! = 2 * 1!
3! = 3 * 2!            */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the numbers : ";
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