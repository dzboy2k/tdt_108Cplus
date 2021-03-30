#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void Bai1();
void Bai2();
void Bai3();
void Bai4();
void Bai5();
void Bai6();

int main(){
    int chon;
    cout<<"1. Dao mang mot chieu"<<endl;
    cout<<"2. Tong hai ma tran cung cap"<<endl;
    cout<<"3. Nhan hai ma tran"<<endl;
    cout<<"4. Liet ke so nguyen to va sap xep so chan"<<endl;
    cout<<"5. Sap xep tang dan mang a,b va noi mang"<<endl;
    cout<<"6. Tim so nho thu hai trong day"<<endl;
    cout<<"Moi nhap chon:"; cin>>chon;
    switch (chon)
    {
    case 1: Bai1();  
        break;
    case 2: Bai2();  
        break;
    case 3: Bai3();  
        break;
    case 4: Bai4();  
        break;
    case 5: Bai5();  
        break;
    case 6: Bai6();  
        break;
    default:
        break;
    }
    system("pause");
}

void Bai1(){
    srand(time(NULL));
    int n;
    cout<<"Nhap so phan tu: "; cin>>n;
    int mang[n];
    for(int i=0;i<n;i++){
        mang[i]=rand()%100;
    }
    cout<<"Du lieu mang:\n";
     for(int i=0;i<n;i++){
        cout<<mang[i]<<"\t";
    }
    cout<<"\nDao nguoc mang:\n";
    for(int i=n-1;i>=0;i--){
        cout<<mang[i]<<"\t";
    }
    cout<<endl;
}

void Bai2(){
    srand(time(NULL));
    int n,m;
    cout<<"So hang n="; cin>>n;
    cout<<"So cot m="; cin>>m;
    int A[n][m],B[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            A[i][j]=rand()%100;
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            B[i][j]=rand()%100;
        }
    }

    cout<<"Du lieu ma tran A:\n";
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<A[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    cout<<"Du lieu ma tran B:\n";
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<B[i][j]<<"\t";
        }
        cout<<endl;
    }

    int C[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    cout<<"Du lieu ma tran C:\n";
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<C[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void Bai3(){
    srand(time(NULL));
    int n,m,k;
    cout<<"n="; cin>>n;
    cout<<"m="; cin>>m;
    cout<<"k="; cin>>k;
    int A[m][k],B[k][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<k;j++){
            A[i][j]=rand()%100;
        }
    }
    
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            B[i][j]=rand()%100;
        }
    }

    cout<<"Du lieu ma tran A:\n";
     for(int i=0;i<m;i++){
        for(int j=0;j<k;j++){
            cout<<A[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    cout<<"Du lieu ma tran B:\n";
     for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            cout<<B[i][j]<<"\t";
        }
        cout<<endl;
    }
    /*
        Tích hai ma trận
            A32=11 12     B24=11 12 13 14    C= C1=A11xB11+A12xB21 C12 C13 C14   
                21 22         21 22 23 24       C21 C22 C23 C24   
                31 32                           C31 C32 C33 C34
                                                C[3][4]
    */
   int C[n][m];
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           int sum =0;
           for(int q=0;q<k;q++){
               sum+=A[j][q]*B[q][i];
           }
           C[i][j]=sum;
       }
   }
   
   cout<<"Du lieu ma tran C:\n";
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<C[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void Bai4(){
    srand(time(NULL));
    int n;
    cout<<"So phan tu n="; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=rand()%100;
    }
    cout<<"Du lieu mang a:\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    cout<<"\nSo nguyen to trong mang a:\n";
    for(int i=0;i<n;i++){
        int dem=0;
        for(int j=1;j<a[i];j++){
            if(a[i]%j==0){
                dem++;
            }
        }
        if(dem==1){
            cout<<a[i]<<"\t";
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]%2==0&&a[j]%2==0){
                if(a[i]>a[j]){
                swap(a[i],a[j]);
                }
            }
        }
    }
    cout<<"\nSo chan trong mang:\n";
    for(int i=0;i<n;i++ ){
        if(a[i]%2==0){
                cout<<a[i]<<"\t";
            }
    }
    cout<<endl;
}

void Bai5(){
    srand(time(NULL));
    int m,n;
    cout<<"m="; cin>>m;
    cout<<"n="; cin>>n;
    int a[m],b[n];
    for(int i=0;i<m;i++){
        a[i]=rand()%100;
        while(a[i]==a[i-1]&&i>0){
            a[i]=rand()%100;
        }
    }
    cout<<"Du lieu mang a:\n";
    for(int i=0;i<m;i++){
        cout<<a[i]<<"\t";
    }
    
    for(int i=0;i<n;i++){
        b[i]=rand()%100;
        for(int j=0;j<n;j++){
            while(b[i]==a[j]||(b[i]==b[i-1]&&i>0)){
                b[i]=rand()%100;
            }
        }
    }

    cout<<"\nDu lieu mang b:\n";
    for(int i=0;i<n;i++){
        cout<<b[i]<<"\t";
    }
    
    // Sắp xếp mảng
    
    for(int i=0;i<m-1;i++){
        for(int j=i+1;j<m;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(b[i]>b[j]){
                swap(b[i],b[j]);
            }
        }
    }

    cout<<"\nSap xep mang a:\n";
    for(int i=0;i<m;i++){
        cout<<a[i]<<"\t";
    }
    
    cout<<"\nSap xep mang b:\n";
    for(int i=0;i<n;i++){
        cout<<b[i]<<"\t";
    }

    // Nối hai mảng
    int p=n+m;
    int c[p];
    cout<<"\nGhep mang a+b=c";
    cout<<"\nDu lieu mang c:\n";
    for(int i=0;i<p;i++){
        if(i<m){
            c[i]=a[i];
        }
        else{
            c[i]=b[i+1-n];
        }
    }
    for(int i=0;i<p;i++){
        cout<<c[i]<<"\t";
    }

    cout<<"\nSap xep mang c:\n";

    for(int i=0;i<p-1;i++){
        for(int j=i+1;j<p;j++){
            if(c[i]>c[j]){
                swap(c[i],c[j]);
            }
        }
    }

    for(int i=0;i<p;i++){
        cout<<c[i]<<"\t";
    }

    cout<<endl;
}

void Bai6(){
    srand(time(NULL));
    int n;
    cout<<"n="; cin>>n;
    int mang[n];
    for(int i=0;i<n;i++){
        mang[i]=rand()%100;
    }
    cout<<"Ban da nhap:"<<endl;
    for(int i=0;i<n;i++){
        cout<<mang[i]<<"\t";
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(mang[i]<mang[j]){
                swap(mang[i],mang[j]);
            }
        }
    }
    
    if(mang[n-1]==mang[n-2]||mang[n-3]==mang[n-2]){
        cout<<"\nSo ban tim khong ton tai"<<endl;
    }
    else{
        cout<<"\nSo can tim:"<<mang[n-2]<<endl;
    }
}