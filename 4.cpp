#include <bits/stdc++.h>
using namespace std;

bool isPal(string s, int i)
{

    if(i > s.size()/2)
    {
        return true ;
    }

    return s[i]==s[s.size()-i-1] && isPal(s, i+1) ;
}

int main()
{
    string s = "abcba" ;
    if (isPal(s, 0))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}

/*


*/
