#include<iostream>
using namespace std;

void numnum(string s){
  int contador=0;

     for (int i = 0; i < s.size(); i++)
     {
       if (s[i]!='0')
       {
        contador++;
       }
       
       
     }
     cout<<contador<<endl;

}

int separacion (int g,int r){
    int aux=g%10;
    int raux=r;
   
  if (g==aux)
  {
     cout<<aux*raux<<endl;
  }
  else{
    if (aux==0)
    {
      cout<<"";
    }
    else
    cout<<aux*raux<<" ";
    raux=raux*10;
    separacion(g/10,raux);
  
  }
  return 0;
}

int main(){
    int t;cin>>t;
    int n=0;
    string txtaux;

    for (int i = 0; i < t; i++)
    {
        cin>>n;
        txtaux=to_string(n);
        numnum(txtaux);
        separacion(n,1);
        
    }
    

}