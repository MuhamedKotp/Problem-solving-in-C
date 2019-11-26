/*
Function Description

Complete the function compareTriplets in the editor below. It must return an array of two integers, the first being Alice's score and the second being Bob's.

compareTriplets has the following parameter(s):

a: an array of integers representing Alice's challenge rating
b: an array of integers representing Bob's challenge rating
*/

int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
    int i = 0;
    int a_score = 0, b_score = 0;
    int *result = (int *)malloc(2*sizeof(int));
    for(i=0; i<a_count; i++){
        if(a[i]>100 || a[i] <1 || b[i]>100 || b[i] <1){
            a_score = 0; b_score = 0; break;
        }
        else{
            if(a[i]>b[i])
                a_score += 1;
            else if(a[i]<b[i])
                b_score +=1;
        }
    }
    result[0] = a_score; result[1] = b_score;
    *result_count = 2;
    return result;
}