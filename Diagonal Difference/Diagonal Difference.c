/*
Function description

Complete the  function diagonalDifference in the editor below. It must return an integer representing the absolute diagonal difference.

diagonalDifference takes the following parameter:

arr: an array of integers .
*/
int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int i = 0, j = 0;
    int LRD = 0, RLD = 0, result =0;
    if(arr_rows != arr_columns)
        return 0;
    for(i=0; i<arr_rows; i++){
        for(j=0; j<arr_columns; j++){
            //Check constrains
            if(arr[i][j]>100 || arr[i][j]<-100)
                return 0;
            if(j==i)
                LRD += arr[i][j];
            if((j+i) == (arr_rows-1))
                RLD += arr[i][j];
        }
    }
    result = LRD - RLD;
    if(result > 0)
        return result;
    else
        return result*-1;
}