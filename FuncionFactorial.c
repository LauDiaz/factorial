#include<stdio.h>

long factorial(int n){
	if (n == 0) 
		return 1; 
	else
		return n * factorial (n - 1); 
}


int main(){
	
	float num;
	int n, opc;
	
	
	do{
		
		printf("***** Calculo de factorial *****");
        printf("\n1) Calcular Factorial\n2) Salir\n"); 
        printf("\nIngrese su opcion: ");
        scanf("%d",&opc); 

            switch(opc){
                case 1:
					printf("Ingrese un numero entero para calcular su factorial: ");
					scanf("%f",&num);
					n=num;
						if(num-n){
							printf("\nDebe ingresar un numero entero\n\n");
						}else{
							printf("\nEl factorial de %d es %ld\n\n ", n, factorial(n));
						}
                break;
                case 2:
                    printf("\nSalir");
                    break;
                default:
                    printf("Opcion no valida\n\n");
                break;
            }
		
	}while(opc!=2);
		
	return 0; 
}
