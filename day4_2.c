#include <stdio.h>
int main(){
    // if else statemennt
    int age;
    printf(" enter your age : \n");
    scanf("%d", &age);
    
    // isme condition true hone par if statement run hoga false hone par else statement run hoga
    //isme if ya else me se koi ek hi statement run ho sakta hai 
    if (age>18){
        printf("you are adult");    
    }
    
    else{
        printf("you are not adult");
    }
    /*
    relational operations
    ==       eqal to
    >=       grater than or eqal to
    >         grater than
    <=       less than or eqal to
    <         less than
    !=        not eqal to
    
    */
    
    
    // c language me har ek non zero value true hoti hai
    if (1){
        printf("\nit is true\n");
    }
    if (34){
        printf("it is also true\n");
    }    
    if (0){
        printf("it is false\n");
    }
    if (4-4){
        printf("it is also fales");
    }
    
    if ('e'){
        printf("\nand it is also true ");
    }
    
    /*
    logical operator
    
    &&                  (AND) 
                              it is tuue when both condition are true
                              a.    1 and 0     is evaluated false
                              b.    0 and 0     is evaluated false
                              c.    1 and 1     is evaluated true
                              
    ||                  (OR)
                                isme koi ek condition true honi chahiye  
                              a.    1 or 0     is evaluated true
                              b.    0 or 0     is evaluated false
                              c.    1 or 1     is evaluated true
                              
    !                   (NOT)
                                isme sahio condition ko galat aur galat condition ko  sahi mana jata hai
                                a. (3==3)  is evaluated false
                                b. (3>30) is evaluated true
                                                  
      */
    
    return 0;
}   