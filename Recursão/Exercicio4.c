int calcula(int n){
  if(n == 0){
    return 1;
  }else{
    return 2 * calcula(n-1);
  }
}
int main(void) {
  int n;
  scanf("%d", &n);
  int resp = calcula(n);
  printf("Resposta: %d", resp);
  return 0;
}