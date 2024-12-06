#include <err.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef INPUTDIR
#define INPUTDIR "NO INPUT DIR GIVEN"
#endif /* ifdef INPUTDIR */

// constexpr int INSIZE = 1000; // constexpr not working? or am I using it wrong...
#define INSIZE 1000

int cmp(const void* a, const void* b) {
  int arg1 = *(const int*)a;
  int arg2 = *(const int*)b;

  if (arg1 < arg2) return -1;
  if (arg1 > arg2) return  1;
  return 0;
}

int main(int argc, char *argv[])
{
  puts(INPUTDIR"/day1/day1.input");
  FILE* input;
  if ((input = fopen(INPUTDIR"/src/day1/day1.input", "r")) == nullptr) {
    err(EXIT_FAILURE, "Failed to open "INPUTDIR"/src/day1/day1.input");
  }

  int left[INSIZE];
  int right[INSIZE];

  for (int i = 0; i < INSIZE; ++i) {
    int n = fscanf(input, "%d%d", &left[i], &right[i]);
  }

  qsort(left, INSIZE, sizeof(int), cmp);
  qsort(right, INSIZE, sizeof(int), cmp);

  //////////////////////////////////////////////////////////////////////////////
  /// part 1
  int diff = 0;
  int result = 0;
  for (int i = 0; i < INSIZE; ++i) {
    diff = abs(left[i] - right[i]);
    result += diff;
  }

  // Result for part 1
  printf("Result = %d\n", result);

  //////////////////////////////////////////////////////////////////////////////
  /// part 2


  fclose(input);
  return EXIT_SUCCESS;
}
