#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
    ve:srand(time(NULL)); // Mỗi lần chạy ngẫu nhiên ra các số ngẫu nhiên khác nhau
    int x=1+rand()%100; /* rand()%100:Chạy các sô ngẫu nhiên từ 0-99
                           rand()%50:Chạy các sô ngẫu nhiên từ 0-49
                        */
    int y;
    cout<<"Moi ban nhap vao so y= ";
    cin>>y;
    cout<<"--------------------------------"<<endl;
    for(int i=0;i<6;i++){
        if (y==x)
        {
            cout<<"Ha ha ban tai that"<<endl;
            cout<<"Ban co tiep tuc choi nua khong(Y/N)? ";
            char y; 
            cin>>y;
            cout<<"--------------------------------"<<endl;
            if(y=='y'){
                goto ve;
            }
            else{
                break;
            }
           
        }
        else{
            if(y<x){
                cout<<"So ban nhap nho hon so may"<<endl;
                cout<<"Ban da doan lan thu "<<(i+1)<<endl;
                cout<<"Moi ban nhap vao so y= ";
                cin>>y;
                cout<<"--------------------------------"<<endl;
            }
            else{
                cout<<"So ban nhap lon hon so may"<<endl;
                cout<<"Ban da doan lan thu "<<(i+1)<<endl;
                cout<<"Moi ban nhap vao so y= ";
                cin>>y;
                cout<<"--------------------------------"<<endl;
            }
            if(i==5){
                cout<<"Ban da doan lan thu "<<(i+2)<<endl;
                cout<<"Ban da thua roi"<<endl;
                cout<<"So may = "<<x<<endl;
                cout<<"Ban co tiep tuc choi nua khong(Y/N)? ";
                char y; 
                cin>>y;
                cout<<"--------------------------------"<<endl;
                if(y=='y'){
                    goto ve;
                }
                else{
                    break;
                }
            }
        }
    }
    cout<<"Hen gap lai ban lan sau"<<endl;
    system("pause");
}