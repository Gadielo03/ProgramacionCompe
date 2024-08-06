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
    double a;cin>>a;
    double b;cin>>b;
    double c;cin>>c;

    double dif=max(a,b)-min(a,b);
    cout<<ceil(dif/(c*2))<<endl;

    
    
}

 main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}