#define max 20
int main(void) {
  char palavra[max];
  fgets(palavra, max, stdin);
  for(int i =0 ; i<max;i++){
    if(palavra[i] == ' '){
      palavra[0] = palavra[0]-32;
      palavra[i+1] = palavra[i+1] - 32;
    }
  }
  printf("%s", palavra);
  return 0;
}