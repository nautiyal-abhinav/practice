#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf ("%d" , & marks);
    switch (marks) {
case 90 ... 100:
printf ("grade : excellent");
break;
case 80 ... 89:
printf ("grade :1st division with honours");
break;
case 70 ... 79:
printf("grade: 2nd division");
break;
case 60 ... 69:
printf("grade:  3rd division");
break;  
case 50 ... 59:
printf ("grade: pass");
break;
case 0 ... 49:
printf ("grade : fail");
break;
default:
printf("invalid marks entered"); 

    }
    
    return 0;
}   