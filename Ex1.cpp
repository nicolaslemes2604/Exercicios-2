///Elabore um algoritmo para ler dois números e apresentar a diferença do maior número pelo menor número.
#include <stdio.h>;

int main(){
  float n1, n2, ,ma , me , dif;
  printf("Digite um valor: ");
  scanf("%f", &n1);

  printf("Digite outro valor: ");
  scanf("%f", &n2);

  if(n1 > n2){
    dif = n1 - n2;
    ma = n1;
    me = n2;
  }else{
    dif = n2 - n1;
    ma = n2;
    me = n1;
  }
  if (n1 == n2){
    printf("A diferença é 0");
  }else{
     printf("A diferença do maior num %f pelo menor %f eh %f", ma, me, dif);
  }

  return 0;
}
