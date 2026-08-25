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
    cout<<endl;
    for(int i=0; i<n;i++){
        cout << "Phan tu thu " << i + 1 << "la: "<<nums[i]<<endl;
    
    }
    cout<<endl;

    //cach1
    for(int i=n-1;i>=0;i--){
        cout<<"Phan tu thu "<<i+1<<" la:"<<nums[i]<<endl;
    }
    // // //cach2

    // for (int i=0; i<n/2;i++){
    //     int dao= nums[i]; //khai bao bien dao bang gia tri trong mang
    //     nums[i]= nums[n-1-i];// gan gia tri dau bang gia tri cuoi, vi du: nums[4]=> phan tu 0 bang phan tu 4, phan tu 1 bang phan tu 3,...
    //     nums[n-1-i]=dao;//gan gia tri vua doi vao bien dao

    // }
    // for (int i=0; i<n;i++){
    //     cout<<"phan tu thu "<<n-i<<" la:"<<nums[i]<<endl;
    // }

    return 0;

}   