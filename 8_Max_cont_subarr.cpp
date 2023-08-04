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

    int sum = 0;
    int maxi = Arr[0];

    for (int i = 0; i < n; i++)
    {
        sum = sum + Arr[i];
        maxi = max(maxi, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }

    cout << endl
         << "The max sum of a contigious subarray is : " << maxi << endl;

    return 0;
}