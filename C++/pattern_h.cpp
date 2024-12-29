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
        int space = row - 1;
        int star = n - row + 1;
        while (space > 0)
        {
            cout << " ";
            space -= 1;
        }
        while (star > 0)
        {
            cout << '*';
            star -= 1;
        }
        cout << endl;
        row += 1;
    }
    return 0;
}