#include<iostream>
#include<cmath>
using namespace std;

int recorrido(int n,int j){
    int r=0;
    if (n>j)
        {
            j=j+10;
        }
        
        for (int i = n; i < j; i++)
         {
            r++;
         }

       return r;
}

int main(){
    int n;cin>>n;
    string ogstate;cin>>ogstate;
    string comb;cin>>comb;
    int r1=0;
    int r2=0;
    int mov=0;
    int aux1,aux2=0;

    for (int i = 0; i < n; i++)
    {
        
        aux1=ogstate[i]-'0';
        aux2=comb[i]-'0';
        
        r1=recorrido(aux1,aux2);
        r2=recorrido(aux2,aux1);

        if (r1<r2)
        {
            mov+=r1;
        }
        else mov+=r2;
    }
    cout<<mov;
    
    
}