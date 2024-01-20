#include<iostream>
#include<vector>
using namespace std;

int sol(vector <int> v){
    int bm=0;
    for (int i = 0; i < v.size()-1; i++)
    {
        bm=v[i]+15;
        if ((v[i+1]-v[i])>15)
        {
            return bm;
        }
    }
    
    return v[v.size()-1];
}

int main(){
    int t;cin>>t;
    vector <int> v;
    v.push_back(0);
    int aux=0;

    for (int i = 0; i < t; i++)
    {   
        cin>>aux;
        v.push_back(aux);
    }
    v.push_back(90);
    cout<<sol(v);
    
}