void printTable(int S, int E, int W) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */

    int C;
    while (S<=E){
    	C = 5*(S - 32)/9;
        cout<<S<<"\t"<<C<<endl;
      S = S+W;
    }
}
