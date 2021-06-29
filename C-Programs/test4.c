#include <stdio.h>
void A(void){
  printf("A called");
}
void B(void){
  printf("B called");
}
int main(){
  A(1);
  B(1);
  return 0;
}