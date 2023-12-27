#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void string_to_int(int size, const char **argv, int *result);
//int cmpfunc (const void * a, const void * b); 
int binary_search(int *res, int item, int size);

int main(int argc, const char *argv[]){
    int size = atoi(argv[1]);
    int item = atoi(argv[2]);
    int *res = (int*)calloc(sizeof(int), 1024);

    string_to_int(size, argv, res);
    //qsort(res, size, sizeof(int), cmpfunc);
    int ans = binary_search(res, item, size);
    printf("%d\n", ans);
    return 0;
}

int binary_search(int *res, int item, int size){
  int low = 0;
  int high = size - 1;
  int mid = 0;
  while (low <= high) {
    mid = (low + high) / 2;

    if (res[mid] == item)
      return mid;
    else if (res[mid] > item)
      high = mid - 1;
    else if (res[mid] < item)
      low = mid - 1;
  }
  return -1;
}

void string_to_int(int size, const char **argv, int *result){
  for (int i = 0; i < size && argv[i + 3]; ++i)
    result[i] = atoi(argv[i + 3]);
}

/*
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
*/


