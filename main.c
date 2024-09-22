#include <stdio.h>

int main() {
    printf("Suma de matrices \n");
    int A1[2], B1[2];
    
    printf("introduce las filas y las columnas de la matriz A: \n");
    for (int i = 0; i < 2; i++) {
        scanf("%d", &A1[i]);
    }
    
    printf("introduce las filas y las columnas de la matriz B: \n");
    for (int i = 0; i < 2; i++) {
        scanf("%d", &B1[i]);
    }

    printf("Filas Matriz A: %d\n", A1[0]);
    printf("Columnas Matriz A: %d\n", A1[1]);
    printf("Filas Matriz B: %d\n", B1[0]);
    printf("Columnas Matriz B: %d\n", B1[1]);
    
    if(A1[0]!=B1[0] || A1[1] != B1[1]){
        printf("El número de filas y columnas necesita ser el mismo para que sean sumadas");
        return 0;
    }
    if(A1[0] !=0|| A1[1] !=0){
        printf("El número de filas y columnas necesita ser diferente a 0");
        return 0;
    }
    int A[A1[0]][A1[1]] , B[B1[0]][B1[1]];
    
    for(int i=0; i<A1[0]; i++){
        for(int j=0; j<A1[1]; j++){
            printf("Introduce los datos de la matriz A en posición [%d] [%d]: " , i , j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<B1[0]; i++){
        for(int j=0; j<B1[1]; j++){
            printf("Introduce los datos de la matriz B en posición [%d] [%d]: " , i , j);
            scanf("%d", &B[i][j]);
        }
    }
    for(int i=0; i<A1[0]; i++){
        for(int j=0; j<A1[1]; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0; i<B1[0]; i++){
        for(int j=0; j<B1[1]; j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    int C[A1[0]][A1[1]];
    for(int i=0; i <A1[0]; i++){
        for(int j=0; j<A1[1];j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("La suma de las 2 matrices ingresadas es: ");
        printf("\n");
    for(int i=0; i<B1[0]; i++){
        for(int j=0; j<B1[1]; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }    
    return 0;
}
