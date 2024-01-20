#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <iomanip>
#include <bitset>
#include <unordered_map>
#include <unordered_set>
#include <complex>
#include <tuple>
#include <cassert>
#include <climits>

using namespace std;

#define ll long long
#define pb push_back
#define F first
#define S second
#define debug cout<<"debug"<<endl;

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    int n;cin>>n;
    string a;cin>>a;
    string b;cin>>b;
    string c;cin>>c;
    bool v1=false;

    for (int i = 0; i < n; i++)
    {
        if ((a[i] != c[i] && b[i] != c[i]) || (a[i]==b[i] && a[i] != c[i] && b[i] != c[i]) )
        {
            v1=true;
         }
    }
   if (v1)
   {
      cout<<"YES"<<endl;
   } else   cout<<"NO"<<endl;
   
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}