#include <stdio.h>

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    float M[12][12],sum = 0.0;
    int i,j,r=1,k=0;
    char O;
    scanf("%c",&O);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%f",&M[i][j]);
            if(i==1){
                r=10;
            }
            if(i>0&&i<11&&j>r){
                sum = sum+M[i][j];
                k++;
            }
        }

        if(i<5){
        r--;
        }
        else if(i<6){
            r=6;
        }
        else{
            r++;
        }
    }
    if(O == 'S'){
        printf("%.1f\n",sum);
    }
    else if(O == 'M'){
        printf("%.1f\n",sum/k);
    }

    return 0;
}
