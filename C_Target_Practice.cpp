#include<iostream>
using namespace std;

int main(){
    int t=0;cin>>t;
    char aux;
    int r=0;
    int diana[10][10] ={
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, //1
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1}, //2
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1}, //3
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1}, //4
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1}, //5
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1}, //6
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1}, //7
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1}, //8
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1}, //9
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1} //10
    };
    
    
    for (int g = 0;g < t; g++)
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin>>aux;
                 if (aux=='X')
                 {
                    r+=diana[i][j];
                 }
            }
        }
            cout<<r<<endl;
            r=0;
    }
}