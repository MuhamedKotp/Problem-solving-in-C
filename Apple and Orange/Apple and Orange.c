/*
Function Description

Complete the countApplesAndOranges function in the editor below. It should print the number of apples and oranges that land on Sam's house, each on a separate line.

countApplesAndOranges has the following parameter(s):

s: integer, starting point of Sam's house location.
t: integer, ending location of Sam's house location.
a: integer, location of the Apple tree.
b: integer, location of the Orange tree.
apples: integer array, distances at which each apple falls from the tree.
oranges: integer array, distances at which each orange falls from the tree.
*/
void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges) {

    if(s>100000 || s<1){
        printf("ERROR");
        return;
    }
    else if(t>100000 || t<1){
        printf("ERROR");
        return;
    }
    else if(a>100000 || a<1){
        printf("ERROR");
        return;
    }
    else if(b>100000 || b<1){
        printf("ERROR");
        return;
    }
    else if(apples_count>100000 || apples_count<1){
        printf("ERROR");
        return;
    }
    else if(oranges_count>100000 || oranges_count<1){
        printf("ERROR");
        return;
    }
    
    if(!(a<s<t<b)){
        printf("ERROR");
        return;
    }
    
    int apples_res=0,apple_temp, orange_temp, oranges_res=0;
    for(int i=0; i<apples_count; i++){
        apple_temp = apples[i]+ a;
        if(apple_temp>=s && apple_temp<=t)
            apples_res++;
    }
    for(int i=0; i<oranges_count; i++){
        orange_temp = oranges[i]+ b;
        if(orange_temp>=s && orange_temp<=t)
            oranges_res++;
    }
     
    printf("%d\n%d", apples_res, oranges_res);

}