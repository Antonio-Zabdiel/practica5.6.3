#include<stdio.h>

int main(){
    int n;
    int rep = 0;
    int i = 0;
    long int factorial = 1;

    printf("ingrese un numero entero: ");
    scanf("%d", &n);

    rep = n;
    
    if(n >= 1){
        for(i = 0 ; i < rep ; i++){
            printf("%d\t%d\t%ld\n",n,i,factorial);
            factorial *= n;
            n--;
        }
        printf("el factorial es: %ld \n", factorial);
    } else {
        printf("numero no valido");
    }
    
    
    
    return 0;
}