int soma_positivos(int vet[], int tam){
  if(tam == 0){
    return 0;
  }else{
    if(vet[tam-1] > 0){
      return vet[tam-1] + soma_positivos(vet, tam-1);
    }else{
      return soma_positivos(vet, tam-1);
    }
  }
}
int main(void) {
  int vet[3];
  for(int i=0; i < 3; i++){
    scanf("%d", &vet[i]);
  }
  int t = sizeof(vet)/sizeof(vet[0]);
  int j = soma_positivos(vet, t);
  printf("%d", j);
  return 0;
}