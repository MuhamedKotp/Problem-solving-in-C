/*
Calculate and print the sum of the elements in an array, keeping in mind that some of those integers may be quite large.

Function Description

Complete the aVeryBigSum function in the editor below. It must return the sum of all array elements.

aVeryBigSum has the following parameter(s):

ar: an array of integers .
*/
long long aVeryBigSum(int ar_count, long* ar) {
    int i = 0;
    long long sum = 0;
    if(ar_count>10 || ar_count<1)
        return 0;
    for(i=0; i<ar_count; i++){
        if(ar[i]<0 || ar[i]>10000000000)
            return 0;
        sum += ar[i];
    }
    return sum;
}