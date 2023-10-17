#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int happy(int k,int f,int t){
    if (t>k)
    {
        return (f-(t-k));
    }
    else return f;
  
}

int main(){
    int n;cin>>n;
    int k;cin>>k;
    int f=0;
    int t=0;
    int aux=0;
    vector<int> v;

    for (int  i = 0; i < n; i++)
    {
        cin>>f;
        cin>>t;
        aux=happy(k,f,t);
        v.push_back(aux);
    }
 
    cout<<*max_element(v.begin(),v.end());
   

}