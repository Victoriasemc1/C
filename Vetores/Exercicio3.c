#define max 3
int main(void) {
  int A[max], B[max];
  for(int i = 0; i < max; i++){
    scanf("%d", &A[i]);
  }
  for(int i = 0; i < max; i++){
    if(A[i] > A[i+1]){
      B[i] = A[i+1];
    }
  }
  for(int i = 0; i < max; i++){
    scanf("%d", &A[i]);
  }
  return 0;
}