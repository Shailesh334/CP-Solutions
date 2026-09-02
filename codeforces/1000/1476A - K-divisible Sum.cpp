#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
#include <numeric>
#include <queue>
#include <unordered_map>


 
 
using namespace std;
 
#define int long long
#define endl '\n'
 
const int MOD = 1e9 + 7;
const int INF = 1e18;



void solve() {

  int n , k;
  cin >> n >> k;

  if(n == 1){
    cout << k << endl;
    return;
  }
  if( n == k){
    cout << 1 << endl;
    return;
  }  
  if(n > k){
   
   int c = n / k;

    if(n % k != 0)
        c++;

    k *= c;
    
    int a = k / n;
    int b = k % n;

    if(b != 0)a++;

    cout << a << endl;
    return;
  }
  else{
    int a = k / n;
    int b = k % n;

    if(b != 0)a++;

    cout << a << endl;
    return;
  }

  
  


  



  


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

 


 
 

 
    
