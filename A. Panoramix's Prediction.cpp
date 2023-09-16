#include<iostream>
using namespace std;

bool esPrimo(int numero) {
  if (numero == 0 || numero == 1 || numero == 4) return false;
  for (int x = 2; x < numero / 2; x++) {
    if (numero % x == 0) return false;
  }
 
  return true;
}
    
int sigprimo(int n){
   if (esPrimo(n))
   {
    return n;
   }
       return sigprimo(n+1);
        
    }


int main(){
    int n;cin>>n;
    int m;cin>>m;
    int aux=sigprimo(n+1);
    

    if (aux==m)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    


}