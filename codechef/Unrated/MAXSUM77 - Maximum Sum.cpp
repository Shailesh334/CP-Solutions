#include <bits/stdc++.h>
using namespace std;



void solve() {

  int n , k;
  cin >> n >> k;

  
  vector<int> a(n);
  for(int i = 0 ;i<n ; i++)cin >> a[i];


  vector<int> p(n);
  p[0] = a[0];

  for(int i = 1 ; i<n ; i++){
    p[i] = p[i-1] + a[i];
  } 

   vector<int> s(n);
  s[n-1] = a[n-1];

  for(int i = n-2 ; i>= 0 ; i--){
    s[i] = s[i+1] + a[i];
  } 

  // for(int i : p){
  //   cout << i << " ";
  // }
  // cout << endl;

  // for(int i : s){
  //   cout << i << " ";
  // }
  // cout << endl;

  int i = -1;
  int j = n-k;
  int mini = INT_MAX;

  while(j <= n){

    if( i == -1){
      mini = min(mini , s[j]);
    }
    else if(j == n){
      mini = min(mini , p[i]);
    }
    else{
      mini = min(mini , p[i] + s[j]);
    }
    i++;
    j++;
  }

  cout << s[0] - mini << endl;


}

  
  


int main() {
int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
 
}
