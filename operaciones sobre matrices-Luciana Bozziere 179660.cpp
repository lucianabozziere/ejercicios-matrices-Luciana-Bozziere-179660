/*ejercicios matrices*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int o,n,i,j,k;
	int suma=0;
	int sumat=0;
	
    srand(time(NULL));
    printf("Ingrese la longitud de la matriz: \n");
    scanf("%d", &n);
    int A[n][n], B[n][n], resultado[n][n];

   printf("Matriz A:\n");
    for (i=0; i<n; i++){
     for (j=0; j<n; j++){
      A[i][j]=rand()%10;
	  printf("%d ",A[i][j]);
    }
   printf("\n");
   }
   printf("Matriz B:\n");
    for (i=0; i<n; i++){
      for (j=0; j<n; j++){
        B[i][j]=rand()%10;
        printf("%d ",B[i][j]);
	  }
    printf("\n");
    }
   
 int a=1;
 while(a==1){
    
  printf("\n");
  printf("que opcion quieres?\n");
  printf("opcion 1= suma\n");
  printf("opcion 2= resta\n");
  printf("opcion 3= multiplicacion\n");
  printf("opcion 4= diagonal\n");
  printf("opcion 5= suma triangular superior\n");
  printf("opcion 6= terminar el programa\n");
  scanf("%d",&o);
	 
	 switch(o)
	  {
       case 1:
        for (i = 0; i < n; i++) {
         for (j = 0; j < n; j++) {
          resultado[i][j] = A[i][j] + B[i][j];
         }
        }
       printf("Resultado de la suma:\n");
        for (i = 0; i < n; i++) {
         for (j = 0; j < n; j++) {
          printf("%d ", resultado[i][j]);
         }
        printf("\n");
        }
        break;
        
        case 2:
         for (i = 0; i < n; i++) {
          for (j = 0; j < n; j++) {
           resultado[i][j] = A[i][j] - B[i][j];
          }
         }
        printf("Resultado de la resta:\n");
         for (i = 0; i < n; i++) {
          for (j = 0; j < n; j++) {
            printf("%d ", resultado[i][j]);
          }
         printf("\n");
         }
        break;
        
        case 3:
         for (i = 0; i < n; i++) {
          for (j = 0; j < n; j++) {
           resultado[i][j] = 0;
            for (k = 0; k < n; k++) {
             resultado[i][j] += A[i][k] * B[k][j];
            }
          }
         }
        printf("Resultado de la multiplicación:\n");
         for (i = 0; i < n; i++) {
          for (j = 0; j < n; j++) {
            printf("%d ", resultado[i][j]);
          }
        printf("\n");
         }
        break;
        
        case 4:
         for (i=0; i<n; i++){
           for (j=0; j<n; j++){
             printf("%d ",A[i][j]);
        if (i==j)
        suma += A[i][j];
		 }
         printf("\n");
         }
        printf("La suma de la diagonal de la matriz es: %d\n", suma);
        break;
		 
        case 5:
           for (i = 0; i < n; i++) {
	    for (j = i + 1; j < n; j++) {
             printf("%d ", A[i][j]);
             sumat += A[i][j]; 
           }
        printf("\n");
        }
        printf("Suma triangular superior de la matriz A: %d\n", sumat);
        break;
        
        default:
        	printf("terminar el programa");
        	a=6;
        break;         
      }       
 }
 return 0;
}

