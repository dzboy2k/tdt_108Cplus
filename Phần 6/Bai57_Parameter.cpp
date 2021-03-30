#include<iostream>
using namespace std;
int ham(int x,int y=2); // Hàm sử dụng parameter làm đối số mặc định 
int main(){
    int x,y;
    cout<<"x="; cin>>x;
    cout<<"y="; cin>>y;   
    ham(x,y);
    ham(x);
    system("pause");
}

int ham(int x, int y){
    cout<<(x+y)<<endl;
}