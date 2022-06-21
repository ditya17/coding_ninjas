#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i =0;i<=n;i++){
        cout<< string( n-i, ' ');
        for (int j = i;j<=(i+i -1);j++){
            cout<<j;
        }
    cout<<endl;
    }
}
