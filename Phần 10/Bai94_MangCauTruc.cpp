#include<iostream>
using namespace std;
struct SinhVien
{
      int ma;
      char ten[255];
};
void NhapMang(SinhVien dsSV[],int siSo);
void XuatMang(SinhVien dsSV[],int siSo);
int main(){
      int siso=3;
      SinhVien dsSV[siso];
      NhapMang(dsSV,siso);
      XuatMang(dsSV,siso);
      system("pause");
}
void NhapMang(SinhVien dsSV[],int siSo){
      for (int i=0;i<siSo;i++)
      {
            cout<<"Nhap sinh vien thu "<<i<<endl;
            cout<<"Nhap ma:";
            cin>>dsSV[i].ma;
            cout<<"Nhap ten:";
            cin.ignore(); // Xóa bộ nhớ đệm
            gets(dsSV[i].ten);
      }
}
void XuatMang(SinhVien dsSV[],int siSo){
      for (int i=0;i<siSo;i++)
      {
            cout<<dsSV[i].ma<<"\t"<<dsSV[i].ten<<endl;
      }
}