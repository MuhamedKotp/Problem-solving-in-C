/*
Function Description

Complete the simpleArraySum function in the editor below. It must return the sum of the array elements as an integer.

simpleArraySum has the following parameter(s):

ar: an array of integers
 */
int simpleArraySum(int ar_count, int* ar) {
    /*
     * Write your code here.
     */
    if(ar_count <= 0)
        return 0;
    int i = 0, sum = 0;
    for(i=0; i<ar_count; i++){
        if(ar[i] > 1000)
            return 0;
        sum += ar[i] ;
    }
    return sum;
}