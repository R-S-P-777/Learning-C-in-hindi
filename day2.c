//how to get any input from user
#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);  // isse ye ek int ko input lega
                       // in sabhi scanf finction me & kisi var ke address ko represent karta hai
    float b;
    scanf("%f", &b);  // ye ek float ko input lega
    
    char c;
    scanf(" %c", &c);  // yaha par float ka input ke baad jo rnter daba rahe hai use hi normally cjar apna input samajh le raha tha isliye yaha par % ke pehle ek space diya gaya hai
                                  
    printf("%d\n", a);
    printf("%f\n", b);
    printf("ye char me ham \n se new line \t se tab \' se single cot \" se double cot \\ se slase ko type kar sakte hai \n \n %c\n", c);
                                // inme \ ke baad jo hai jaise \n \t in sabhi ko scape sequal charecter kaha jata hai 
                                //ye code me ek charecter je bhati vyavahaar karte hai jabki dekhne ke doubke charecter lagte hai lekin ye single charecter hai
                                                              
    return 0;
    
}    



