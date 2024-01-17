int MDC(int n1, int n2){
  if(n2==0){
    return n1;
  }else{
    return MDC(n2, n1%n2);
  }
}
int main(void) {
  int n1,n2;
  scanf("%d %d", &n1, &n2);
  int j = MDC(n1, n2);
  printf("%d", j);
  return 0;
}