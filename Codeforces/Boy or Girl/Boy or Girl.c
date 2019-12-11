/********************************************************
********************Test specs***************************
*********************************************************
Those days, many boys use beautiful girls' photos as avatars in forums. So it is pretty hard to tell the gender of a user at the first glance. Last year, our hero went to a forum and had a nice chat with a beauty (he thought so). After that they talked very often and eventually they became a couple in the network.

But yesterday, he came to see "her" in the real world and found out "she" is actually a very strong man! Our hero is very sad and he is too tired to love again now. So he came up with a way to recognize users' genders by their user names.

This is his method: if the number of distinct characters in one's user name is odd, then he is a male, otherwise she is a female. You are given the string that denotes the user name, please help our hero to determine the gender of this user by his method.

Input
The first line contains a non-empty string, that contains only lowercase English letters — the user name. This string contains at most 100 letters.

Output
If it is a female by our hero's method, print "CHAT WITH HER!" (without the quotes), otherwise, print "IGNORE HIM!" (without the quotes).
*********************************************************/
#include <stdio.h>

int main()
{
    //To hold name in string with max length of 100 character + 1 for NULL
    char name[101] = {0};
    char i = 0;     // iterator for loops
    char n = 0;     // iterator for loops
    char counts = 0;   //Distinct characters counter
    
    //Scan user input
    scanf("%s", name);
    
    /****Count the number of distinct characters****/
    while(name[n] != '\0'){
        for(i=0; i<n; i++){     //Check the character with all previous ones
            if(name[i] == name[n]){     
                break;
            }
        }
        if(i == n){     //Check whether character is found in previous and if not increment the counter
            counts++;
        }
        n++;    //Move to nexe character in the name
    }
    
    //Check number of distinct characters and if even Print GIRL else MALE
    if((counts % 2) == 0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }
    

    return 0;
}