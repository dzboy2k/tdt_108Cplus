#include<iostream>
#include<string.h>
using namespace std;
void noiDung();

void bai1();

void bai2();
void bai2_xoaKhoangTrang(char *str);
void bai2_dinhDangTen(char *str);

void bai3();
void bai3_nhapHoTen(char **str,int n);
void bai3_dinhDangTen(char **str,int n);

void bai4();
void bai4_tachTen(char *str,char *strTen,char *strHo);
void bai4_sapXepTheoTen(char **strTen,char **strHo,int n);
int main(){
    int chon;
    noiDung();
    cin>>chon;
    while(chon<1||chon>4){
        cout<<"So khong hop le, moi ban nhap lai:";
        cin>>chon;
    }
    switch (chon)
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
    }
    system("pause");
}

void noiDung(){
    cout<<"1. Chuoi doi xung"<<endl;
    cout<<"2. Nhap ho va ten"<<endl;
    cout<<"3. In danh sach ho va ten"<<endl;
    cout<<"4. Tach ten va sap xep"<<endl;
    cout<<"Moi ban chon: ";
}

void bai1(){
    char str[2550];
    cout<<"Moi ban nhap vao mot chuoi:";
    fflush(stdin);
    cin.getline(str,255);
    bool checkStr=true;
    for(int i=0;i<strlen(str)/2;i++){
        if(str[i]!=str[strlen(str)-i-1]){
            checkStr=false;
        }
    }
    if (checkStr==true)
    {
        cout<<str<<" la mot chuoi doi xung"<<endl;
    }
    else
    {
        cout<<str<<" khong la mot chuoi doi xung"<<endl;
    }
}

void bai2(){
    char *str = new char[255];
    cout<<"Nhap ho va ten: "; 
    fflush(stdin);
    gets(str);
    // strcpy(str,"  ngUYEN      Van        TEO ");
    bai2_xoaKhoangTrang(str);
    cout << str << endl;
    bai2_dinhDangTen(str);
}

void bai2_xoaKhoangTrang(char *str){
    int j=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]!=' '){
            str[j++] = str[i];
        }
        else if(j>0&&str[i+1]!=' '){
            str[j++]=str[i];
        }
    }
    if(str[j-1]==' '){
        str[j-1]='\0';
    }
    else str[j]='\0';
}

void bai2_dinhDangTen(char *str){
    for(int i=0;i<strlen(str);i++){
        if(i==0 || str[i-1]==' '){
            char c=str[i];
            putchar(toupper(c));
        }
        else{
            char c=str[i];
            putchar(tolower(c));
        }
    }
    cout << endl;
}

void bai3(){
    int n;
    cout << "Nhap so nguoi trong danh sach: "; cin >> n;
    char **str = new char *[n];
    bai3_nhapHoTen(str,n);
    cout << "\nHo ten sau khi dinh dang: " <<endl;
    bai3_dinhDangTen(str,n);
}

void bai3_nhapHoTen(char **str,int n){
    for (int i=0;i<n;i++){
        *(str+i) = new char[255];
    }
    cout << endl;
    for (int i=0;i<n;i++){
        cout << "Nhap ho ten cua nguoi thu " << i <<": ";
        fflush(stdin);
        cin.getline(*(str+i),255);
    }
    cout << endl;
    for (int i=0;i<n;i++){
        cout << "Ho ten " << i <<":"<<*(str+i) << endl;
    }
}

void bai3_dinhDangTen(char **str,int n){
    for(int i=0; i<n;i++){
        cout<<"Ho ten "<<i<<":";
        bai2_dinhDangTen(*(str+i));
    }
}

void bai4(){
    int n;
    cout << "Nhap so nguoi trong danh sach: "; cin >> n;
    char **str = new char *[n];
    bai3_nhapHoTen(str,n);
    char **strTen = new char*[n];
    char **strHo = new char*[n];
    for (int i=0;i<n;i++){
        *(strTen+i) = new char[255];
        *(strHo+i) = new char[255];
    }
    cout << "\nTen sau khi tach khoi ho: " << endl;
    for (int i=0;i<n;i++){
        bai4_tachTen(*(str+i),*(strTen+i),*(strHo+i));
    } 
    cout << "\nTen sau khi sap xep: " << endl;
    bai4_sapXepTheoTen(strTen,strHo,n);
}

void bai4_tachTen(char *str,char *strTen,char *strHo){
    int j=0;
    for(int i=strlen(str);i>=0;i--){
        if(str[i]==' '){
            j=i+1;
            break;
        }
    }
    int i2=0;
    for(int i=j;i<strlen(str);i++){
        strTen[i2++]=str[i];
    }
    strncpy(strHo,str,j-1);
    cout << strTen <<" "<< strHo << endl;
}

void bai4_sapXepTheoTen(char **strTen,char **strHo,int n){
    int *temp = new int [n];
    for(int i=0;i<n;i++){
        *(temp+i)=*(*(strTen+i)+0);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(*(temp+i)>*(temp+j)){
                swap(*(strTen+i),*(strTen+j));
                swap(*(strHo+i),*(strHo+j));
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << *(strTen+i) <<" "<< *(strHo+i) << endl;
    }
}