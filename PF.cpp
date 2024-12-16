#include <iostream>
#include <math.h>
using namespace std;
void meraFunc(int meylim){
    int a = 1;
    int b = 1;
    int temp = 0;
    for (int i = 1; i <= meylim; i++)
    {
        for (int k = 1; k <= 1; k++)
        {
            cout << "\nWhen a= " << a << "and b = " << b << ", the result is " << pow(a, a) << a + b << pow(b, b);
        }
        for (int j = 1; j <= 2; j++)
        {

            if (a == b)
            {
                b++;
                temp = b;
                cout << "\nWhen a= " << a << "and b = " << b << ", the result is " << pow(a, a) << a + b << pow(b, b);
            }
            else
            {
                a++;
                b--;
                cout << "\nWhen a= " << a << "and b = " << b << ", the result is " << pow(a, a) << a + b << pow(b, b);
            }
        }
        b = temp;
    }
}
int main()
{
    int limit;

    cout << "\nPlease Input the limit upto the number you wan to calculate sum : ";
    cin >> limit;
    meraFunc(limit);
}
