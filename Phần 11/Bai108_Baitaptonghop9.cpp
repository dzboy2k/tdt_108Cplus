#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

void noidung();

void bai1();
void arrayRandom(int n[], int k);
void bai2();

struct VatTu_Bai3
{
      char ma[20];
      char ten[255];
      char ngay[255];
};
void bai3();

struct NhanVien_Bai4
{
      char maNV[20];
      char tenNV[255];
      char gioiTinh[10];
};
struct PhongBan_Bai4
{
      char maPB[20];
      char tenPB[255];
      int soLuongNV;
      NhanVien_Bai4 **dsNV;
};
void bai4();
PhongBan_Bai4 bai4_nhapPhongBan(PhongBan_Bai4 pb);
void bai4_xuatPhongBan(PhongBan_Bai4 pb[], int n);

struct SanPham_Bai5
{
      char ma[20];
      char ten[255];
      int gia;
};
struct DanhMuc_Bai5
{
      char ma[20];
      char ten[255];
      int soLuongSP;
      SanPham_Bai5 **dsSP;
};
void bai5();
DanhMuc_Bai5 *bai5_nhapDanhMuc();
void bai5_xuatDanhMuc(DanhMuc_Bai5 **dm, int n);

int main(){
      int n;
      noidung();
      cout<<"Moi ban chon:";
      do{
            cin>>n;
            if(n>5){
                  cout<<"Ban da nhap sai, moi ban nhap lai:";
            }
      }
      while(n>5);
      switch (n)
      {
      case 1:
            bai1();
            break;
      case 2:
            bai2();
            break;
      case 3:
            bai3();
            break;
      case 4:
            bai4();
            break;
      case 5:
            bai5();
            break;
      }
      system("pause");
}

void noidung(){
      cout<<"1. 10000 So nguyen"<<endl;
      cout<<"2. Xu ly so nguyen"<<endl;
      cout<<"3. Cau truc vat tu"<<endl;
      cout<<"4. Cau truc phong ban"<<endl;
      cout<<"5. Cau truc danh muc"<<endl;
}

void arrayRandom(int n[], int k, int m){
      srand(time(NULL));
      for(int i=0;i<k;i++){
            n[i]=rand()%m;
            for(int j=0;j<i;j++){
                  while(n[i]==n[j]){
                        n[i]=rand()%m;
                  }      
            }
            
            if(i==k-1){
                  for(int j=0;j<i;j++){
                        while(n[i]==n[j]){
                              n[i]=rand()%m;
                        }   
                  }
            }
      }
}

void bai1(){
      int k=10000;
      int n[k];
      arrayRandom(n,k,32767);

      ofstream outfile;
      outfile.open("Bai108.1.1_SONGUYEN.INP");
      for(int i=0;i<k;i++){
            outfile << n[i] << endl;
      }
      outfile.close();

      ifstream infile;
      infile.open("Bai108.1.2_SONGUYEN.INP");
      int m[k],i=0;
      do{   
            infile >> m[i];
            i++;
      }
      while(infile.eof()==true);
      infile.close();

      for (int i=0; i<k-1; i++)
      {
            for (int j=i+1; j<k; j++){
                  if(m[i]>m[j]){
                        swap(m[i],m[j]);
                  }
            }
      }
      
      outfile.open("Bai108.1.1_SONGUYEN.INP");
      for(int i=0;i<k;i++){
            outfile << n[i] << endl;
      }
      outfile.close();
}

void bai2(){
      int n;
      cout<<"Nhap so phan tu n=";
      cin>>n;
      int m[n];
      arrayRandom(m,n,101);
      
      ofstream outfile;
      outfile.open("Bai108.2.1_INPUT.TXT");
      outfile << n << "\n";
      for(int i=0;i<n;i++){
            outfile << m[i] << " ";
            if((i%9==0 && i!=0 && i<10) ||(i%10==9 && i>10)){
                  outfile << "\n";
            }
      }
      outfile.close();

      ifstream infile;
      infile.open("Bai108.2.1_INPUT.TXT");
      int k[n], x;
      infile >> x;
      for(int i=0;i<n;i++){
            infile >> k[i];
      }
      infile.close();

      int max;
      int chan=0, le=0;
      max = k[0];
      for(int i=0;i<n;i++){
            // Câu a
            if (max < k[i]){
                  max = k[i];
            }

            // Câu b
            if (k[i]%2==0){
                  chan++;
            }
            else{
                  le++;
            }
      }

      // Câu c
      for (int i=0; i<n-1; i++)
      {
            for (int j=i+1; j<n; j++){
                  if(k[i]>k[j]){
                        swap(k[i],k[j]);
                  }
            }
      } 

      outfile.open("Bai108.2.2_OUTPUT.TXT");
      outfile << "Câu a : " << max <<endl;
      outfile << "Câu b : " << chan << " " << le << endl;
      outfile << "Câu c : ";
      for(int i=0;i<n;i++){
            outfile << k[i] << " ";
            if((i%9==0 && i!=0 && i<10) ||(i%10==9 && i>10)){
                  outfile << "\n" << "\t";
            }
      }
      outfile.close();
} 

void bai3(){
      int n;
      cout << "Nhap so luong vat tu:";
      cin>>n;
      VatTu_Bai3 **NVatTu = new VatTu_Bai3*[n];
      for (int i = 0; i < n; i++)
      {
            cout << "Nhap vat tu so " << i <<endl;
            VatTu_Bai3 *vattu = new VatTu_Bai3; 
            cout << "Ma : ";
            cin >> vattu->ma;
            cin.ignore();
            cout << "Ten : ";
            gets(vattu->ten);
            cout << "Ngay nhap kho:";
            gets(vattu->ngay);
            *(NVatTu+i) = vattu;
      }
      cout << "Danh sach vat tu da nhap:"<<endl;
      cout<< "Ma" << "\t|" <<"Ten" << "\t|" << "Ngay nhap kho"<<endl;
      for (int i = 0; i < n; i++){
            VatTu_Bai3 *vattu = *(NVatTu+i);
            cout << vattu->ma <<"\t|"<<vattu->ten<< "\t|"<<vattu->ngay<<endl;
      }
      ofstream outfile ("Bai108.3.txt",ofstream::binary);
      for (int i=0; i<n; i++)
      {
            VatTu_Bai3 *vattu = *(NVatTu+i);
            outfile.write((char*)vattu,sizeof(VatTu_Bai3));
      }
      outfile.close();

      ifstream infile ("Bai108.3.txt",ifstream::binary);
      infile.seekg(0,infile.end); // Đặt vị trí trong chuỗi đầu vào
      long size = infile.tellg(); // Nhận vị trí trong chuỗi đầu vào
      infile.seekg(0);
      // Tìm số phần tử
      int leng = size/sizeof(NVatTu);
      // Đọc file
      VatTu_Bai3 **dsVatTu=new VatTu_Bai3*[leng];
      for (int i = 0; i < leng; i++){
            VatTu_Bai3 *vattu = new VatTu_Bai3;
            infile.read((char*)vattu,sizeof(VatTu_Bai3));
            *(dsVatTu+i) = vattu;
      }   
      infile.close();

      cout << "Danh sach vat tu da doc:"<<endl;
      cout<< "Ma" << "\t|" <<"Ten" << "\t|" << "Ngay nhap kho"<<endl;
      for (int i = 0; i < n; i++){
            VatTu_Bai3 *vattu = *(dsVatTu+i);
            cout << vattu->ma <<"\t|"<<vattu->ten<< "\t|"<<vattu->ngay<<endl;
      }
}

void bai4(){
      int n;
      cout << "Nhap so luong phong ban:";
      cin>>n;
      PhongBan_Bai4 NPhongBan[n];
      cin.ignore();
      for (int i = 0; i < n; i++)
      {
            cout<<"=========================================="<<endl;     
            cout << "Nhap phong ban thu " << i <<endl;
            NPhongBan[i] = bai4_nhapPhongBan(NPhongBan[i]);
      }
      cout<<"=========================================="<<endl;
      cout << "Danh sach phong ban da nhap:"<<endl;
      bai4_xuatPhongBan(NPhongBan,n);
      
      ofstream outfile ("Bai108.4.txt",ofstream::binary);  
      outfile.write((char *)NPhongBan,sizeof(NPhongBan));
      outfile.close();

      ifstream infile ("Bai108.4.txt",ofstream::binary);
      infile.seekg(0,infile.end);
      long size = infile.tellg();
      infile.seekg(0);
      int sizePB = size/sizeof(PhongBan_Bai4);
      PhongBan_Bai4 KPhongBan[sizePB];
      infile.read((char*)KPhongBan,sizeof(KPhongBan));
      infile.close();
      
      cout << "Danh sach phong ban da doc tu file:"<<endl;
      bai4_xuatPhongBan(KPhongBan,sizePB);
}

PhongBan_Bai4 bai4_nhapPhongBan(PhongBan_Bai4 pb){
      cout << "Ma phong ban: ";
      gets(pb.maPB);
      cout << "Ten phong ban: ";
      gets(pb.tenPB);
      cout << "Nhap so luong nhan vien:";
      cin>>pb.soLuongNV;
      cin.ignore();
      pb.dsNV = new NhanVien_Bai4 *[pb.soLuongNV];
      for (int i = 0; i < pb.soLuongNV; i++)
      {
            NhanVien_Bai4 *nv = new NhanVien_Bai4;  
            cout<<"------------------------------------"<<endl;
            cout << "Nhap nhan vien so " << i <<endl;
            cout << "Ma nhan vien: ";
            gets(nv->maNV);
            cout << "Ten nhan vien: ";
            gets(nv->tenNV);
            cout << "Gioi tinh: ";
            gets(nv->gioiTinh);
            *(pb.dsNV+i) = nv;
      }
      return pb;
}

void bai4_xuatPhongBan(PhongBan_Bai4 pb[], int n){
      cout<<"=========================================="<<endl; 
      cout<<"=========================================="<<endl; 
      for (int i = 0; i < n; i++){
            cout<< "Ma phong ban: "<< pb[i].maPB <<"\nTen phong ban: "<< pb[i].tenPB<<endl;
            cout<< "So luong nhan vien:"<<pb[i].soLuongNV<<endl;
            cout<<"Thong tin nhan vien cua phong ban so "<<i<<endl;
            for (int j=0; j<pb[i].soLuongNV; j++)
            {
                  cout<<"------------------------------------"<<endl;
                  NhanVien_Bai4 *nv = *(pb[i].dsNV+j);
                  cout << "Nhan vien so " << j <<endl;
                  cout << "Ma nhan vien: " << nv->maNV <<endl;
                  cout << "Ten nhan vien: " << nv->tenNV <<endl;
                  cout << "Gioi tinh: " << nv->gioiTinh <<endl;
                  cout<<"------------------------------------"<<endl;
            }
            cout<<"=========================================="<<endl; 
      }
}

void bai5(){
      int n;
      cout << "Nhap so luong danh muc:";
      cin>>n;
      DanhMuc_Bai5 **NDanhMuc = new DanhMuc_Bai5*[n];
      cin.ignore();
      for (int i = 0; i < n; i++)
      {
            cout<<"=========================================="<<endl;     
            cout << "Nhap danh muc thu " << i <<endl;
            DanhMuc_Bai5 *dm = bai5_nhapDanhMuc();
            *(NDanhMuc+i) = dm;
      }
      cout<<"=========================================="<<endl;
      cout << "Danh sach danh muc da nhap:"<<endl;
      bai5_xuatDanhMuc(NDanhMuc,n);
      
      ofstream outfile ("Bai108.5.txt",ofstream::binary);  
      for (int i=0; i<n; i++)
      {
            DanhMuc_Bai5 *dm = *(NDanhMuc+i);
            outfile.write((char *)dm,sizeof(DanhMuc_Bai5));
      }
      outfile.close();

      ifstream infile ("Bai108.5.txt",ofstream::binary);
      infile.seekg(0,infile.end);
      long size = infile.tellg();
      infile.seekg(0);
      int sizeDM = size/sizeof(DanhMuc_Bai5);
      DanhMuc_Bai5 **KDanhMuc = new DanhMuc_Bai5*[sizeDM];
      for (int i=0; i<sizeDM; i++)
      {
            DanhMuc_Bai5 *dm = new DanhMuc_Bai5;
            infile.read((char *)dm,sizeof(DanhMuc_Bai5));
            *(KDanhMuc+i) = dm;
      }
      infile.close();
      
      cout << "Danh sach danh muc da doc tu file:"<<endl;
      bai5_xuatDanhMuc(KDanhMuc,sizeDM);
}

DanhMuc_Bai5 *bai5_nhapDanhMuc(){
      DanhMuc_Bai5 *dm = new DanhMuc_Bai5;
      cout << "Ma danh muc: ";
      gets(dm->ma);
      cout << "Ten danh muc: ";
      gets(dm->ten);
      cout << "Nhap so luong san pham:";
      cin>>dm->soLuongSP;
      cin.ignore();
      dm->dsSP = new SanPham_Bai5 *[dm->soLuongSP];
      for (int i = 0; i < dm->soLuongSP; i++)
      {
            SanPham_Bai5 *sp = new SanPham_Bai5;  
            cout<<"------------------------------------"<<endl;
            cout << "Nhap san pham so " << i <<endl;
            cout << "Ma san pham: ";
            gets(sp->ma);
            cout << "Ten san pham: ";
            gets(sp->ten);
            cout << "Don gia: ";
            cin>>sp->gia;
            cin.ignore();
            *(dm->dsSP+i) = sp;
      }
      return dm;
}

void bai5_xuatDanhMuc(DanhMuc_Bai5 **dm, int n){
      cout<<"=========================================="<<endl; 
      cout<<"=========================================="<<endl; 
      for (int i = 0; i < n; i++){
            DanhMuc_Bai5 *dm1 = *(dm+i);
            cout<< "Ma danh muc: "<< dm1->ma <<"\nTen danh muc: "<< dm1->ten<<endl;
            cout<< "So luong san pham:"<<dm1->soLuongSP<<endl;
            cout<<"Thong tin san pham cua danh muc so "<<i<<endl;

            for (int j=0; j<dm1->soLuongSP; j++)
            {
                  cout<<"------------------------------------"<<endl;
                  SanPham_Bai5 *sp = *(dm1->dsSP+j);
                  cout << "San pham so " << j <<endl;
                  cout << "Ma san pham: " << sp->ma <<endl;
                  cout << "Ten san pham: " << sp->ten <<endl;
                  cout << "Gia: " << sp->gia <<endl;
                  cout<<"------------------------------------"<<endl;
            }
            cout<<"=========================================="<<endl; 
      }
}







