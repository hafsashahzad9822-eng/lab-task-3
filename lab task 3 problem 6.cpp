#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


