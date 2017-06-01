#include <stdio.h>

void swap(int *ptr1, int *ptr2){
  int tmp = * ptr1;
  * ptr1 = * ptr2;
  * ptr2 = tmp;
}
void swap2(int ptr1, int ptr2){
    int tmp = ptr1;
    ptr1 = ptr2;
    ptr2 = tmp;
}
int main(){
  int num1 = 10, num2 = 20;
  printf("num1, num2: %d %d\n", num1, num2);
  //swap(&num1, &num2);
  swap2(num1, num2);
  printf("num1, num2: %d %d\n", num1, num2);
}
