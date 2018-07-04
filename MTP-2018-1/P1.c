//Italo Giordane dos Santos			11511ete020


#include <stdio.h>

int main(){
    int estado=0, i, a=0;
    char bits[256], ibits[256];
    printf("Por favor, digite a sequencia de Um(s)e Zero(s): ");
    fflush(stdin);
    scanf("%s", (char *) &bits);
    for(i=0; bits[i] != '\0';i++){
        a+=1;
    }
    for(i=a-1; i>=0; i--){
        ibits[a-1-i] = bits[i];
    }
    ibits[a] = '\0';
    i=0;
    while(ibits[i] != '\0'){
        if(estado == 0){
            if(ibits[i]=='1')
                estado+=1;
        }else if(estado == 1){
            if(ibits[i]=='0'){
                estado+=1;
            }else{
                estado-=1;
            }
        }else{
            if(ibits[i] == '0')
                estado-=1;
        }
        i+=1;
    }
    printf("Estado: %d\nA sequencia %s %seh multipla de 3", estado, bits, (estado!=0?"nao ":""));
    return 0;
}
