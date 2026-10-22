#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter n: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "Sum = " << sum;

    return 0;
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

