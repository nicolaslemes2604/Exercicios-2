///Elabore um algoritmo para ler dois números e apresentar a diferença do maior número pelo menor número.
#include <stdio.h>;

int main(){
  float n1, n2, dif;
  printf("Digite um valor: ");
  scanf("%f", &n1);

  printf("Digite outro valor: ");
  scanf("%f", &n2);

  if(n1 > n2){
    dif = n1 - n2;
    printf("A diferença do maior num %f pelo menor %f eh %f", n1, n2, dif);
  }else{
    dif = n2 - n1;
    printf("A diferença do maior num %f pelo menor %f eh %f", n1, n2, dif);
  }

  return 0;
}
