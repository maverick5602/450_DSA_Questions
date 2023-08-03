#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the Size of the Array : " << endl;
    int n;
    cin >> n;
    int k;
    cout << "Enter the value of K : " << endl;
    cin >> k;
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
        for (int j = i; j < n; j++)
        {
            if (Arr[i] > Arr[j])

            {
                int temp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = temp;
            }
        }
    }
    cout << endl;
    cout << "The Kth Smallest Element of the  Array is  :" << Arr[k - 1] << endl;

    return 0;
}
