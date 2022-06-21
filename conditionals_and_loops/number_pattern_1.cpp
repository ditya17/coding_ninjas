#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i =0;i<=n;i++){
        for (int j = i;j<=(i+i-1);j++){
            if(j==0){
                cout<<1;
            }
            else cout<<j;
        }
    cout<<endl;
    }
}
