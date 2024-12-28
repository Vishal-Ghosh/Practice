#include <iostream>
using namespace std;

// Star printing with spaces
int main()
{
    int n;
    cout << "Enter your no.: ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int column = 1;
        int space = n - row;
        while (space)
        {
            cout << " ";
            space -= 1;
        }
        while (column <= row)
        {
            cout << '*';
            column += 1;
        }
        cout << endl;
        row += 1;
    }
    return 0;
}