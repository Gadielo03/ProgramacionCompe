#include<iostream>
using namespace std;
 
int main(){
    int n;cin>>n;
    int ncashers=1;
    int mayor=0;
    int h;cin>>h;
    int m;cin>>m;
    int aux1,aux2=0;
    
 
 if (n==1)
 {
    cout<<1;
 }
 else
 {
        for (int i = 0; i < n-1; i++)
        {
            cin>>aux1;
            cin>>aux2;
 
                if (aux1==h && aux2==m)
                {
                    ncashers++;
                }
                else
                {
                    if (ncashers>mayor)
                    {
                        mayor=ncashers;
                    }
                    ncashers=1;
                }
                if (ncashers>mayor)
                    {
                        mayor=ncashers;
                    }
 
            h=aux1;
            m=aux2;
        }

    cout<<mayor;
 }
}