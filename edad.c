#include <stdio.h>

int main(){
    
    int e;
    printf("Introduzca su edad: ");
    scanf("%d", &e);
	if(e>=18){
	printf("puedes votar");
	}else{
	printf("No puedes votar");
	}
}
