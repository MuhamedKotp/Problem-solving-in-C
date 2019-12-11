/*
Function Description

Complete the miniMaxSum function in the editor below. It should print two space-separated integers on one line: the minimum sum and the maximum sum of 4 of 5 elements.

miniMaxSum has the following parameter(s):

arr: an array of 5 integers
*/
void miniMaxSum(int arr_count, int* arr) {
    int i=0, j=0;
    long long min=0, max=0, temp=0;
    for(i=0; i<arr_count; i++){
        if(arr[i]>1000000000 || arr[i]<1){
            printf("ERROR\n");
            return;
        }
        for(j=0; j<arr_count; j++){
            if(i != j)
                temp += arr[j];
        }
        if(temp > max)
            max = temp;
        if(i==0){
            min = temp;
        }else{
            if(temp < min)
               min = temp;
        }
        temp = 0;
    }
    printf("%ld %ld", min, max);
}