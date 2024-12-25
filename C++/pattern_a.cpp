#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int row = 1;

    while (row <= n)
    {
        int column = 1;
        // char value = 'A';
        //  int value = row;
        while (column <= n)
        {
            char ch = 'A' + row + column - 2;
            cout << ch << " ";
            column += 1;
            ch += 1;
        }

        cout << endl;
        row += 1;
    }
    return 0;
}