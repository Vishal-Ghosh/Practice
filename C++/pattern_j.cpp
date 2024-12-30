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
        int value = 1;
        int column = 1;
        while (value <= n - row)
        {
            cout << ' ';
            value += 1;
        }
        while (column <= row)
        {
            cout << row;
            column += 1;
        }
        row += 1;
        cout << endl;
    }
    return 0;
}