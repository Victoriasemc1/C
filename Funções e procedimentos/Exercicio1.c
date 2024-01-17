void adicao(int n1, int n2){
  int soma = n1 + n2;
  printf("A adicao desses dois numeros é:%d \n", soma);
}
void subtracao(int n1, int n2){
  int subtracao = n1 - n2;
  printf("A subtracao desses dois numeros é:%d \n", subtracao);
}
void multiplicacao(int n1, int n2){
  int multiplicacao = n1 * n2;
  printf("A multiplicacao desses dois numeros é:%d \n", multiplicacao);
}
void divisao(int n1, int n2){
  if(n2 == 0){
    printf("Nao existe \n");
  }else{
    double divisao = n1/n2;
    printf("A divisao desses dois numeros é: %f \n", divisao);
  }
}
int main(void) {
  int n1, n2;
  printf("Priemiro numero: ");
  scanf("%d", &n1);
  printf("Segundo numero: ");
  scanf("%d", &n2);
  
  adicao(n1, n2);
  subtracao(n1, n2);
  multiplicacao(n1,n2);
  divisao(n1, n2);  
  
  return 0;
}
