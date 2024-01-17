int conta_digitos(int num ){
  if(num == 0){
    return 0;
  }else{
   return 1 + conta_digitos(num/10);
  }
}
int main(void) {
  int num;
  scanf("%d", &num);
  int i = conta_digitos(num);
  printf("%d", i);
  return 0;
}