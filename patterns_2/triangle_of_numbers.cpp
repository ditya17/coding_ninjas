#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i =1;i<=n;i++){
         cout<<string(n-i, ' ');
        for (int j =i;j<= i+i-1;j++){
            cout<<j;
        }
        for (int j =i+i-2;j>= i;j--){
             cout<<j;
         }
        cout<<endl;
    }
}
