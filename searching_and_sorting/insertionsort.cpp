void insertionSort(int *input, int size)
{
    for (int i=0;i<size;i++){
        int j = i;
        while(j>=0){
            if (input[j]<input[j-1]) swap(input[j],input[j-1]);
            j--;
        }
    }
}
