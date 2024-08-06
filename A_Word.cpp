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
    string s;cin>>s;
    string slower=s;
    string supper=s;
    int minu=0;
    int mayu=0;
    for (int i = 0; i < s.size(); i++)
    {
        supper[i]=toupper(supper[i]);
        slower[i]=tolower(slower[i]);
        if (slower[i]==s[i])
        {
            minu++;
        } else mayu++;
    }
    
    if (minu>=mayu)
    {
        cout<<slower;
        
    }else cout<<supper;
    

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}