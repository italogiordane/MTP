//Italo Giordane dos Santos 	11511ETE020

#include<stdio.h>

int main (){
	
char num[256];
int opcao, i, number=0, numero_binario;
    printf ("Escolha uma opcao entre 1 e 8:\n1- Binario para Decimal.\n2- Binario para Hexadecimal.\n3- Hexadecimal para Decimal.\n4- Hexadecimal para Binario.\n5- Decimal para Binario.\n6- Decimal para Hexadecimal.\n7- Octal para Decimal.\n8- Decimal para Octal.\n");
    scanf("%d", &opcao);	getchar();
if(opcao==1){
    printf("Digite um numero em Binario.\n");
    scanf("%s", num); getchar();
    for(i=0; num[i] != '\0'; i++)
    number = number*2 + (num[i] - '0');	
    printf("Valor em decimal: %d", number);
}else if(opcao==2){
    printf("Digite um numero em Binario.\n");
    scanf("%s", num); getchar();
    for(i=0; num[i] != '\0'; i++)
    number = number*2 + (num[i] - '0');		   
    printf("Valor em hexadecimal: %x", number);
}else if(opcao==3){
    printf("Digite um numero em Hexadecimal.\n");
    scanf("%x", &number); getchar();
    printf("Valor em decimal: %d", number);
}else if(opcao==4){
    printf("Digite um numero em Hexadecimal.\n");
	scanf("%x", &number); getchar();
	for(numero_binario = 0; number >= (1 << numero_binario); numero_binario++){
	}	
	char num[numero_binario];
	for(i=0; i<numero_binario; i++){
		if(number%2==0){
			num[i]=0;
		}else{
			num[i]=1;
		}
		number=number/2;
	}
	printf("Valor em binario: ");
	for(i=numero_binario-1; i>=0; i--){
	    printf("%i", num[i]);
	}
}else if(opcao==5){
    printf("Digite um numero em Decimal.\n");
	   scanf("%d", &number); getchar();
	for(numero_binario = 0; number >= (1 << numero_binario); numero_binario++){
	}	
	char num[numero_binario];
	for(i=0; i<numero_binario; i++){
		if(number%2==0){
			num[i]=0;
		}else{
			num[i]=1;
		}
		number=number/2;
	}
	printf("Valor em binario: ");
	for(i=numero_binario-1; i>=0; i--){
		printf("%i", num[i]);
	}
}else if(opcao==6){
    printf("Digite um numero em Decimal.\n");
    	scanf("%d", &number); getchar();
    	printf("Valor em hexadecimal: %x", number);
}else if(opcao==7){
    printf("Digite um numero em Octal.\n");
	    scanf("%o", &number); getchar();
	    printf("Valor em decimal: %d", number);
}else if(opcao==8){
    printf("Digite um numero em Decimal.\n");
	    scanf("%d", &number); getchar();
	    printf("Valor em Octal: %o", number);
}

	return 0;
}
