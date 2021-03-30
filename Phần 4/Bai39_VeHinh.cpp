#include<iostream>
using namespace std ;
int main (){
    int x;
    cout<<"Moi ban nhap so doi tuong: ";
    cin>>x;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            if (i==j||(i==x/2)||(i<x/2&&i>0&&j==0)||(i>x/2&&i<(x-1)&&j==(x-1)))
            {
               cout<<"*";
            }
            else
            {
                cout<<" ";
            } 
        }
        cout<<endl;
    }
    system("pause");
}