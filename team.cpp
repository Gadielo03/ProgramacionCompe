#include <bits/stdc++.h>
using namespace std;

int main(){
     int N;cin>>N;
     int R=0;
     int aux=0;
     int aux2=0;
     for (int i = 0; i < N; i++){
        for (int j = 0; j < 3; j++)
        {
            cin>>aux;
            if(aux==1){
            aux2++;
            }
        }
        if(aux2>=2){
            R++;
        }
        aux2=0;
     
     }
     cout<<R;
    
}