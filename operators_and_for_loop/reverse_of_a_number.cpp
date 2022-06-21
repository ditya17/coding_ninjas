#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
	
    int N;
    cin>>N;
    string s = to_string(N);
    vector<int>A;
    int x = s.size();
    if (N==0){
        cout<<0;
        return 0;
    }
    else {
        while (N%10 == 0) {
            x--;
            N = N/10;
        }
    
    int i = 1;
    while(i<=x){
        int z = N%10;
        N = N/10;
        A.push_back(z);
        x--;
    }
    for(int a:A) cout<<a;
    }
}
