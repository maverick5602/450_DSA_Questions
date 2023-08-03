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

    int l = 0, r = n - 1;
    while (l < r)
    {
        if (Arr[l] > 0 && Arr[r] > 0)
        {
            r--;
        }
        else if (Arr[l] < 0 && Arr[r] > 0)
        {
            l++;
            r--;
        }
        else if (Arr[l] > 0 && Arr[r] < 0)
        {
            int temp = Arr[l];
            Arr[l] = Arr[r];
            Arr[r] = temp;
            l++;
            r--;
        }
        else if (Arr[l] < 0 && Arr[r] < 0)
        {
            l++;
        }
    }

    cout << endl;
    cout << "Final Array is  : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}
