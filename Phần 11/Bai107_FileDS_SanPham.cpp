#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
#define MAX 3
struct SanPham
{
      int ma;
      char ten[255];
      int gia;
};
void NhapSanPham(SanPham &sp);
void NhapDanhSachSanPham(SanPham dssp[],int n);
void XuatSanPham(SanPham sp);
void XuatDanhSachSanPham(SanPham dssp[],int n);
void LuuFile(SanPham dssp[],int n);
void DocFile(SanPham dssp[],int &n);
int main(){
      // SanPham dsSP[MAX];
      // NhapDanhSachSanPham(dsSP,MAX);
      // cout<<"Danh sach san pham sau khi nhap:\n";
      // XuatDanhSachSanPham(dsSP,MAX);
      // LuuFile(dsSP,MAX);

      SanPham dsSP[MAX];
      int n;
      DocFile(dsSP,n);
      cout<<"So luong="<<n<<endl; // Đọc thừa 1 dòng
      XuatDanhSachSanPham(dsSP,n-1);
      system("pause");
}
void NhapSanPham(SanPham &sp){
      cout<<"Ma:";
      cin>>sp.ma;
      cin.ignore();
      cout<<"Ten:";
      gets(sp.ten);
      cout<<"Gia:";
      cin>>sp.gia;
}
void NhapDanhSachSanPham(SanPham dssp[],int n){
      for (int i = 0; i < n; i++)
      {
            cout<<"Nhap san pham thu "<<i<<":\n";
            NhapSanPham(dssp[i]);
      }
      
}
void XuatSanPham(SanPham sp){
      cout<<sp.ma<<"-"<<sp.ten<<"-"<<sp.gia<<endl;
}
void XuatDanhSachSanPham(SanPham dssp[],int n){
      for (int i = 0; i < n; i++)
            {
                  XuatSanPham(dssp[i]);
            }
}
void LuuFile(SanPham dssp[],int n){
      ofstream outfile("Bai107_csdlsp.dat",ofstream::binary);
      for (int i = 0; i < n; i++)
      {
            SanPham sp=dssp[i];
            outfile.write((char*)&sp,sizeof(SanPham));
      }
      outfile.close();
}
void DocFile(SanPham dsSP[],int &n){
      ifstream infile("Bai107_csdlsp.dat",ifstream::binary);
      int i=0;
      while (infile.eof()==false) //Chưa kết thúc file, infile.eof(): Kiểm tra kết thúc file.
      {
            SanPham sp;
            infile.read((char*)&sp,sizeof(SanPham));
            dsSP[i++]=sp;
      }
      infile.close();
      n=i;
}