#include<iostream>
using namespace std;

int main(){
    int t;cin>>t;
    int n=0;
    int aux=0;

    int contador=0;

    for (int i = 0; i < t; i++)
    {
        cin>>n;
        for (int i = 0; i < 3; i++)
        {
            cin>>aux;
            if (aux>n)
            {
                contador++;
            }

            
        }
        cout<<contador<<endl;
        contador=0;
    
      }
}