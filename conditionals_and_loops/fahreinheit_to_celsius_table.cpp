#include<iostream>
using namespace std;

int main(){
    int C, S, E, W;
    cin>>S>>E>>W;
    while (S<=E){
    	C = 5*(S - 32)/9;
        cout<<S<<" "<<C<<endl;
      S = S+W;
    }
}
