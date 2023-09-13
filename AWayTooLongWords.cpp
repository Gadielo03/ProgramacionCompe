#include <bits/stdc++.h>
using namespace std;

int main(){
     int N;cin>>N;//numero de palabras que se van a ingresar
     string aux= "";//auxiliar de palabra
     
        
     for (int i = 0; i <N ; i++)
     {
        cin>>aux;
        if(aux.length()-1>9){
        cout<<aux[0]<<aux.length()-2<<aux[aux.length()-1]<<"\n";
        }
        else{
         cout<<aux<<"\n";
        }
        
     }
     

    
}