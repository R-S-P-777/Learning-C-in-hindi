#include <stdio.h>
int main(){
    //conditional instructure
        
    // if statement
    int age;
    printf(" enter your age : \n");
    scanf("%d", &age);
                            
                                
    if (age>18){
        printf("you are adult");    //keval is statement me condition false hone par koi output nahi mitla kewal true hone par hi hoga
    }
                                                    
    if (age%10==0){
        printf("your age is divisible by 10");
    }
    return 0;
}   