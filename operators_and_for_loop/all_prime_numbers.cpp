#include <bits/stdc++.h>
using namespace std;

string primee(int n){
    string a = "prime";
    string b = "not prime";
    if (n==1) return b;
    else if (n!=2 && n%2==0) return b;
    else {
        for (int i = 3;i<=sqrt(n);i+=2){
            if (n%i == 0) 
                return b;
        }
    }
    return a;
}

int main(){
    int n;
    cin>>n;
    vector<int>A;
    for (int i = 1;i<=n;i++){
       if (primee(i) == "prime"){
         A.push_back(i);
       }
    }
    for (int z:A) cout<<z<<endl;
}
