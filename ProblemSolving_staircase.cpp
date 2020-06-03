#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
        int sp=n-1;
for(int i=0;i<n;i++)
{
    for(int k=0;k<sp;k++)
    {
        cout<<" ";
    }
    for(int j=0;j<=i;j++)
    {
cout<<"#";
    }
sp--;
cout<<"\n";
}


}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
