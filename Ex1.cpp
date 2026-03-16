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
  }else{
    dif = n2 - n1;
  }
  return 0;
}
