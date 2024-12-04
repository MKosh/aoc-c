#include <err.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef INPUTDIR
#define INPUTDIR "NO INPUT DIR GIVEN"
#endif /* ifdef INPUTDIR */

// constexpr int INSIZE = 1000; // constexpr not working? or am I using it wrong...
#define INSIZE 1000

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

  /* printf("%d   %d\n", left[0], right[0]); */
  /* printf("%d   %d\n", left[INSIZE-1], right[INSIZE-1]); */

  fclose(input);
  return EXIT_SUCCESS;
}
