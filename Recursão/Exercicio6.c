int divisao(int a, int b){
  if(a < b){
    return 0;
  }else{
    return 1+ divisao(a - b , b);
  }
}
int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  int i = divisao(a,b);
  printf("%d", i);
  return 0;
}