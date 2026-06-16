

#include<stdio.h>
//this is commenr
int main(){
    int a;   // variable declaration (var ke data type ko declare karta hai)
    int b;
    int Dev;  // variable name case sensitive hote hai
    int dev;
    int _dev;  // var name ko underscore se bhi start kar sakte hai lekin inke bivh me spacial charecter ($#,) jaise ko nahi use kar sakte na hi brackets ka
    
    a = 12;  //variable initialisation
    printf("%d", a);  // %d  kas matlab isme kisi var ko print karne ke liye pahle uske data type ko % ke baad batana padta hai aur d yaha integer kko represent kar raha hai
    
    printf("the output is %d", a);   //yaha par %d ke assthan par var a ka value aa jayega
    
    // variable ko is tarah se bana bhi sakte hai
    int f = 23;
    float g = 3.4;
    char h = 'devil';    // yaha char datatype me variable ki valyu ddete samay use suingel cot me hi rakhenge double cot ma nahi rakh sakte 
    
    
    printf("\n size of int %zu \n", sizeof(int));   //matlab mera os me ek int ko ram me kitna space milega wo ise batalaayega
    printf("\n size of float %zu \n", sizeof(float));  // isi tarah te float ko
    printf("\n size of char %zu \n", sizeof(char));// isin tarsah ye char ko
        
    return 0;
}
