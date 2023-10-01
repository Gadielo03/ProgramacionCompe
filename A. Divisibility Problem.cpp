#include<iostream>
using namespace std;



int main(){
    int t;cin>>t;
    int a=0;
    int b=0;

    for (int i = 0; i < t; i++)
    {
        cin>>a;
        cin>>b;
        if (a%b==0)
        {
            cout<<0<<endl;
        }
         else cout<<b-a%b<<endl;
        
    }
    
}