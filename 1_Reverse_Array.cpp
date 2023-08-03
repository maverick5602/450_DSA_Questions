#include <iostream>
using namespace std;

int main()
{
int n;
cin >> n ;
int Arr[n];

cout<<"Enter the Elements of the Array : "<<endl;

for(int i=0;i<n;i++)
{
cin>>Arr[i];
}

cout<< "Give Array is  : "<<endl;

for(int i=0;i<n;i++)
{
cout<<Arr[i]<<" ";
}


int j=n-1;
for(int i =0;i<n/2;i++)
{
int temp =Arr[i];
Arr[i] =Arr[j];
Arr[j] = temp;
j--;
}

cout<<endl;

cout<<"The Reversed Array is  :" <<endl;
for(int i=0;i<n;i++)
{
cout<<Arr[i]<<" ";
}


return 0;
}
