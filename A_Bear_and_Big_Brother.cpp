#include<iostream>
using namespace std;

int sol(int a,int b,int r){
    if (a>b)
    {
        return r;
    }
    else return sol(a*3,b*2,r+1);
}

int main(){
    int a;cin>>a;
    int b;cin>>b;

    cout<<sol(a,b,0);
}