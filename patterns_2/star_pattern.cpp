#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
        int i=1;
        while(i<=n){
            cout<<string(n-i,' ');
            int j = 1;
            while (j<=i+i-1){
                cout<<'*';
                j++;
            }
            cout<<endl;
            i++;
        }
}
