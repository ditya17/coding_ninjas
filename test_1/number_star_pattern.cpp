#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    for (int i = 0;i<n;i++){
        for (int j = 1;j<=n-i;j++){
            cout<<j;
        }
        cout<<string(2*i,'*');
        for (int k = n -i;k>0;k--){
            cout<<k;
        }
        cout<<endl;
    }
}
