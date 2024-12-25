#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int row = 1;
    // char ch = 'A';

    while (row <= n)
    {
        int column = 1;

        // char value = 'A';
        //  int value = row;
        while (column <= row)
        {
            char ch = 'A' + row - 1;
            cout << ch << " ";
            column += 1;
        }
        // ch += 1;
        cout << endl;
        row += 1;
    }
    return 0;
}