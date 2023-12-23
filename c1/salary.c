#include <stdio.h>

int main(){
    int salary;
    scanf("%d",&salary);
    int da,hra;
    da = salary*0.4;
    hra = salary * 0.2;
    int gross= salary+hra+da;
printf("%d",gross);
}