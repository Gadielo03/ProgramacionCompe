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
#define mp make_pair
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define F first
#define S second

const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    cout<<"Ingrese";
    string s;cin>>s;
    string sfinal = "";
    for(int i = s.size()-1; i > 0; i--)
    {
        sfinal+=s[i];
    }
    cout<<sfinal;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}