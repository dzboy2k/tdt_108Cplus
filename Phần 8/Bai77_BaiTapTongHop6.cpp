#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<iomanip>
using namespace std;
void noiDung();
void chon(int chon);
void bai1();
void bai2();
void bai3();
void bai4();
int main(){
    int chon;
    noiDung();
    cin>>chon;
    while(chon>4){
        cout<<"Moi ban nhap lai: ";
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
    
    default:
        break;
    }
    system("pause");
}
void noiDung(){
    cout<<"1. Tinh gia tri da thuc"<<endl;
    cout<<"2. Khoang cach 2 vector"<<endl;
    cout<<"3. Tinh tich phan"<<endl;
    cout<<"4. Con tro cap 2"<<endl;
    cout<<"Moi ban chon: ";
}
void bai1(){
    // f(x)=a(1).x^n+...+a(n-1).x+n+a(n)
    srand(time(NULL));
    int n,x,*a;
    cout<<"n=";
    cin>>n;
    cout<<"x=";
    cin>>x;
    a=new int[n];
    for(int i=0;i<n;i++){
        a[i]=rand()%100;
    }
    cout<<"Phan tu a(1) -> a(n)"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    cout<<"x="<<x<<endl;
    cout<<"n="<<n<<endl;
    int f=0;
    for(int i=0;i<n;i++){
        f+=a[i]*pow(x,n-i);
    }
    cout<<"f(x)="<<setprecision(4)<<f<<endl;
}

void bai2(){
    srand(time(NULL));
    int *p1,*p2,n;
    cout<<"n=";
    cin>>n;
    p1=new int[n];
    p2=new int[n];
    for(int i=0;i<n;i++){
        p1[i]=rand()%100;
    }
    for(int i=0;i<n;i++){
        p2[i]=rand()%100;
    }
    cout<<"Vector p1"<<endl;
    for(int i=0;i<n;i++){
        cout<<p1[i]<<"\t";
    }
    cout<<endl;
    cout<<"Vector p2"<<endl;
    for(int i=0;i<n;i++){
        cout<<p2[i]<<"\t";
    }
    cout<<endl;
    double P=0;
    for(int i=0;i<n;i++){
        P+=pow(p1[i]-p2[i],2);
    }
    cout<<"d(p1,p2)="<<sqrt(P)<<endl;
}

void bai3(){
    #define e 2.71828
    // Tích phân: f(x)=(e^x-2sin(x^2))/(1+x^4) trong đoạn [-1,4]
    int *n,x;
    n=new int;
    *n=5;
    double s=0;
    for(int i=0;i<*n;i++){
        x=-1+i*1;
        if(i==0||i==*n-1){
            double q=(pow(e,x)-2*sin(pow(x,2)))/(1+pow(x,4));
            s+=q/2;
        }
        else
        {
            s+=(pow(e,x)-2*sin(pow(x,2)))/(1+pow(x,4));
        }
    }
    cout<<"f(x)="<<s*1<<endl;
}

void bai4(){
    int **p,n,m;
    cout<<"n=";
    cin>>n;
    cout<<"m=";
    cin>>m;
    p=new int*[n];
    for(int i=0;i<n;i++){
        p[i]=new int[m];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            *(*(p+i)+j)=rand()%100;
        }
    }
    cout<<"Du lieu con tro"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<p[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Duong cheo chinh"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j){
                cout<<p[i][j]<<"\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }
    cout<<"Duong cheo phu"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j==m-i-1){
                cout<<p[i][j]<<"\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }
}

