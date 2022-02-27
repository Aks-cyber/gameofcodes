#include<iostream>
#include<cstdio>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,t;
  set<int> s;
  cin >> t;
  while(t>0){
    cin >> n;
    for(int i=0;i<n;i++){
      s.insert((i)%n);
    }
    cout << set;
    t = t - 1;
  }
  
   return 0;
}
