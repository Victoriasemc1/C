int funcao(int n, int m){
  int x;
  if((n=m) || (m=0)){
    return x = 1;
  }else{
    return x = funcao(n-1,m)+funcao(n-1,m+1);
  } 
}
int main(void) {
  printf("%d", funcao(5,3));
  return 0;
}