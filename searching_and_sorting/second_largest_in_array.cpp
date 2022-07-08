#include <climits>
int findSecondLargest(int *input, int n)
{
    //Write your code here
    if (n<= 1) return INT_MIN;
    int max = input[0];
    for (int i =0;i<n;i++){
        if (input[i]>max){
            max = input[i];
        }
    }
    int max2 = INT_MIN;
    for (int i =0;i<n;i++){
        if (max2 < input[i] && input[i]<max){
            max2 = input[i];
        }
    }
    return max2;
}
