/*
Consider a staircase of size :

   #
  ##
 ###
####
Observe that its base and height are both equal to , and the image is drawn using # symbols and spaces. The last line is not preceded by any spaces.

Write a program that prints a staircase of size n.

Function Description

Complete the staircase function in the editor below. It should print a staircase as described above.

staircase has the following parameter(s):

n: an integer
*/
void staircase(int n) {
    int row=0, col=0;
    if(n>100 || n<1){
        printf("ERROR\n");
        return;
    }
    for(row=1; row<=n; row++){
        for(col=1; col<=n; col++){
            if(col<=(n-row))
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }
}