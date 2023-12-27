#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void string_to_int(int size, const char **argv, int *result);
int cmpfunc (const void * a, const void * b); 

int main(int argc, const char *argv[]){
    int size = atoi(argv[1]);
    int item = atoi(argv[2]);
    int *res = (int*)calloc(sizeof(int), 1024);

    string_to_int(size, argv, res);
    printf("%d\n", res[1]);
    qsort(res, size, sizeof(int), cmpfunc);
//    binary_search();
    printf("%d\n", res[0]);
    return 0;
}

void string_to_int(int size, const char **argv, int *result){
  for (int i = 0; i < size && argv[i + 3]; ++i) {
    result[i] = atoi(argv[i + 3]);
  }
}

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}



