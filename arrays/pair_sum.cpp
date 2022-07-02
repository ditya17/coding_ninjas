int pairSum(int *input, int size, int x)
{
    int count = 0;
    for (int i =0;i<size;i++){
        for (int j = 0;j<i;j++){
           if (input[i] + input[j] == x) count++;
        }
    }
    return count;
}
