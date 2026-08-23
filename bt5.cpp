#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    double S=0;
    cin>>n;

    for (int i=1; i<=n;i++){
        if(i%2==0){
            S-=(double)1/i;
        }else{
            S+=(double)1/i;
        }
    }
     cout << fixed << setprecision(4) << S;
     return 0;
}
