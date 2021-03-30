#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Moi nhap so hang: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0||i==n-1||i==j){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    system("pause");
}