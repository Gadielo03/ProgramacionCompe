#include<iostream>
using namespace std;

bool comp(int a){
    string aux =to_string(a);
    int r=0;

    for (int i = 0; i < aux.length(); i++)
    {
        r+=aux[i]-'0';
    }
  // cout<<r<<"hola"<<aux<<endl;
    if (r%4==0||r==4)
    {
        return true;
    }
    else return false; 
    
}

int sol(int a){
   // cout<<a<<endl;
    bool g=comp(a);
    if (g)
    {
        return a;
    }
    else return sol(a+1);
}

int main(){
    int a;cin>>a;
    cout<<sol(a);
}