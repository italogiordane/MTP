//Avaliação continuada P1 - Italo Giordane dos Santos			11511ete020


#include <stdio.h>
	
int main ()
{
	int est = 0, n = 0;
	char bits [256];
	printf ("\nDigite um numero em binario onde testaremos se eh multiplo de 3: ");
	scanf ("%s", bits);
			
	while(bits[n]!='\0')
	{
		if(bits[n]=='0')
		{
			if(est==0)
				est=0;
			else
			{
				if(est==1)
					est=2;
				else
				{
					if (est==2)
						est=1;
				}
			}	
		}	
		if(bits[n]=='1')
		{
			if(est==0)
				est=1;
			else
			{
				if(est==1)
					est=0;
				else
				{
					if(est=2)
						est=2;
				}
				
			}
		}
		n++;
	}
	
	if (est==0)
		printf("\nO numero digitado eh multiplo de 3...",bits);
	if (est!=0)
		printf("\nO numero digitado nao eh multiplo de 3...", bits);

	return 0;

}
