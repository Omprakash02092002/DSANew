//calculate 'simple interest' from principle(p), rate(r) and time(t).

#include <iostream>
using namespace std;
int main()
{
    int P, T;
    cout << "Amount (p) : ";
    cin >> P;

    cout << "Enter the time (T) : ";
    cin >> T;

   int R;
    cout << "Rate (R) : ";
    cin >> R;

    int Simple_Interest;

    Simple_Interest = (P * R * T) / 100;
    cout <<" Simple_Interest : "<< Simple_Interest << endl;

    return 0;
}