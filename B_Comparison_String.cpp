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
#define all(v) v.begin(), v.end()

const ll MOD = 1e9+7;
const ll INF = 1e18;


void solve() {
   int n;cin>>n;
   string s;cin>>s;
   int aux=0;
   int contador = 0;
   bool band=false;
   for (int i = 0; i < n-1; i++)
   {
        if (s[i]==s[i+1])
        {
            contador++;
        }else {
            contador=0;
        }
        if (contador>aux)
        {
            aux=contador;
        }
   }
   cout<<aux+2<<endl;

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