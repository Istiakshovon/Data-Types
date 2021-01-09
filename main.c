#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    
//    %u for unsigned variable
//    %s for string
//    %d for integer
//    %f for float
//    %c for char
//    %p for pointer
    
    int two = 2,three = 3, six = 6;
    int result = (two+three)*six/two;
    printf("%d",result);
    printf("\nHello world\n");
    int size = sizeof(short int);
    printf("%d",size);
    printf("\n");
    unsigned int var = 1234567890;
    printf("%u",var);
    
    char name[] = "Istiak";
    int age = 50;
    printf("Hello %s Happy %d th birthday",name,age);
    
    printf("%f",5.5+4);
    printf("\n %f",pow(5,3));
    printf("\n %f",sqrt(25));
    
    printf("%f",ceil(5.353));
    printf("\n %f",floor(5.66));
    
    int age1;
    printf("Enter your age : ");
    scanf("%d",&age1);
    printf("%d",age1);
    
    char name1[20];
    printf("Enter your name : ");
    fgets(name1, 20, stdin);
    printf("%s",name1);
    
    //memory
    int age2 = 30;
    int * pAge2 = &age2;
    //output will be in hexa decimal
    printf("%p", &age2);
    //To output main value or hexa decimal to int
    printf("%d", *pAge2);
    //we can try it also
    printf("%d", *&age2);
    
    
    return (EXIT_SUCCESS);
}

