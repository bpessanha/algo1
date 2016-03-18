#include<stdio.h>

int main(){

    int fahr, cels, upper;

//    lower=0;
    upper=300;
//    step=20;

//    fahr=lower;
//    while (fahr <= upper){
//        cels=5*(fahr-32)/9;
//        printf("%d\t%d\n", fahr, cels);
//        fahr=fahr+step;
//    }

    for (fahr=0;fahr<=upper;fahr+=20){
        cels=5*(fahr-32)/9;
        printf("%4d\t%8d\n", fahr, cels);
    }

return(0);
}
