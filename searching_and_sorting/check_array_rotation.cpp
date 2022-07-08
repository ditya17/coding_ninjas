int arrayRotateCheck(int *input, int size)
{
    //Write your code here
    if (size <= 1) return 0;
    int i =0,j=1;
    while (j<size){
        if (input[j]<input[i]){
            return j;
        }
        i++;
        j++;
    }
    return 0;
}
