#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Create(int* a, const int size, const int min, const int max)
{
    for (int i = 0; i < size; i++)
        a[i] = rand() % (max - min + 1) + min;
}

void Print(const int* a, const int size)
{
    cout << "A1 = {";
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << " }" << endl;
}

void Reverse(int* a, const int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = a[i];
        a[i] = a[size - i - 1];
        a[size - i - 1] = temp;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    const int n = 5;
    int a[n];
    int min = -10;
    int max = 10;

    Create(a, n, min, max);
    Print(a, n);
    Reverse(a, n);
    Print(a, n);

    return 0;
}

