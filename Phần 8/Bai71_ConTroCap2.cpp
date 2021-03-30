#include<iostream>
using namespace std;
int main(){
    int **p = new int*[5]; // Cấp phát bộ nhớ cho chiều ở ngoài (hàng dọc)
    for (int i = 0; i < 5; i++)
    {
        *(p+i)=new int[7]; //bên trong có một mảng con trỏ cấp 1 có 7 phần tử (hàng ngang) 
        // p[i] = new int[7]
    }
    // Nhập dữ liệu
    for(int i=0;i<5;i++){
        for(int j=0;j<7;j++){
            p[i][j]=i+j;
            // *(*(p+i)+j)=i+j
        }
    }
    // Xuất dữ liệu
    for(int i=0;i<5;i++){
        for(int j=0;j<7;j++){
            // cout<<p[i][j]<<"\t";
            cout<<*(*(p+i)+j)<<"\t";
        }
        cout<<endl;
    }

    // Hủy bộ nhớ con trỏ cấp 2
    for(int i=0;i<5;i++){
        delete *(p+i);
        *(p+i)=NULL;
    }
    delete p;
    p=NULL;
    
    /* Kiểm tra xem con trỏ đã bị hủy chưa
    for(int i=0;i<5;i++){
        for(int j=0;j<7;j++){
            // cout<<p[i][j]<<"\t";
            cout<<*(*(p+i)+j)<<"\t";
        }
        cout<<endl;
    }
    // Hiển thị rỗng vì con trỏ đã bị hủy bộ nhớ
    */

    system("pause");
}