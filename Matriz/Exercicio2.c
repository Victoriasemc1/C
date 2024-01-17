#define linha 2
#define coluna 2
int main(void) {
  int A[linha][coluna], B[linha][coluna], total=0;
  //vetor A
  printf("A:\n");
  for(int i = 0; i < linha;i++){
    for(int j = 0; j < coluna;j++){
      scanf("%d", &A[i][j]);
    }
  }
  //vetor B
  printf("B:\n");
  for(int i = 0; i < linha;i++){
    for(int j = 0; j < coluna;j++){
      scanf("%d", &B[i][j]);
    }
  }
  for(int i = 0; i < linha;i++){
    for(int j = 0; j < coluna;j++){
      total += A[i][j] + B[i][j];
    }
  }
  printf("Total: %d", total);
  return 0;
}