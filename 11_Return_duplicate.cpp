#include <iostream>
#include <algorithm>
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

    for (int i = 0; i < n; i++)
    {
        int index = Arr[i];

        if (Arr[index] < 0)
        {
            cout << endl
                 << "The duplicate Element is " << index << endl;
            return 0;
        }
        Arr[index] = -Arr[index];
    }

    return 0;
}