/*
Function Description

Complete the function gradingStudents in the editor below. It should return an integer array consisting of rounded grades.

gradingStudents has the following parameter(s):

grades: an array of integers representing grades before rounding
*/

int round_grade(int grade){
    int temp;
    temp = grade/5 + 1;
    temp *= 5;
    if((temp-grade) < 3)
        return temp;
    return grade;
}

int* gradingStudents(int grades_count, int* grades, int* result_count) {
    int *result = (int*)malloc(grades_count*sizeof(int));
    int i=0;
    *result_count = grades_count;
    if(grades_count>60 || grades_count<1){
        *result = -1;
        return result;
    }
    for(i=0; i<grades_count; i++){
        if(grades[i]>100 || grades[i]<0){
            *result = -1;
            return result;
        }
        if(grades[i]<38){
            result[i] = grades[i];
        }
        else{
            result[i] = round_grade(grades[i]);
        }
    }
    return result;
}
