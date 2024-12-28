#include <iostream>
using namespace std;
// Printing stars
int main()
{
    int n;
    cout << "Enter your no.: ";
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int column = n - row + 1; // Resets columns
        while (column >= 1)
        {

            cout << '*';
            column -= 1;
        }

        cout << endl;
        row += 1;
    }
    return 0;
}