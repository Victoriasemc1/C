#define linha 4
#define coluna 5
int main(void) {
  int mat[linha][coluna],somalinha[linha]={0}, total=0;
  
  
  for(int i = 0; i< linha; i++){
     printf("%d° linha: \n", i+1);
    for(int j = 0; j < coluna; j++){
      scanf("%d", &mat[i][j]);
      somalinha[i] += mat[i][j];
      total += mat[i][j];
    }
  }
  for(int i=0; i< 4; i++){
    printf("%d ", somalinha[i]);
  }
  printf("\n%d", total);
  return 0;
}