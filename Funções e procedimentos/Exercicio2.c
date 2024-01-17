void fatorial(int n){
  int fat=1;
  for(int i = 1; i <= n; i++){
    fat *= i;
  }
  printf("%d", fat);
}
int main(void) {
  int n;
  printf("Digite um numero: \n");
  scanf("%d", &n);
  fatorial(n);
  return 0;
}