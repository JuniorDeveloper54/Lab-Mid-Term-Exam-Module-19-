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
    sort(arr,arr+n);

    int i=0;
    for(int j=1; j<n; j++)
    {
        if(arr[j]!=arr[i])
        {
            arr[++i]=arr[j];
        }
    }
    //cout<<i<<"\n";

    for(int j=0; j<=i; j++)
    {
        cout<<arr[j]<<" ";
    }

    return 0;
}


/*

5
6 3 2 3 5


*/
