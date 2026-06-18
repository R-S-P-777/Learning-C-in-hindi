#include <stdio.h>
int main(){
    // kisi variable ko kitne tariko se bana sakte hai  aur his tarah ke value diy ejaate hai
    int a;
    float b;
    char c;
    //variable is a named location of memory
    int d = 1;
    int e = d;
    
    int f=2, g=3, h=4, i=5;  // ek hi line me multiple variabel declare kar sakte hai
    
    printf("value of d is : %d \nvalye of e is : %d ", d, e);
                  // %d is a formate spacifier
                  // %d fir int, %f for flot, %c for char
                  
     int j = f+g+h;
     
     printf("%d", j);           
     
             // invalid variable declaration
             // float = 2.5;   kyonki a pahle se hi dusre datatype me declared hai
             // float b = a +3;  yaha bhale hi b float hai lekin ye tarika invalid hoga yaha
             
    int k, l, m, n, o, p;
    k=l=m=n=o=p=30;      // ye tarika puri tarah se valid hai             
     
    //x+y=z  me xy operends, =+ operators, z result hai
    
    int q =3;
    int r =4;
    // + operator
    printf("the valye of q + r is = %d", q+r);
            
    // modulus operator, isse remainder (sasphal) milta hai
    printf("the remaindser os r/q is : %d", r%q);
    
    // operants ek sath int aur float dono reh sakte sah ek hi formula me
    
    // int z; z=b*c;        aisa kar sakte hai
    // int z; b*c=z;        aisa nahi kar sakte hai
    
    // % moduale operater hai, remainder return karta hai, float pe apply nahi hita, iska sign hamesa numeraator ke sign ke same hota hai (example ke liye -5%2=-1)
    
     // int a = b*c; ( ye tarika sashi hai), int a = bc; (ye galat hai c me illigal hai)
     
      
       //int a = b^c;  c me ^ use exponentiation (power) ke liye nahi use  hota hai  iskke liye <math.h> ka use hota hai
       
       
       /*
      an arithmetic operation between
        int and int = int
        int and float = float
        float and float = float
        */
    
    // int k = 3.87;     yaha pat k= 3 hi hoga kyonki k ek intiger hai , ise type demotion kehte hai
    
    /*
     operater precedense
                          priority                                operater
                          1st                                            * / %
                          2nd                                            + -
                          3rd                                              =
                                                  
                              jin operater ki priority jitni jada hoti hai we utne pehle operate hote hai  parenthesis ke na hone par , c me bodmass rull apply nahi hota hai  
                              ise sequence control instructions kahte hai  
    */
    
    
    
    
    
    return 0;
}    