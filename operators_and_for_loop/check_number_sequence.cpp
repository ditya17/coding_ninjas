#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin>>n;
    int p;
    vector<int>A;
    for (int i = 0;i<n;i++){
       cin>>p;
        A.push_back(p);
    }
    if (n == 1 ) {
        cout<<"true";
        return 0;
    }
    if (n ==2 & A[0] == A[1]){
        cout<<"false";
        return 0;      
    }
    else if (n ==2 & A[0] != A[1]){
        cout<<"true";
        return 0;  
    }

    int i =0;
    for (;i<A.size();i++){
        if (A[i]<A[i+1])
            break;
        else if (A[i]==A[i+1]) {
            cout<<"false";
            return 0;
        }
    }
    for (;i<A.size();i++){
        if (A[i]>A[i+1])
            break;
        else if (A[i]==A[i+1]) {
            cout<<"false";
            return 0;
        }
    }
    if (i == A.size()-1) cout<<"true";
    else cout<<"false";
}
