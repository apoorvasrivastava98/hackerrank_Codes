#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string a,b;
  cin>>a>>b;
  string c=a+b;
  string d=a+b;
  int len1=a.size();
  int len2=b.size();
  char c1=a[0];
  char c2=b[0];
  b[0]=c1;
  a[0]=c2;
  cout<<len1<<" "<<len2<<"\n"<<c<<"\n"<<a<<" "<<b;
    return 0;
}
