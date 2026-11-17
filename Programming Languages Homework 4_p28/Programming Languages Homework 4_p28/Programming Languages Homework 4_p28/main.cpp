#include <iostream>
#include <iomanip>
#include <cstdlib>
#define SIZE 5
using namespace std;

void modifyArray(int b[], int size);
void modifyElement(int e);

int main()
{
    int a[SIZE] = { 0, 1, 2, 3, 4 };
    int i;

    cout << "Effects of passing entire array by reference:\n\nThe"
        << "values of the original array are:\n";

    for (i = 0; i < SIZE; i++)
    {
        cout << setw(3) << a[i];
    }
    cout << "\n";

    modifyArray(a, SIZE);
    cout << "The values of the modified array are:\n";
    for (i = 0; i < SIZE; i++)
    {
        cout << setw(3) << a[i];
    }

    cout << "\n\n\nEffects of passing array element"
        << "by value:\n\nThe value of a[3] is " << a[3] << "\n";

    modifyElement(a[3]);
    cout << "The value of a[3] is " << a[3] << "\n";

    system("pause");
    return 0;
}

void modifyArray(int b[], int size)
{
    int j;
    for (j = 0; j < size; j++)
    {
        b[j] *= 2;
    }
}

void modifyElement(int e)
{
    cout << "Value in modifyElement is " << (e *= 2) << endl;
}