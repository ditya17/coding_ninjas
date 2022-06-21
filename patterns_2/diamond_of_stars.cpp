#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x = (n/2)+1;
    if (n%2 ==0) {
        return 0;
    }
    else {
        int i=1;
        while(i<=x){
            cout<<string(x-i,' ');
            int j = 1;
            while (j<=i+i-1){
                cout<<'*';
                j++;
            }
            cout<<endl;
            i++;
        }
        int k=1;
        while (k<=n-x){
            cout<<string(k, ' ');
            int l = (n-2*k);
            while (l>=1){
                cout<<'*';
                l--;
            }
            cout<<endl;
            k++;
        }
    }
}
