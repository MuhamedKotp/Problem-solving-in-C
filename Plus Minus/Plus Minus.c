/*
Function Description

Complete the plusMinus function in the editor below. It should print out the ratio of positive, negative and zero items in the array, each on a separate line rounded to six decimals.
*/
void plusMinus(int arr_count, int* arr) {
    int i=0;
    int p_counter = 0;
    int n_counter = 0;
    int z_counter = 0;
    
    if(arr_count>100 || arr_count <1){
        printf("ERROR\n");
        return;
    }
    for(i=0; i<arr_count; i++){
        if(arr[i]>100 || arr[i]<-100){
            printf("ERROR\n");
            return;
        }
        if(arr[i] == 0)
            z_counter ++;
        else if(arr[i] > 0)
            p_counter ++;
        else
            n_counter ++;
    }
    
    printf("%0.6f\n", (float)p_counter/arr_count);
    printf("%0.6f\n", (float)n_counter/arr_count);
    printf("%0.6f\n", (float)z_counter/arr_count);

}