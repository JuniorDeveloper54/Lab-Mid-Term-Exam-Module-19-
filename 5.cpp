#include<bits/stdc++.h>
using namespace std;

int maxi_ele(int n, int arr[])
{

    if(n==1) return arr[0];
    return max(arr[n-1], maxi_ele(n-1, arr));
}

int main()
{
    int a;
    cin>>a;
    int arr[a];
    for(int i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxi_ele(n,arr)<<"\n";
}

/*

5
6 6 6 6 6

*/
