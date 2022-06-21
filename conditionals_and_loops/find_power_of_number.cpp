#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int x,n;
    cin>>x>>n;
    if (x == 0 && n ==0) cout<<1;
    else{
        int z = 1;
        for (int i =0;i<n;i++){
            z = z*x;
        }
        cout<<z;
    }
}
