#include <stdio.h>

int main() {
   int i,batdau, ketthuc;

   batdau = 1;
   ketthuc = 100;

   printf("In cac so theo thu tu giam dan:\n");

   for(i = ketthuc; i >= batdau; i--) 
      printf("%2d\n", i);

   return 0;
}
