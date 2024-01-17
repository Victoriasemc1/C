int main(void) {
  char nomes [5][30];
  int cont;
  for (cont = 1; cont <=5; cont ++) {
    printf ("\nInforme o nome %d: ", cont );
    fgets(nomes[cont], 30, stdin);
  }
  for (cont = 0; cont <5; cont ++){
    printf ("\nO nome da posicao %d eh %s", cont , nomes[cont]);
  }
}