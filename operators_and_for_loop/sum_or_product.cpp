#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int N,C;
    cin>>N>>C;
    int sum = 0;
    long product = 1;
    for (int i = 1;i<=N;i++){
        sum = sum + i;
        product = product* i;
    }
        if (C==1){
           cout<< sum; 
        }
        else if (C==2){
            cout<<product;
        }
        else if (C != 1 && C!= 2)
            cout<< "-1";    
}
