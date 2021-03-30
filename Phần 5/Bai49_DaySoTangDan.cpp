#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Nhap so phan tu: ";
    cin>>n;
    int DaySo[n];
    for(int i=0;i<n;i++){
        cout<<"DaySo["<<i<<"]=";
        cin>>DaySo[i];
        while(DaySo[i]<DaySo[i-1]&&i>0){
            cout<<"Ban da nhap sai, moi ban nhap lai!\nDaySo["<<i<<"]=";
            cin>>DaySo[i];
        }
    }
    cout<<"Ban da nhap:"<<endl;
    for(int i=0;i<n;i++){
        cout<<DaySo[i]<<"\t";
    }
    cout<<endl;
    system("pause");
}