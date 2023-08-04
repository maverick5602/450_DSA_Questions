#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the Size of the Array : " << endl;
    int n;
    cin >> n;

    int Arr[n];

    cout << "Enter the Elements of the Array : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }

    cout << "Give Array is  : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }

    int a = Arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        Arr[i + 1] = Arr[i];
    }
    Arr[0] = a;
    cout << endl
         << "Final  Array is  : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
    return 0;
}