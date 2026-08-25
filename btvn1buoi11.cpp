#include <iostream>
using namespace std;

int main(){
    int n,x ;
    cout<<"Vui long nhap mang n:  ";
    cin>>n;
    int nums[n];

    for(int i=0; i<n;i++){
        cout << "Nhap phan tu thu " << i + 1 << ": "; //nhap mang
        cin >> nums[i];
    }

    cout<<"nhap X: ";
    cin>>x;
    
    int locate=-1; //xet -1 vi mang lay gia tri 0
    for (int i=0; i<n; i++){ //check x co nam trong mang kh
        if(nums[i]==x){
            locate=i;
            break;
        }
    }
    if (locate==-1){
        cout<<"khong tim thay "<<x<<" trong mang tren!"<<endl;
    }else{
        cout<<"Vi tri xuat hien cua "<<x<<" dau tien o phan tu thu "<<locate+1<<endl;
    }
    int dem=0;
    for (int i=0; i<n; i++){
        if(nums[i]==x){
            dem++;
        }
    }
    cout<<"tong so lan "<<x<<" xuat hien trong mang la: "<<dem;
    return 0;
}