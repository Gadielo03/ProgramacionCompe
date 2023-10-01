#include<iostream>
using namespace std;

int sol(int a,int b,int n,int v){
    int mn=min(a,b);
    int mx=max(a,b);

    mn += mx;
    if (mn>n || mx>n)
    {
      return v;
    }
    else return sol(mn,mx,n,v+1);

}

int main(){
    int t;cin>>t;
    int a=0;
    int b=0;
    int n=0;
    int r=0;

    for (int i = 0; i < t; i++)
    {
        cin>>a;
        cin>>b;
        cin>>n;
        
        cout<<sol(a,b,n,1)<<endl;

    }
    
}