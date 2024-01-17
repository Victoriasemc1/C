//Mostre na tela números de 1 a 10.
int crescente(int n){
  if(n>=10){
    return n;
  }else{
    printf("%d ", crescente(n+1));
  }
}
//Mostre na tela números de 10 a 1.
int decrescente(int n){
  if(n ==1){
    return n;
  }else{
    printf("%d ", decrescente(n-1));
  }
}
//Mostre na tela números de 1 à um número fornecido pelo usuário.
int contador(int n, int num){
  if(num <= n){
    return num;
  }else{
   printf("%d ", contador(num+1, n));
  }
}
//Mostre na tela o somatório de 1 a 15.
int somatorio(int n1, int n2){
  if(n1 >= n2){
    return n1;
  }else{
    return n1 + somatorio(n1+1, n2);
  }
}
//Mostre na tela o somatório de 1 à um número fornecido pelo usuário.
int somatorio_user(int n1){
  if(n1 == 1){
    return 1;
  }else{
    return n1 + somatorio_user(n1-1);
  }
}
//Mostre na tela números ímpares de 1 a 20.
int impares(int n1){
  if(n1 >= 20){
    return 1;
  }else {
    if(n1 % 2 != 0){
      printf("%d ",n1);
    }
    return impares(n1+1);
  }
}
//Mostre na tela números ímpares de 1 à um número fornecido pelo usuário.
int impares_user(int n1,int n2){
  if(n1 >= n2){
    return 1;
  }else {
    if(n1 % 2 != 0){
      printf("%d ", n1);
    }
    return impares_user(n1+1, n2);
  }
}
//Mostre na tela números pares entre 1 e 20 inclusive.
int pares(int n1){
  if(n1 == 21){
    return 1;
  }else{
    if(n1%2 == 0){
      printf("%d ", n1);
    }
    return pares(n1+1);
  }
}
//Mostre na tela números pares entre 1 e um número fornecido pelo usuário inclusive.
int pares_user(int n1, int n2){
  if(n1 >=n2){
    return 1;
  }else{
    if(n1%2 == 0){
      printf("%d ", n1);
    }
    return pares(n1+1);
  }
}
//Mostre na tela o fatorial de 1 a 10.
int fatorial(int n1){
  if(n1 <= 1){
    return 1;
  }else{
    return n1 * fatorial(n1-1) ;
  }
}
//Mostre na tela o fatorial de 1 até um número fornecido pelo usuário.
int fatorial_user(int n1, int n2){
  if(n2 >= n1){
    return 1;
  }else{
    return n1 * fatorial_user(n1-1, n2);
  }
}
//Mostre na tela o enésimo (N é fornecido pelo usuário) termo da seqüência de Fibonacci.
int fibonacci(int n){
  if(n <= 1){
    return 1;
  }else if(n==1){
    return 0;
  }else if(n==2){
    return 1;
  }else{
    return fibonacci(n-1) + fibonacci(n-2);
  }
}
//Mostre na tela o N primeiros (N é fornecido pelo usuário) termos da seqüência de Fibonacci.
int fibonacci_n(int n){
  if(n == 1){
    return 1;
  }else if(n==0){
    return 0;
  }else{
    return fibonacci_n(n-1) + fibonacci_n(n-2);
  }
}
//Some os elementos de um vetor.
int soma_vetor(int vet[], int tam){
  if(tam <= 0){
    return 0; 
  }else{
    return vet[tam-1] + soma_vetor(vet, tam-1);
  }
}
//Multiplique dois números a e b sem utilizar o operador *, utilizando apenas +.
int multiplicador(int a, int b){
  if(b == 1){
    return 1;
  }else{
    return multiplicador(a,b) + multiplicador(a-1, b-1);
  }
}
int main(void) {
  // int a = crescente(1);
  // printf("%d", a);
  //
  // int b = decrescente(10);
  // printf("%d", b);
  //
  // int c = scanf("%d", &c);
  // contador(c,1);
  //
  // int d = somatorio(1,15);
  // printf("%d", d);
  //
  // int e = scanf("%d", &e);
  // printf("%d", somatorio_user(e));
  //
  // impares(1);
  // return 0;
  //
  // int g = scanf("%d", &g);
  // impares_user(1,g);
  //
  //pares(1);
  //
  //int i = scanf("%d", &i);
  //printf("%d", pares_user(i));
  //
  // int h = fatorial(10);
  // printf("%d ", h);
  //
  // int j = scanf("%d", &j);
  // int aux = impares_user(1,j);
  // printf("%d", aux);
  //
  // int k;
  // scanf("%d", &k);
  // printf("%d",fibonacci(k));
  //
  // int l;
  // scanf("%d", &l);
  // for (int i = 1; i <= l; i++) {
  //   printf("%d ", fibonacci(i));
  // }
  //
  // int vet[6];
  // for(int i = 0; i < 6; i++){
  //   scanf("%d", &vet[i]);
  // }
  // int t = sizeof(vet)/sizeof(vet[0]);
  // printf("%d ", soma_vetor(vet, t));
  //
  int a, b;
  scanf("%d %d", &a, &b);
  multiplicador(a,b);
}