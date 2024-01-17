#define max 3

int soma(int vet[], int n){
  if(n == 1){
    return vet[0];
  }else{
    return vet[n-1] + soma(vet, n-1);
  }
}

int main(void) {
  int vet[max];
  for(int i= 0; i < max; i++){
    scanf("%d", &vet[i]);
  }
  int n = sizeof(vet)/sizeof(vet[0]);
  int resp = soma(vet, n);
  printf("Soma: %d", resp);
  return 0;
}