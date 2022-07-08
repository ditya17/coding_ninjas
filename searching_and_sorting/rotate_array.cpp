#include <bits/stdc++.h>
using namespace std;

void rotate(int *input, int d, int n)
{
    //Write your code here
    vector<int>A;
    for (int i =0;i<d;i++){
        A.push_back(input[i]);
    }
    int j=0, k=d;
    while(k<n){
        input[j] = input[k];
        j++;
        k++;
    }
    int l =0;
    while (j<n){
        input[j] = A[l];
        j++;
        l++;
    }
}
