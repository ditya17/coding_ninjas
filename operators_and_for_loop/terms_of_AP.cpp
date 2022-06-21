#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
	int x;
    cin>>x;
    int count = 1;
    vector <int>A;
    int i =1;
    while (count<=x){
        int z = 3*i + 2;
        if (z%4 != 0) {
            A.push_back(z);
            count++;
        }
        i++;
        }
    for (int a:A) cout<<a<<" ";
}
