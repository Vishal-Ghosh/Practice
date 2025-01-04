#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a no.:  ";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        for (int column = 1; column <= n; column++)
        {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}