#include <stdio.h>

int main(){
  char a[1001],b[1001];
  int a_size,b_size;

  scanf("%s %s",a,b);

  for(a_size = 0; a[a_size] != '\0' ; a_size++);
  for(b_size = 0; b[b_size] != '\0' ; b_size++);
  int i,j;
  for(i=0; i < a_size ; i++){
    for(j=0; j < b_size ; j++){
      if(a[i] == b[j]){
        a[i] = '0';
        b[j] = '0';
      }
    }
  }

  int ans=0;

  for(i=0; i< a_size  ; i++){
    if(a[i] != '0'){
      ans++;
    }
  }
  for(i=0; i< b_size ; i++){
    if(b[i] != '0'){
      ans++;
    }
  }
  printf("%d\n",ans);
  return 0;
}
