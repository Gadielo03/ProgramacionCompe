#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int m;cin>>m;
    
    if((m%2!=0) && (m%3!=0) && (m%5!=0) && (m%7!=0)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    
    
}