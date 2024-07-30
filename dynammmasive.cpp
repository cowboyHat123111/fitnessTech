

#include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;
int main()
{
    SetConsoleOutputCP(1251);

    cout << "Введіть розмірінсть масиву:" << endl;
    int n;
    cin >> n;
    int *mas = new int[n];
    cout << "Вивід масиву заповненого випадковим чином" << endl;
    for (int i = 0;i < n;i++)
    {
        mas[i] = rand() % 85 + 15;
        cout <<setw(3)<< mas[i];
    }
    cout << "\n";

    delete[] mas;
}

