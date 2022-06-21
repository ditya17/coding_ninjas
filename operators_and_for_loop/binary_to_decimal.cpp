#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin>>n;
    int i =0;
    int sum =0;
    while (n>0){
        int z = n%10;
        n = n/10;
        if (z == 1){
        	sum = sum + pow(2,i);
        }
        i++;
    }
    cout<<sum;
}
