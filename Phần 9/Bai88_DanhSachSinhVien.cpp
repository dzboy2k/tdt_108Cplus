#include<iostream>
#include<string.h>
using namespace std;
bool HoiNamHayNu(char *str){
    // "SV1;Obama;male"
    int j=0;
    for(int i=strlen(str)-1;i>=0;i--){
        if(str[i]==';'){
            j=i;
            break;
        }
    }
    char strGioiTinh[5];
    int i2=0;
    for(int i=j+1;i<strlen(str);i++){
        strGioiTinh[i2]=str[i];
        i2++;
    }
    strGioiTinh[i2]=='\0';
    if(strcmp(strGioiTinh,"male")==0){
        return false;
    }
    return true;
}
int main(){
    char **dsSV=new char*[5];
    for(int i=0;i<5;i++){
       *(dsSV+i)=new char[255];
    }
    strcpy(*(dsSV+0),"SV1;Obama;male");
    strcpy(*(dsSV+1),"SV2;Yanjma;female");
    strcpy(*(dsSV+2),"SV3;Trump;male");
    strcpy(*(dsSV+3),"SV4;Putin;male");
    strcpy(*(dsSV+4),"SV5;Pereira;female");
    int sonam=0;
    int sonu=0;
    for(int i=0;i<5;i++){
        cout<<*(dsSV+i)<<endl;
        bool kq=HoiNamHayNu(*(dsSV+i));
        if(kq==false)
            sonam++;
        else
            sonu++;
    }
    cout<<"Co "<<sonam<<" Sinh vien Nam trong Danh Sach"<<endl;
    cout<<"Co "<<sonu<<" Sinh vien Nu trong Danh Sach"<<endl;
}