int main(void) {
  int linhasA, linhasB, colunasA, colunasB;
  printf("Linhas A:");
  scanf("%d", &linhasA);
  printf("Colunas A: ");
  scanf("%d", &colunasA);
  
  printf("Linhas B:");
  scanf("%d", &linhasB);
  printf("Colunas B: ");
  scanf("%d", &colunasB);
  int a[linhasA][colunasA], b[linhasB][colunasB], c[linhasA][colunasB], aux=0;
  
  //lendo A
  printf("A:");
  for(int i = 0; i < linhasA; i++){
      for(int j = 0; j< colunasA; j++){
         scanf("%d", &a[i][j]);
      }
  }
  //lendo B
  printf("B:");
  for(int i = 0; i < linhasB; i++){
      for(int j = 0; j< colunasB; j++){
         scanf("%d", &b[i][j]);
      }
  }
  
  if(colunasA == linhasB){
    for(int i = 0; i < linhasA; i++){
      for(int j = 0; j < colunasB; j++){
        c[i][j] = 0;
        for(int x = 0; x < linhasB; x++){
          aux += a[i][j]*b[i][j];
        }
      }
      c[i][j] = aux;
      aux = 0;
    }
    for(int i = 0; i < linhasA; i++) {
		  for(int j = 0; j < colunasB; j++) {
			 printf("%d", c[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\n");
  }else{
    printf("A multiplicacao entre matrizes nao existe");
  }
  return 0;
}