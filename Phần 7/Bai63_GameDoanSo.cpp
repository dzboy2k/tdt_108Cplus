#include <iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
void doanSo();
int main(){
    srand(time(NULL));
    cout<<"Chao mung ban den voi game doan so"<<endl;
    doanSo();
}

void doanSo(){
    do{
        int soLanDoan=0;
        bool win=false;   
        int x=1+rand()%100;
        int y;
        while (true)
            {
            cout<<"Moi ban doan so: ";
            cin>>y;
            cout<<"--------------------------------"<<endl;
            soLanDoan++;
            if(y==x)
            {
                cout<<"Ban da doan trung"<<endl;
                cout<<"--------------------------------"<<endl;
                win=true;
                break;
            }
            else if(x<y){
                cout<<"So ban doan lon hon so cua may"<<endl;
                cout<<"Ban da doan lan thu "<<soLanDoan<<endl;
                cout<<"--------------------------------"<<endl;
            }
            else
            {
                cout<<"So ban doan nho hon so cua may"<<endl;
                cout<<"Ban da doan lan thu "<<soLanDoan<<endl;
                cout<<"--------------------------------"<<endl;
            }
            if(soLanDoan==7){
                break;
            }
        }
        if(win==false){
            cout<<"Ban da thua roi"<<endl;
            cout<<"So may = "<<x<<endl;
        }
        char c;
        cout<<"--------------------------------"<<endl;
        cout<<"Ban co muon tiep tuc khong? (c/k)"<<endl;
        cin>>c;
        if(c=='k'){
            break;
        }
    }
    while (true);
    cout<<"--------------------------------"<<endl;
    cout<<"Hen gap lai ban lan sau"<<endl;
    system("pause");
}
