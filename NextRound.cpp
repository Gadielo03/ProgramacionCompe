#include<iostream>
using namespace std;

int main(){
     int N;cin>>N;//numero de scores
     int k;cin>>k;//posicion del score que se tiene q superar o ser igual a 
     int aux=0;//aux
     int arrayaux[N];//arreglo de scores
     int R=0;//resultado
     
    for (int i = 0; i < N; i++)//se ingresan al arreglo los scores
    {
        cin>>aux;
        arrayaux[i]=aux;
      }
      
    for (int j = 0; j < N; j++)
    {
      if(arrayaux[k-1]<=arrayaux[j] && arrayaux[j]>0 ){
         R++;
      }
    }
      
    cout<<R;
   
}