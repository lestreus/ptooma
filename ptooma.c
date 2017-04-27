#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ptooma.h"

int main(int argc, char *argv[])
{
  int i;
  for(i=1;i<10;i++)
    printf("%d\n", pull(i));
  return 0;
}
