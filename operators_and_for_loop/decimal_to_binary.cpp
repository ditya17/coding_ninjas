#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
    int n;
    cin>>n;
    vector <int >A;
    if (n == 0) {
        cout<<0;
        return 0;
    }
    while (n>0){
        int x = n%2;
        n = n/2;
        A.push_back(x);
        
    }
    for (int j = A.size()-1;j>=0;j-- ) cout<<A[j];
    
	
}
