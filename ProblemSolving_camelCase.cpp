#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
    int c=1;
int length = s.length(); 
    for (int i = 0; i < length; i++)
    { 
        if (isupper(s[i]))  
        {
            c++;
        }       
    } 
return c;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
