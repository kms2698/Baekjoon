#include <stdio.h>

typedef struct point {
  int xpos;
  int ypos;
  struct point * ptr;
} Point;

int main(){
  Point pos1 = {1, 1};
  Point pos2 = {2, 2};
  Point pos3 = {3, 3};

  pos1.ptr = &pos2;
  pos2.ptr = &pos3;
  pos3.ptr = &pos1;


  printf("[%d, %d]와  [%d, %d] 연결 \n", pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
  printf("[%d, %d]와  [%d, %d] 연결 \n", pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
  printf("[%d, %d]와  [%d, %d] 연결 \n", pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);
}
