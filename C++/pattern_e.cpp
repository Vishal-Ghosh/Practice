#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your no:";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int column = 1;
        char value = 'A' + n - row;

        while (column <= row)
        {

            cout << value << " ";
            column += 1;
            value += 1;
        }

        row += 1;
        cout << endl;
    }
    return 0;
}