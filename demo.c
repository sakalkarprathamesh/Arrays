//Arrays//
#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float per;
}s1;

int main() {

    printf("enter rollno, name and percentage\n");
    scanf("%d %s %f", &s1.rollno, s1.name, &s1.per);
    printf("Student details:\n");
    printf("Roll no: %d \nName: %s \nPercentage:%f\n", s1.rollno, s1.name, s1.per);

    return 0;
}