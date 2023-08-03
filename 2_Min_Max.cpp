#include <iostream>
using namespace std;

int main()
{
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

    int max = Arr[0];
    int minn = Arr[0];

    for (int i = 0; i < n; i++)
    {
        if (Arr[i] < minn)
        {
            minn = Arr[i];
        }
        else if (Arr[i] > max)
        {
            max = Arr[i];
        }
    }
    cout << endl;
    cout << "The Max Element of the  Array is  :" << max << endl;
    cout << "The Min Element of the  Array is  :" << minn << endl;

    return 0;
}
