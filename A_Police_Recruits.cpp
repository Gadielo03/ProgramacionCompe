#include<iostream>
#include<vector>
using namespace std;


int main(){
    int N;cin>>N;
    int aux=0;
    int crimes=0;
    int officers=0;
    
    for (int i = 0; i < N; i++)
    {
        cin>>aux;

        if (aux>0){
            officers+=aux;
        }
        else{
            if (aux<0 && officers>0 ){
                officers+=aux;
            }
            else{
                crimes+=aux;
            }
            
        }

    }
    crimes=crimes*-1;
    cout<<crimes;
   

   

}