int tripletSum(int *input, int size, int x)
{
    int count = 0;
    for (int i =0;i<size;i++){
        for (int j = 0;j<i;j++){
            for (int k = 0;k<j;k++)
              if (input[i] + input[j] + input[k] == x) count++;
        }
    }
    return count;
}
