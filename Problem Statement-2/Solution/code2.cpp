#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
using namespace std;
int main()
{
  int n;
  string s;
  s = transform(s.begin(),s.end(),::toupper);
  int d;
  if(s.length() % 2 == 0){
    for(int i=0;i<n/2;i++){
      d += 1;
    }
    cout << d << endl;
  }
  cout << s[d] << endl;  
   return 0;
}
