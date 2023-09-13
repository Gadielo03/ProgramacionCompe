#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;cin>>N;//juegos
    int H;cin>>H;//altura
    int A=0;//respuesta
    int aux=0;

    for(int i=0;i<N;i++){
        cin>>aux;

        if(H>=aux)
            A++;
    }

    cout<<A;
    
    
}