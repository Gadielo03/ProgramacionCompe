#include<iostream>
using namespace std;

bool esletra(string s){
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]>= 'A'&&s[i]<= 'Z')
        {
           
            return true;
        }
        
    }

    return false;
}

bool edad(string s){
    int aux=stoi(s);
   // cout<<"Debug "<<aux<<endl;
    if (aux<18)
    {
      //cout<<"Debug "<<aux<<endl;
        return true;
    }
    else return false;
}

bool bebida(string s){
    string bebidas []={"ABSINTH","BEER","BRANDY","CHAMPAGNE",
     "GIN","RUM","SAKE","TEQUILA","VODKA","WHISKEY","WINE"};

     for (int i = 0; i < 11; i++)
     {
        if (s==bebidas[i])
        {
            return true;
        }
        
     }
     return false;
}

int main(){
    int n;cin>>n;
    string aux="";
    int r=0;

    for (int i = 0; i < n; i++)
    {
        cin>>aux;
        if (esletra(aux))
        {
            if (bebida(aux))
            {
                r++;
            }
            
        }
        else if (edad(aux))
        {
            r++;
        }
        
    }
    cout<<r;
}