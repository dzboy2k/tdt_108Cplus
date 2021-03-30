#include<iostream>
#include<string.h>
using namespace std;

void noidung();

struct nhanVien_Bai1
{
      int maNV;
      char tenNV[255];
      int namSinh;
};
void bai1();
nhanVien_Bai1 bai1_Nhap(nhanVien_Bai1 nv);
void bai1_Xuat(nhanVien_Bai1 nv);
void bai1_NhapDanhSach(nhanVien_Bai1 ArrNv[],int n);
void bai1_XuatDanhSach(nhanVien_Bai1 ArrNv[],int n);
void bai1_locTheoNamSinh(nhanVien_Bai1 ArrNV[],int n);

struct nhanVien_Bai2
{
      int maNV;
      char tenNV[255];
};
struct phongBan_Bai2
{
      int maPB;
      char tenPB[255];
      int soLuongNV;
      nhanVien_Bai2 *ArrNV;
};
void bai2();
phongBan_Bai2 bai2_nhapPhongBan(phongBan_Bai2 pb);
void bai2_xuatPhongBan(phongBan_Bai2 pb);
void bai2_nhapDanhSachPB(phongBan_Bai2 ArrPB[],int n);
void bai2_xuatDanhSachPB(phongBan_Bai2 ArrPB[],int n);
void bai2_locNVTheoPB(phongBan_Bai2 ArrPB[],int n);

struct DiaChi_Bai3
{
      char Duong[255];
      char Quan[255];
      char TinhThanh[255];
};
struct SinhVien_Bai3
{
      int ma;
      char ten[255];
      DiaChi_Bai3 TruongHoc;
      DiaChi_Bai3 NhaRieng;
};
void bai3();
void bai3_nhapSinhVien(SinhVien_Bai3 SV[],int n);
void bai3_xuatSinhVien(SinhVien_Bai3 SV[],int n);
void bai3_LocSinhVien(SinhVien_Bai3 SV[],int n);

int main(){
      int n;
      noidung();
      cin >> n;
      while(n<1||n>3){
            cout<<"Lua chon khong hop le, moi ban nhap lai !"<<endl;
            cout<<"Moi ban chon:"; cin>>n; 
      }
      switch(n){
            case 1:
                  bai1();
                  break;
            case 2:
                  bai2();
                  break;
            case 3:
                  bai3();
                  break;
      }
      system("pause");
}

void noidung(){
      cout<<"1. Cau Truc Nhan Vien"<<endl;
      cout<<"2. Cau Truc Phong Ban"<<endl;
      cout<<"3. Cau Truc Sinh Vien"<<endl;
      cout<<"Moi ban chon:";
}

void bai1(){
      int n;
      nhanVien_Bai1 nv1;
      cout<<"Moi ban nhap so luong nhan vien: "; cin>>n;
      nhanVien_Bai1 ArrNV[n];
      bai1_NhapDanhSach(ArrNV,n);
      bai1_XuatDanhSach(ArrNV,n);
      bai1_locTheoNamSinh(ArrNV,n);
}
nhanVien_Bai1 bai1_Nhap(nhanVien_Bai1 nv){
      cout<<"Nhap ma:";
      cin>>nv.maNV;
      cout<<"Nhap ten:";
      cin.ignore();
      gets(nv.tenNV);
      cout<<"Nhap nam sinh:";
      cin>>nv.namSinh;
      return nv;
}
void bai1_Xuat(nhanVien_Bai1 nv){
      cout<<"Thong tin nhan vien "<<nv.tenNV<<endl;
      cout << "Ma="<<nv.maNV<<endl;
      cout << "Ten="<<nv.tenNV<<endl;
      cout << "Nam sinh="<<nv.namSinh<<endl;
}
void bai1_NhapDanhSach(nhanVien_Bai1 ArrNv[],int n){
      for(int i=0;i<n;i++){
            cout<<"-----------------------"<<endl;
            cout<<"Nhap nhan vien thu "<<(i+1)<<endl;
            ArrNv[i]=bai1_Nhap(ArrNv[i]); 
            cout<<"-----------------------"<<endl;
      }
}
void bai1_XuatDanhSach(nhanVien_Bai1 ArrNv[],int n){
      for(int i=0;i<n;i++){
            cout<<"-----------------------"<<endl;
            cout<<"Thong tin nhan vien thu "<<(i+1)<<endl;
            bai1_Xuat(ArrNv[i]); 
            cout<<"-----------------------"<<endl;
      }
}
void bai1_locTheoNamSinh(nhanVien_Bai1 ArrNV[],int n){
      int birth;
      cout<<"Nhap nam sinh cua nhan vien can tim: "; cin>>birth;
      int temp=0;
      cout<<"-------------------------\n";
      cout<<"Thong tin cua nhan vien co nam sinh "<<birth<<endl;
      for(int i=0;i<n;i++){
            if(birth==ArrNV[i].namSinh){
                  bai1_Xuat(ArrNV[i]);
                  temp++;
            }
      }
      if(temp==0){
            cout<<"Khong tim thay nhan vien co nam sinh tuong ung!"<<endl;
      }
}

void bai2(){
      int n;
      cout<<"Nhap so luong phong ban:"; cin>>n;
      phongBan_Bai2 ArrPB[n];
      bai2_nhapDanhSachPB(ArrPB,n);
      bai2_xuatDanhSachPB(ArrPB,n);
      bai2_locNVTheoPB(ArrPB,n);
}
phongBan_Bai2 bai2_nhapPhongBan(phongBan_Bai2 pb){
      cout<<"Ma phong ban:"; 
      cin>>pb.maPB;
      cout<<"Ten phong ban:";
      cin.ignore();
      gets(pb.tenPB);
      cout<<"Nhap so luong nhan vien:"; 
      cin>>pb.soLuongNV;
      pb.ArrNV=new nhanVien_Bai2[pb.soLuongNV];
      for(int i=0;i<pb.soLuongNV;i++){
            cout<<"------------------"<<endl;
            cout<<"Nhap nhan vien thu "<<(i+1)<<endl;
            cout<<"Ma nhan vien:"; 
            cin>>(pb.ArrNV+i)->maNV;
            cout<<"Ten nhan vien:";
            cin.ignore();
            gets((pb.ArrNV+i)->tenNV);
            cout<<"------------------"<<endl;
      }
      return pb;
}
void bai2_xuatPhongBan(phongBan_Bai2 pb){
      cout<<"Thong tin Phong Ban "<<pb.tenPB<<endl;
      cout<<"Ma phong ban="<<pb.maPB<<endl;
      cout<<"Ten phong ban="<<pb.tenPB<<endl;
      cout<<"So luong nhan vien="<<pb.soLuongNV<<endl;
      for(int i=0;i<pb.soLuongNV;i++){
            cout<<"-------------------------"<<endl;
            cout<<"Thong tin Nhan Vien thu "<<(i+1)<<endl;
            cout<<"Ma nhan vien="<<(pb.ArrNV+i)->maNV<<endl;
            cout<<"Ten nhan vien="<<(pb.ArrNV+i)->tenNV<<endl;
            cout<<"-------------------------"<<endl;
      }
}
void bai2_nhapDanhSachPB(phongBan_Bai2 ArrPB[],int n){
      for(int i=0;i<n;i++){
            cout<<"======================="<<endl;
            cout<<"Nhap thong tin Phong Ban thu "<<(i+1)<<endl;
            ArrPB[i]=bai2_nhapPhongBan(ArrPB[i]);
            cout<<"======================="<<endl;
      }
}
void bai2_xuatDanhSachPB(phongBan_Bai2 ArrPB[],int n){
      for(int i=0;i<n;i++){
            cout<<"======================="<<endl;
            cout<<"Thong tin Phong Ban thu "<<(i+1)<<endl;
            bai2_xuatPhongBan(ArrPB[i]);
            cout<<"======================="<<endl;
      }
}
void bai2_locNVTheoPB(phongBan_Bai2 ArrPB[],int n){
      cout<<"+++++++++++++++++++++++++++"<<endl;
      cout<<"Loc Nhan Vien theo phong ban"<<endl;
      phongBan_Bai2 pb;
      cout<<"Nhap ma phong ban:"; cin>>pb.maPB;
      cout<<"Nhap ten phong ban:"; 
      cin.ignore();
      gets(pb.tenPB);
      bool check=true;
      for(int i=0;i<n;i++){
            if(pb.maPB==ArrPB[i].maPB&&strcmp(pb.tenPB,ArrPB[i].tenPB)==0){
                  cout<<"Thong tin nhan vien cua phong ban "<<ArrPB[i].tenPB
                  <<" co ma="<<ArrPB[i].maPB<<endl;
                  for(int j=0;j<ArrPB[i].soLuongNV;j++){
                        cout<<"-------------------------"<<endl;
                        cout<<"Thong tin nhan vien thu "<<(j+1)<<endl;
                        cout<<"Ma nhan vien="<<(ArrPB[i].ArrNV+j)->maNV<<endl;
                        cout<<"Ten nhan vien="<<(ArrPB[i].ArrNV+j)->tenNV<<endl;
                        cout<<"-------------------------"<<endl;
                  }
                  check=false;
            }
      }
      if(check==true){
            cout<<"Khong tim thay phong ban tuong ung"<<endl;
      }
      cout<<"+++++++++++++++++++++++++++"<<endl;
}

void bai3(){
      int n;
      cout<<"Nhap so luong sinh vien: "; cin>>n;
      SinhVien_Bai3 SV[n];
      bai3_nhapSinhVien(SV,n);
      bai3_xuatSinhVien(SV,n);
      bai3_LocSinhVien(SV,n);
}
void bai3_nhapSinhVien(SinhVien_Bai3 SV[],int n){
      for (int i=0;i<n;i++)
      {
            cout<<"-------------------------------"<<endl;
            cout<<"Nhap sinh vien thu "<<(i+1)<<endl;
            cout<<"Ma sinh vien:"; cin>>SV[i].ma;
            cout<<"Ten sinh vien:"; 
            cin.ignore();
            gets(SV[i].ten);
            cout<<"Dia chi Truong hoc"<<endl;
            cout<<"Ten Duong:";
            gets(SV[i].TruongHoc.Duong);
            cout<<"Ten Quan:";
            gets(SV[i].TruongHoc.Quan);
            cout<<"Ten Tinh Thanh:";
            gets(SV[i].TruongHoc.TinhThanh);
            cout<<"Dia chi Nha Rieng"<<endl;
            cout<<"Ten Duong:";
            gets(SV[i].NhaRieng.Duong);
            cout<<"Ten Quan:";
            gets(SV[i].NhaRieng.Quan);
            cout<<"Ten Tinh Thanh:";
            gets(SV[i].NhaRieng.TinhThanh);
            cout<<"-------------------------------"<<endl;
      }   
}
void bai3_xuatSinhVien(SinhVien_Bai3 SV[],int n){
      for (int i=0;i<n;i++){
            cout<<"-------------------------------"<<endl;
            cout<<"Thong tin sinh vien thu "<<(i+1)<<endl;
            cout<<"Ma sinh vien="<<SV[i].ma<<endl;
            cout<<"Ten sinh vien="<<SV[i].ten<<endl;
            cout<<"Dia chi Truong hoc:"<<SV[i].TruongHoc.Duong<<"-"<<
            SV[i].TruongHoc.Quan<<"-"<<SV[i].TruongHoc.TinhThanh<<endl;
            cout<<"Dia chi Nha rieng:"<<SV[i].NhaRieng.Duong<<"-"<<
            SV[i].NhaRieng.Quan<<"-"<<SV[i].NhaRieng.TinhThanh<<endl;
            cout<<"-------------------------------"<<endl;
      }
}
void bai3_LocSinhVien(SinhVien_Bai3 SV[],int n){
      cout<<"Loc sinh vien theo tinh thanh"<<endl;
      char tinh[255];
      cout<<"Nhap tinh thanh theo dia chi nha rieng:"; 
      fflush(stdin);
      gets(tinh);
      cout<<tinh<<endl;
      bool check=true;
      for (int i=0;i<n;i++){
            if(strcmp(tinh,SV[i].NhaRieng.TinhThanh)==0){
                  cout<<"-------------------------------"<<endl;
                  cout<<"Thong tin sinh vien "<<SV[i].ten<<endl;
                  cout<<"Ma sinh vien="<<SV[i].ma<<endl;
                  cout<<"Ten sinh vien="<<SV[i].ten<<endl;
                  cout<<"Dia chi Truong hoc:"<<SV[i].TruongHoc.Duong<<"-"<<
                  SV[i].TruongHoc.Quan<<"-"<<SV[i].TruongHoc.TinhThanh<<endl;
                  cout<<"Dia chi Nha rieng:"<<SV[i].NhaRieng.Duong<<"-"<<
                  SV[i].NhaRieng.Quan<<"-"<<SV[i].NhaRieng.TinhThanh<<endl;
                  cout<<"-------------------------------"<<endl;
                  check=false;
            }
      }
      if(check==true){
            cout<<"Khong tim thay sinh vien tuong ung"<<endl;
      }
      cout<<"-------------------------------"<<endl;
}