void Fibonacci(int n){
  int aux, n1= 0, n2=1;
  printf("%d ", n2);
  for(int i = 0; i < n; i++){
    aux = n1 +n2;
    n1 = n2;
    n2 = aux;
    printf("%d ",  aux);
  }
}
int main(void) {
  int n;
  printf("Posicao: ");
  scanf("%d", &n);
  Fibonacci(n); 
  return 0;
}