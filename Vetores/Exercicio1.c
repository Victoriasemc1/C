#define max 2
int main(void) {
  int R[max], S[max], soma=0, X[20], Y=1;
  //lendo os vetores
  printf("Vetor R:\n");
  for(int i =0; i < max; i++){
    scanf("%d", &R[i]);
  }
  printf("Vetor S: \n");
 for(int i =0; i < max; i++){
    scanf("%d", &S[i]);
  }
  //soma dos vetores
  for(int i = 0; i < max; i++){
    soma += R[i] + S[i];
  }
  //uniao dos vetores R e S
  for(int i=0; i <max; i++){
    X[i]= R[i];
    X[2+i]= S[i];
  }
  //multiplicação dos vetores R e S
  for(int i=0; i< max; i++){
    Y *= R[i]*S[i];
  }
  //impressão dos valores 
  printf("Soma: %d \n", soma);
  
  printf("União de vetores: ");
  for(int i=0; i <20; i++){
    printf("%d", X[i]);
  }
  printf("\nMultiplicação de vetores %d",Y);
  return 0;
}
