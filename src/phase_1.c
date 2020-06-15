#include <stdio.h>

#include "../include/phase_1.h"
#include "../include/bomb.h"
#include "../include/util.h"

int
bootstrap_phase_1 (Bomb* bomb)
{
  char* tmpfile;

#ifdef VERBOSE
  DEBUG("Bootstrap phase 1");
#endif

  tmpfile = create_tmpfile("phase_1");
  if (tmpfile == NULL)
    return -1;

  if (clean_copy(tmpfile, bomb) == -1)
    return -1;

  return -1;
}

void
solve_phase_1 (void)
{
  printf("Solving phase_1\n");
}