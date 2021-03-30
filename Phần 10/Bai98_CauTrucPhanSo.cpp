#include<iostream>
using namespace std;
struct PhanSo
{
      int tu;
      int mau;
};
PhanSo *Cong(PhanSo ps1,PhanSo ps2);
int UCLN(PhanSo ps);
PhanSo *ToiGian(PhanSo ps);
int main(){
      PhanSo ps1;
      ps1.tu=1;
      ps1.mau=2;
      PhanSo ps2;
      ps2.tu=3;
      ps2.mau=4;

      // 3/5+1/2=(2*3+5*1)/(5*2)=11/10
      PhanSo *ps3=Cong(ps1,ps2);
      cout<<ps3->tu<<"/"<<ps3->mau<<endl;
      
      cout<<"Phan so toi gian =";
      PhanSo *ps4=ToiGian(*ps3);
      cout<<ps4->tu<<"/"<<ps4->mau<<endl;
      system("pause");
}
PhanSo *Cong(PhanSo ps1,PhanSo ps2){
      // a/b+c/d=(a*d+b*c)/(b*d)
      PhanSo *ps3=new PhanSo;
      ps3->tu=ps1.tu*ps2.mau+ps1.mau*ps2.tu;
      ps3->mau=ps1.mau*ps2.mau;
      return ps3;
}
int UCLN(PhanSo ps){
      int min=ps.tu<ps.mau?ps.tu:ps.mau;
      for(int i=min;i>=1;i--){
            if(ps.tu%i==0&&ps.mau%i==0){
                  return i;
            }
      }
      return 1;
}
PhanSo *ToiGian(PhanSo ps){
      int uoc=UCLN(ps);
      PhanSo *psToiGian=new PhanSo;
      psToiGian->tu=ps.tu/uoc;
      psToiGian->mau=ps.mau/uoc;
      return psToiGian;
}