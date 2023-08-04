#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    cout << "Enter the size of Array 1 :" << endl;
    int n;
    cin >> n;
    int Arr1[n];
    cout << "Enter the size of Array 2 :" << endl;
    int m;
    cin >> m;
    int Arr2[m];

    cout << "Enter the Elements of the Array 1 : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> Arr1[i];
    }

    cout << "Enter the Elements of the Array 2 : " << endl;

    for (int i = 0; i < m; i++)
    {
        cin >> Arr2[i];
    }

    cout << "Give Array 1 is  : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << Arr1[i] << " ";
    }

    cout << "Give Array 2 is  : " << endl;

    for (int i = 0; i < m; i++)
    {
        cout << Arr2[i] << " ";
    }

    int c[m + n];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        c[i] = Arr1[i];
    }

    for (int i = n; i < n + m; i++)
    {
        c[i] = Arr2[j++];
    }

    sort(c, c + m + n);
    int count = 1;
    for (int i = 1; i < n + m; i++)
    {
        if (c[i] != c[i - 1])
        {
            count++;
        }
    }

    cout << endl
         << "The size of the Union of Array is : " << count << endl;

    return 0;
}
