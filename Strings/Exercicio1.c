int main(void) {
  char a[20];
  int cont;
  fgets(a, 20, stdin);
  for(int i = 0; i < strlen(a); i++){
    if(a[i] == 'a'){
      cont++;
      a[i] = 'b';
    }
  }
  printf("String final: %s", a);
  printf("Quantidade de modificações: %d", cont);
  return 0;
}