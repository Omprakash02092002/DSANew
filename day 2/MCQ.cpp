//---sum of two numbers.
/*
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the number(a) : ";
    cin >> a;
    cout << "Enter the number(b) :";
    cin >> b;

    int sum = a + b;
    cout << "sum : " << sum  << endl;
    return 0;
}
*/
//_____________________________________________________________________________________

// uneary operator
/*
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = a++ ;
    int c = b-- ;

    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;

    return 0;
}
*/
//___________________________________________________________________________________

//  ----------Arthametic Operators--------------------

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;

    int Addition, Subtruction, Multiplication,  Modulus;
    double Divide;

    Addition = a + b;
    Subtruction = a - b;
    Multiplication = a * b;
    Divide = a / (double)b;     
    Modulus = a % b;

    cout << "Addition : " << Addition << endl;
    cout << "Subtruction: " << Subtruction << endl;
    cout << "Multiplication: " << Multiplication << endl;
    cout << "Divide: " << Divide << endl;
    cout << "MOdulus: " << Modulus << endl;

    return 0;
}

//__________________________________________________________________________________
















