#include<bits/stdc++.h>
void intersection(int *input1, int *input2, int size1, int size2)
{
    vector<int>arr;
    for (int i = 0;i<size1 ;i++){
        for (int j =0;j<size2;j++){
            if (input1[i] == input2[j]){
                arr.push_back(input1[i]);
                input2[j] = INT_MIN;
                break;
            }
        }
    }
    for (int j:arr) cout<<j<<" ";
}
