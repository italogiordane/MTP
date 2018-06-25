//Italo Giordane dos Santos			11511ete020


#include <stdio.h>

int main(){
	int estado =0, i=0, rest = 0;
	char bits[256];
	printf("Digite seus numeros para a analise: ");
	scanf("%s", bits);
	while(bits[i] != '\0'){
		if(bits[i] == '0' && estado == 0)
		rest = 0;
			if(bits[i] == '1' && estado == 0)
			rest = 1;
				if(bits[i] == '0' && estado == 1)
				rest = 2;
					if(bits[i] == '1' && estado == 1)
					rest = 0;
						if(bits[i] == '0' && estado == 2)
						rest = 1;
							if(bits[i] == '1' && estado == 2)
							rest = 2;
		estado = rest;
		rest = 0;
		i++;
	}
	printf("\nSequencia digitada: %s", bits);
	if(estado == 0)
		printf("\nEh multiplo de 3.");
	else
		printf("\nNao eh multiplo de 3");
	return 0;
}
