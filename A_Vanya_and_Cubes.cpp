#include<iostream>
using namespace std;

int sol(int n,int g,int f,int s,int r){
    g+=f;
    r+=g;
   
    if (r>n)
    {
     return s;
    }
    else return sol(n,g,f+1,s+1,r);
    
}

int main(){
    int n;cin>>n;
    cout<<sol(n,0,1,0,0);
    
    
}