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

    int one = 0, two = 0, zero = 0;

    for (int i = 0; i < n; i++)
    {
        if (Arr[i] == 0)
        {
            zero++;
        }

        else if (Arr[i] == 1)
        {
            one++;
        }
        else if (Arr[i] == 2)
        {
            two++;
        }
    }

    for (int i = 0; i < (n - one - two); i++)
    {
        Arr[i] = 0;
    }
    for (int i = zero; i < (n - two); i++)
    {
        Arr[i] = 1;
    }
    for (int i = (zero + one); i < n; i++)
    {
        Arr[i] = 2;
    }

    cout << endl;
    cout << "Final Array is  : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
    return 0;
}