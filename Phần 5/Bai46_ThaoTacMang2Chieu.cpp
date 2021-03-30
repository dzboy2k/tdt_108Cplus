#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main(){
    srand(time(NULL));
    int x,y;
    cout<<"Hang x="; cin>>x;
    cout<<"Cot y="; cin>>y;
    int mang[x][y];
    for (int i=0;i<x; i++)
    {
        for(int j=0;j<y;j++){
            mang[i][j]=rand()%100;
        }
    }
    cout<<"Mang sau khi nhap ngau nhien:"<<endl;
    for (int i=0;i<x; i++)
    {
        for(int j=0;j<y;j++){
            cout<<mang[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    //Xuất theo dòng
    int x1,y1;
    cout<<"Nhap so dong muon xuat:"; cin>>x1;
    for (int i=0;i<y; i++){
        cout<<mang[x1-1][i]<<"\t";
    }
    cout<<endl;
    
    //Xuất theo cột
    cout<<"Nhap so cot muon xuat:"; cin>>y1;
    for (int i=0;i<x; i++){
        cout<<mang[i][y1-1]<<endl;
    }

    //Xuất đường chéo ma trận vuông
    /*
        11 12 13 14 i j 
        21 22 23 24
        31 32 33 34
        41 42 43 44
    */
    if(x==y){
        cout<<"Duong cheo chinh:"<<endl;
        for (int i=0;i<x; i++)
        {
            for(int j=0;j<y;j++){
                if(i==j){
                    cout<<mang[i][j]<<"\t";
                }
                else{
                    cout<<" "<<"\t";
                }
            }
            cout<<endl;
        }
        cout<<"\nDuong cheo phu:"<<endl;;
        for (int i=0;i<x; i++)
        {
            for(int j=0;j<y;j++){
                if(j==y-i-1){
                    cout<<mang[i][y-i-1]<<"\t";
                }
                else{
                    cout<<" "<<"\t";
                }
            }
            cout<<endl;
        }
    }
    system("pause");
}