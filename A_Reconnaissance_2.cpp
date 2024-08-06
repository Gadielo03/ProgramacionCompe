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
    vector <int>vec;
    

    for (int i = 0; i < n; i++)
    {
        int aux;cin>>aux;
        vec.push_back(aux);
    }

    int dif = abs(vec[0]-vec[1]); //10
    int pos1 = 1;
    int pos2 = 2;
    //cout<<"Dif inicial: "<<dif<<endl;

    for(int i = 1; i <= n-1; i++)
    {
        int aux = abs(vec[i]-vec[i-1]);
        //cout<<"Aux: "<<aux<<endl;
        if (aux<dif)
        {   
            dif=aux;
            pos1=i;
            pos2=i+1;
           // cout<<pos1<<" "<<pos2<<endl;
        }
       // cout<<"Hola soy un div: "<<dif<<endl;
    }

    //cout<<"Dif Final: "<<dif<<endl;
    if (!(abs(vec[n-1] - vec[0]) < dif))
    {
        cout<<pos1<<" "<<pos2;
    }else{
        cout<<n<<" "<<1;
    }
    

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    // lo que aprendimos en este problema es que no hay que complicarnos la vida
    // cuando los casos no son en los cientos de miles es mejor
    // simplificarlo sin tanto pedo :)
    // estilo morro
    return 0;
}