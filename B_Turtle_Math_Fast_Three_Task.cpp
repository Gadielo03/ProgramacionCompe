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

int sum(vector<int> vec){
    int sum=0;
    for (int i = 0; i < vec.size(); i++)
    {
        sum+=vec[i];
    }
    return sum;
}

void solve() {
    int n;cin>>n;
    vector<int> vec;
    
    for (int i = 0; i < n; i++)
    {
        int aux;cin>>aux;
        vec.pb(aux);
    }
    
    if (n==1 && vec[0]%3!=0)
    {
        cout<<1<<endl;
    }
    
    
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