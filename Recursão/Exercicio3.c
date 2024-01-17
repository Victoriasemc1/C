int soma(int vet[], int tam){
  if(tam == 1){
    return vet[0];
  }else{
    return vet[tam-1] + soma(vet, tam-1);
  }
}
int media(int soma, int tam){
  if(tam==1){
    return 1;
  }else{
    return soma/tam; 
  }
}
int main()
{
  int vet[3];
  for(int i = 0; i <3; i++){
    scanf("%d", &vet[i]);
  }
  int t = sizeof(vet)/sizeof(vet[0]);
  int j =  media(soma(vet, t), t);
  printf("%d", j);
  return 0;
}