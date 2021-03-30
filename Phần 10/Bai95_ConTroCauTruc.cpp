#include<iostream>
#include<string.h>
using namespace std;
struct SinhVien
{
      int ma;
      char ten[255];
};

int main(){
      SinhVien teo;
      teo.ma=113;
      strcpy(teo.ten,"Teo");
      cout<<"Thong tin cua Teo:"<<endl;
      cout<<teo.ma<<"\t"<<teo.ten<<endl;

      // Con trỏ cấu trúc
      SinhVien *pTeo=&teo;
      cout<<"Thong tin cua Teo theo con tro:"<<endl;
      cout<<pTeo->ma<<"\t"<<pTeo->ten<<endl; // Truy suất các phần tử trong con trỏ cấu trúc
      pTeo->ma=103; 
      strcpy(pTeo->ten,"Teo 2");
      cout<<"Thong tin cua Teo sau khi con tro thay doi gia tri:"<<endl;
      cout<<teo.ma<<"\t"<<teo.ten<<endl;
      teo.ma=203;
      strcpy(teo.ten,"Teo 203");
      cout<<"Thong tin cua Teo theo con tro:"<<endl;
      cout<<pTeo->ma<<"\t"<<pTeo->ten<<endl;

      SinhVien *pTy;
      pTy=new SinhVien;
      pTy->ma=114; 
      strcpy(pTy->ten,"Ty");
      cout<<"Thong tin cua Ty:"<<endl;
      cout<<pTy->ma<<"\t"<<pTy->ten<<endl;
      SinhVien *pTy2=pTy;
      pTy2->ma=214; 
      cout<<"Thong tin cua pTy sau khi Pty2 doi:";
      cout<<pTy->ma<<"\t"<<pTy->ten<<endl;
      system("pause");
}