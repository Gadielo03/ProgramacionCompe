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
    ll n;cin>>n;
    ll m;cin>>m;
    ll a;cin>>a;
    ll lado1=m/a;
    if (m%a>0)
    {
        lado1++;
    }
    ll lado2=n/a;
    if (n%a>0)
    {
        lado2++;
    }
    cout<<lado1*lado2;
    
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}