#include <stdlib.h>
#include <time.h>

int pull(int iDigits) {
  int i, m=1;
  for(i=0;i<iDigits-1;i++) {
    m*= 10;
  }
  struct timespec spec;
  clock_gettime(CLOCK_REALTIME, &spec);
  srand(spec.tv_nsec);
  return m+rand() % (m*9);
}
