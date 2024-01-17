int main(void) {
  char cargo[20];
  int salario, nsal;
  printf("Salario: ");
  scanf("%d", &salario);
  printf("Cargo: ");
  scanf("%s", cargo);
  
  if(strcmp(cargo, "gerente") == 0){
    nsal = salario+(salario * 0.1);
  }else if(strcmp(cargo, "engenheiro") == 0){
    nsal = salario+(salario * 0.2);
  }else if(strcmp(cargo, "auxiliar") == 0){
    nsal = salario+(salario * 0.3);
  }else{
    nsal = salario+(salario * 0.4);
  }
  printf("O novo salario é: %d", nsal);
  return 0;
}