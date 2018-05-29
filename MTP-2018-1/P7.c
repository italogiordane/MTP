//Italo Giordane dos Santos 	11511ETE020


#include <stdio.h>

int ackerman(int m, int n)
{
	if(m==0) return n + 1;
	else if(m > 0 && n==0) return ackerman(m-1, 1);
	else if(m > 0 && n > 0)  return ackerman(m - 1,ackerman(m, n - 1));
  	return 0;
}

int main(){
	int x, y;
		printf("Favor informe um 'm': \n>");
		scanf("%d",&x);
		printf("Favor informe um 'n': \n>");
		scanf("%d",&y);
		printf("(%d, %d) = %d\n", x, y, ackerman(x,y));
	return 0;
}
