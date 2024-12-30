#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your no: ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int column = 1;
        int space = 1;
        while (space < row)
        {
            cout << " ";
            space += 1;
        }
        while (column <= n - row + 1)
        {
            cout << row;
            column += 1;
        }
        row += 1;
        cout << endl;
    }

    return 0;
}