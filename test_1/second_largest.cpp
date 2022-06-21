#include<bits/stdc++.h>
using namespace std;
#include <climits>


int main(){
    
    // Write your code here
    int n;
    cin>>n;
    int p;
    vector <int>A;
    for (int i=0;i<n;i++){
        cin>>p;
        A.push_back(p);
    }
    if (n == 0 || n ==1 ){
        cout<<INT_MIN;
        return 0;
    }
    if (n == 2 && A[1] == A[0]){
        cout<<INT_MIN;
        return 0;
    }

    int max1=INT_MIN, max2=INT_MIN;
    
    for (int i = 0;i<n;i++){
         if (A[i]>= max1) {
            max2 = max1;
            max1 = A[i];
        }
        else if (A[i]<max1 && A[i]>max2 ) {
          max2= A[i];
        }
    }
    cout<<max2;
}
