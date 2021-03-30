#include<iostream>
using namespace std;
int main(){
    int soDien;
    cout<<"So Kwh=";
    cin>>soDien;
      while (soDien<0)
    {
        cout<<"Ban da nhap sai. Moi ban nhap lai"<<endl;
        cout<<"So Kwh=";
        cin>>soDien;
    }
    int moc1=soDien*600;
    int moc2=100*600+(soDien-100)*700;
    int moc3=100*600+50*700+(soDien-150)*900;
    int moc4=100*600+50*700+50*900+(soDien-200)*1100;
    if (soDien<=100)
    {
        cout<<"Ban phai tra: "<<moc1<<" VND"<<endl;
    }
    else if (soDien<=150)
    {
        cout<<"Ban phai tra: "<<moc2<<" VND"<<endl;
    }
    else if (soDien<=200)
    {
        cout<<"Ban phai tra: "<<moc3<<" VND"<<endl;
    }
    else
    {
        cout<<"Ban phai tra: "<<moc4<<" VND"<<endl;
    }
    
    system("pause");
}