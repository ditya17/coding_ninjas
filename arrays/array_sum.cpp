#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x[1000000];
    for (int i =0;i<n;i++){
        cin>>x[i];
    }
    int sum = 0;
    for (int i = 0;i<n;i++){
        sum = sum+x[i];
    }
    cout<<sum;
}
