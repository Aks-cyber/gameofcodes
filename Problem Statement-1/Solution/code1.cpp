#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int t,n,a,k,b;
  cin >> t;
  while(t>0){
    cin >> n >> a >> b >> k;
    int v,u;
    v=0,u=0;
    for(int i = 0; i < n; i++){
      if(i % a == 0 && i % b != 0) u += 1;
      if(i % b == 0 && i % a != 0) v += 1;
    }
    if(v == k || u == k) cout << "Win";
    else cout << "Lose";
    t = t - 1;
  }
   return 0;
}
