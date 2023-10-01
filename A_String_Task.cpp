#include<iostream>
#include<vector>
using namespace std;

int main(){

string s;cin>>s;
vector<char> vec;
char aux;
        
   for (int i = 0; i < s.size(); i++)
   {
      aux=tolower(s[i]);

      if (aux !='a' && aux !='o' && aux != 'y'&&aux != 'e'&& aux !='u'&&aux !='i')
      {
        vec.push_back('.');
        vec.push_back(aux);
      }
      
      
   }

   for (int i = 0; i < vec.size(); i++)
   {
    cout<<vec[i];
   }
   
   


}



