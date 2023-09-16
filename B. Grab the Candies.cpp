#include<iostream>
using namespace std;

int main(){
    int t;cin>>t;
    int n=0;
    int aux=0;
    

    for (int  i = 0; i < t; i++)
    {
        cin>>n;
        int m=0;
        int b=0;
        for (int i = 0; i < n; i++)
        {
            cin>>aux;
            if (aux%2 == 0)
            {
                m+=aux;
            }
            else{
                b+=aux;
            }
        }
        
        if (m>b)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
        
    }
    
}