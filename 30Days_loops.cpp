#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,i,p=1;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(i=1;i<=10;i++)
    {
        p=n*i;
        cout<<n<<" x "<<i<<" = "<<p<<"\n";
        p=1;
    }
    return 0;
}
