#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i
             << " = " << n * i << endl;
    }

    return 0;
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

