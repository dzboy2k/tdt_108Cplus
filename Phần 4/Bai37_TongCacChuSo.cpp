#include<iostream>
using namespace std;
int main(){
    int x,tong=0;
    cout<<"x=";
    cin>>x;
    while(x>0){
        tong+=x%10;
        x/=10;
    }
    cout<<"Tong cac chu so cua x:"<<tong<<endl;
    system("pause");
}