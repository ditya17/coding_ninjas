void pushZeroesEnd(int *input, int size)
{
   int i =0, j=0;
   while (input[j] != 0) {
       j++;
       i++;
   }                        
   while (i<size){
       if (input[i] != 0) {
           input[j] = input[i];
           j++;
       }
       i++;
   }
    while (j<size){
        input[j]=0;
        j++;
    }
}
