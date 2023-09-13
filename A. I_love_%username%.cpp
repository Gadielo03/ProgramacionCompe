#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int max=0;
    int min=0;
    int aux=0;
    int contador=0;
      cin>>aux;
      min=aux;
      max=aux;
        for (int i = 0; i < n-1; i++)
         {
            cin>>aux;
           if (aux>max)
           {
            max=aux;
            contador++;
           }
           if (aux<min)
           {
            min=aux;
            contador++;
           }
           
         }
    cout<<contador;   
}