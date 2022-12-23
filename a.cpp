#include<bits/stdc++.h>
//#include "add.h"
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define M freopen("input.txt","r",stdin);
//#define MM freopen("output.txt","w",stdout);
using namespace std;

int main(){
  int TC;
  cin >> TC;
  for(int k = 1; k <= TC; k++){
    int n;
    scanf("%d",&n);
    int ans = 0;
    for(int i = 0; i < n; i++){
      int x;
      scanf("%d",&x);
      ans += x;
    }
    printf("Case %d: %d\n",k,ans);
  }
  return 0;
}