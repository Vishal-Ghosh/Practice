#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter no: ";
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        int count = i;
        while (j <= i)
        {
            cout << count << " ";
            j += 1;
            count += 1;
        }
        cout << endl;
        i += 1;
    }
    return 0;
}

/*Sample- Enter no: 6
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
6 7 8 9 10 11 */
