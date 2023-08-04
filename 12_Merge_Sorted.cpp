// Note - The Second array will be of size m+n ! Positive integers will be filled from 0 to  index m-1 in second array and rest index will be assigned 0 .

#include <iostream>
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
    int Arr2[m + n];

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
    for (int i = m; i < m + n; i++)
    {
        Arr2[i] = 0;
    }

    cout << "Give Array 1 is  : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << Arr1[i] << " ";
    }

    cout << endl
         << "Give Array 2 is  : " << endl;

    for (int i = 0; i < m + n; i++)
    {
        cout << Arr2[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        Arr2[m + i] = Arr1[i];
    }
    for (int i = 0; i < n + m; i++)
    {
        for (int j = i; j < n + m; j++)
        {
            if (Arr2[i] > Arr2[j])
            {
                int temp = Arr2[j];
                Arr2[j] = Arr2[i];
                Arr2[i] = temp;
            }
        }
    }

    cout << endl
         << "Final  Array is  : " << endl;

    for (int i = 0; i < m + n; i++)
    {
        cout << Arr2[i] << " ";
    }
    return 0;
}