/*
You are in charge of the cake for your niece's birthday and have decided the cake will have one candle for each year of her total age. When she blows out the candles, she’ll only be able to blow out the tallest ones. Your task is to find out how many candles she can successfully blow out.

For example, if your niece is turning 4 years old, and the cake will have 4 candles of height 4, 4, 1, 3, she will be able to blow out 2 candles successfully, since the tallest candles are of height 4 and there are 2 such candles.

Function Description

Complete the function birthdayCakeCandles in the editor below. It must return an integer representing the number of candles she can blow out.

birthdayCakeCandles has the following parameter(s):

ar: an array of integers representing candle heights
*/

// Get max
int getArrayMax(int ar_count, int* ar){
    int i = 0, max =0;
    for(i=0; i<ar_count; i++){
        if(ar[i]>max)
            max = ar[i];
    }
    return max;
}

// Complete the birthdayCakeCandles function below.
int birthdayCakeCandles(int ar_count, int* ar) {
    int i=0;
    int tallest_candle_counter=0, tallest_candle =0;
    if(ar_count>100000 || ar_count<1)
        return 0;
    tallest_candle = getArrayMax(ar_count, ar);
    for(i=0; i<ar_count; i++){
        if(ar[i]>10000000 || ar[i]<1)
            return 0;
        if(ar[i]==tallest_candle)
            tallest_candle_counter++;
    }
    return tallest_candle_counter;
}