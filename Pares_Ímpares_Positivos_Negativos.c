#include <stdio.h>

int main(){
	int num, ipos = 0, ipar = 0, iimpar = 0, ineg = 0, tam = 5, i;
	printf("Este codigo exibe numeros pares, impares, positivos e negativos que sao inseridos na entrada de dados!\n");
	printf("Atencao: O 0 eh considerado um numero par no codigo presente!\n");
    for (i = 0; i < tam; i++) {
    	printf("Digite o %d numero: ", i);
        scanf("%d", &num);
        if (num == 0){
        	ipar++;
		}
        else if (num > 0) {
            ipos++;
            if (num %2 == 0) {
                ipar++;
            } else {
                iimpar++;
            }
        } else if (num < 0) {
            ineg++;
            if (num %2 == 0) {
                ipar++;
            } else {
                iimpar++;
            }
        }
    }
	printf("%d valor(es) par(es)\n", ipar);
	printf("%d valor(es) impar(es)\n", iimpar);
	printf("%d valor(es) positivo(s)\n", ipos);
	printf("%d valor(es) negativo(s)\n", ineg);
	
	return 0;
}
