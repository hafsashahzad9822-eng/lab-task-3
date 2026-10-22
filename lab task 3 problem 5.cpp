#include <iostream>
using namespace std;

int main()
{
    int n;
    long long fact = 1;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    cout << n << "! = " << fact;

    return 0;
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


