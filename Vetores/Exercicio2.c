#define max 3
int main(void) {
  int A[max], K,aux;
  for(int i = 0; i < max; i++){
    scanf("%d", &A[i]);
  }
  printf("Chave:");
  scanf("%d", &K);
  for(int i = 0; i < max; i++){
    if(K == A[i]){
      printf("Posicao no vetor: %d", i);
      aux++;
    }
  }
  if(aux == 0){
    printf("Chave nao encontrada");
  }
  return 0;
}