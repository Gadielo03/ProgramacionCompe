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
    string s;cin>>s;
    vector<int> vec;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '+')
        {
            vec.push_back(s[i]-'0');
        }
    }
    sort(vec.begin(),vec.end());

    for (int i = 0; i < vec.size()-1; i++)
    {
        cout<<vec[i]<<"+";
    }
    cout<<vec[vec.size()-1];
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}