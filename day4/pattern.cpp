/*    1 2 3 4
      1 2 3 4
      1 2 3 4          print pattern
      1 2 3 4     */
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
*/
//______________________________________________________________________________________________

#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter value : "<<endl;
    cout<<"n :";
    cin>>n;
   

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<"* ";
        }
        cout<<endl;

    }
    



    return 0;
}