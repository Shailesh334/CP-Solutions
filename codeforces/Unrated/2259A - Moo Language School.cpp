#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
#include <numeric>
#include <queue>
#include <unordered_map>


 
 
using namespace std;
 
// #define int long long
// #define endl '\n'
 
// const int MOD = 1e9 + 7;
// const int INF = 1e18;



void solve() {

  int n , k;
  cin >> n >> k;

  string s;
  cin >> s;

  int i = 0 ; 
  int j = 0;
  int cnt = 0;

 while(i <= n - k ){
  bool chck = true;
  int j = i + k - 1;
 
 for(int z = i ; z <= j ; z++){

  if(s[z] == '0')chck = false;

 }
  i = j + 1;
  if(chck)cnt++;
 }

 cout << cnt << endl;
}

  
  


  



  




signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
 
}

 


 
 

 
    
