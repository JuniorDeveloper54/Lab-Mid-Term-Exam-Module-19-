#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    while(n--)
    {
        cout<<arr[n]<<" ";
    }
    return 0;
}
/*

5
6 2 3 3 5

*/
