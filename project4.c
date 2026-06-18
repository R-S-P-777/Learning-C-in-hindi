// calculatiobn of simple interset
#include <stdio.h>
int main(){
    printf("enter the given ammount : ");
    int p;
    scanf("%d", &p);

    printf("enter the rate : ");
    float r;
    scanf("%f", &r);

    printf("enter the time in year");
    float t;
    scanf("%f", &t);

    printf("the simple interst is : %f", p*r*t/100);

    return 0;
}