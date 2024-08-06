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

bool DiferentDigits(int year){
    string s = to_string(year);
    sort(all(s));
    for(int i = 0; i < 3;i++){
        if(s[i] == s[i+1]){
            return false;
        }
    }
    return true;
}

void solve() {
    int y;cin>>y;
    y++;
    while(!DiferentDigits(y)){
        y++;
    }
    cout<<y;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}