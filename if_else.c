#include <stdio.h>

int main() {
   // Your code here
    int age;

    if(age>10){
        printf("You can go inside if your age is >10\nMention your age:");
        scanf("%d",&age);
        printf("Congrats you are allowed inside\n");
    }
    else{
        printf("You are not allowed");
    }


    return 0;
}