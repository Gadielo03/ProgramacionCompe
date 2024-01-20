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

bool isGood(string s){
    for (int i = 0; i < s.size()-1; i++)
    {
        if (s[i]==s[i+1])
        {
            return false;
        }
    }
    return true;
}

bool duplicates(string s,int c){
    for (int i = 0; i < s.size()-1; i++)
    {
        if (s[i]==c && s[i+1]==c)
        {
            return true;
        }
    }
    return false;
}

void solve() {
    int n;cin>>n;
    int m;cin>>m;
    string s;cin>>s;
    string t;cin>>t;
    
    if (isGood(s))
    {
        cout<<"Yes"<<endl;
    }
    else if (isGood(t) && t[0]=='1' && t[t.size()-1]=='1' && !duplicates(s,'1'))
    {
        cout<<"Yes"<<endl;
    }
    else if (isGood(t) && t[0]=='0' && t[t.size()-1]=='0' && !duplicates(s,'0'))
    {
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
    
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