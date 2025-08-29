#include <stdio.h>
int main() {
    int MARKS[20][5], i, j, count=0;
    float sub_avg[5]={0}, stu_avg[20]={0};

    printf("Enter marks of 20 students in 5 subjects:\n");
    for(i=0;i<20;i++){
        for(j=0;j<5;j++){
            scanf("%d",&MARKS[i][j]);
            sub_avg[j]+=MARKS[i][j];
            stu_avg[i]+=MARKS[i][j];
        }
    }

    printf("\nAverage marks in each subject:\n");
    for(j=0;j<5;j++){
        printf("Subject %d: %.2f\n", j+1, sub_avg[j]/20);
    }

    printf("\nAverage marks of each student:\n");
    for(i=0;i<20;i++){
        stu_avg[i]/=5;
        printf("Student %d: %.2f\n", i+1, stu_avg[i]);
        if(stu_avg[i]<50) count++;
    }

    printf("\nNumber of students scoring below 50 in average = %d\n", count);

    printf("\nScores of each student:\n");
    for(i=0;i<20;i++){
        printf("Student %d: ",i+1);
        for(j=0;j<5;j++) printf("%d ", MARKS[i][j]);
        printf("\n");
    }
    return 0;
}
