void sortZeroesAndOne(int *input, int size)
{
    int i =0, j = size -1;
    while ( i<j){
        if (input[i] ==1 && input[j] ==0){
            swap (input[i],input[j]);
            i++;
            j--;
        }
         if (input[i] == 0) i++;
        if (input[j] == 1) j--;
    }
}
