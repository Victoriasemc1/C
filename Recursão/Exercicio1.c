#define max 3
int menor(int vet[], int n){
  if(n ==1){
    return vet[0];
  }else{
    int aux = menor(vet, n-1);
    if(vet[n-1] < aux){
      return vet[n-1];
    }else{
      return aux;
    }
  }
}
int main(void) {
  int vet[max];
  for(int i= 0; i < max; i++){
    scanf("%d", &vet[i]);
  }
  int n = sizeof(vet)/ sizeof(vet[0]);
  int resp = menor(vet, n);
  printf("resp: %d", resp);
  return 0;
}