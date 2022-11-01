#include <stdio.h>

int primo(int primo);

int fatorial(int fatorial);

int main(){
    int primo;
    printf("Informe um numero:");
    scanf("%d", &primo);


    if( fprimo(primo) == 2){
        printf("\nO valor digitado e primo\n");
    }
    else{
        printf("\nO valor digitado nao e primo\n");
    }
    printf("\nO fatorial desse numero é %d\n", fatorial(primo) );
}
int fprimo(int primo){
    int valid = 0;
    for(int i = 1; i <= primo; i++){
        if(primo % i == 0){
            valid++;
        }
    }
    return valid;
}
int fatorial( int fatorial){
    int ftr = 1;
    for( int i = fatorial ; i > 1; i--){
        ftr = ftr * i;
    }
    return ftr;
}