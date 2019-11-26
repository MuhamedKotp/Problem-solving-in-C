/*
Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.

Note: Midnight is 12:00:00AM on a 12-hour clock, and 00:00:00 on a 24-hour clock. Noon is 12:00:00PM on a 12-hour clock, and 12:00:00 on a 24-hour clock.

Function Description

Complete the timeConversion function in the editor below. It should return a new string representing the input time in 24 hour format.

timeConversion has the following parameter(s):

s: a string representing time in 12 hour format
*/
char* timeConversion(char* s) {
    //Get hours
    int hours_int = atoi(&s[0]);
    //Get minutes
    int minutes_int = atoi(&s[3]);
    //Get seconds
    int seconds_int = atoi(&s[6]);
    //Get time system
    char time_sys = s[8];
    
    if(time_sys == 'A'){
        if(hours_int == 12){
            hours_int = 0;
        }
    }
    if(time_sys == 'P'){
        if(hours_int == 12){
            hours_int = 12;
        }
        else{
            hours_int += 12;
        }
    }
    static char time[10]; 
    sprintf(time, "%02d:%02d:%02d", hours_int, minutes_int, seconds_int);
    return time;
}