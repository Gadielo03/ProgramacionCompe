#include<iostream>
using namespace std;
 
long long Alakazam(string s,long long casti){
    long long aux=0;
    string saux="";
    if (s.size()==1)
    {
        return casti;
    }
    else{
        for (long long i = 0; i < s.size(); i++)
        {
            aux+=s[i]-'0';
        }
        saux=to_string(aux);
        return Alakazam(saux,casti+1);
    }
 
}
 
int main(){
    string n;cin>>n;
    cout<<Alakazam(n,0);
}