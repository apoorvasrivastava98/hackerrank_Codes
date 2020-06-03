#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,j,T;
    string s,se,so;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        se.clear();
        so.clear();
        cin>>s;
        for(j=0;j<s.length();j++)
        {
            if(j%2==0)
            {
                se=se+s[j];
            }
            else
            {
                so=so+s[j];
            }
        }
        cout<<se<<" "<<so<<"\n";
    }

    return 0;
}
