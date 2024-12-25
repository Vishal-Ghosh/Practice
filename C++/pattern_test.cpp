#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int row = 1;
    int value = 1;
    // char ch = 'A';

    while (row <= n)
    {
        int column = 1;

        while (column <= row)
        {
            // char ch = 'A';
            cout << value << " ";
            column += 1;
            value += 1;
        }

        cout << endl;
        row += 1;
    }
    return 0;
}