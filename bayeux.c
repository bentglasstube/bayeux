#include <stdlib.h>
#include <string.h>

int main(int argc, char ** argv) {
  const char * fvck = "fvck";
  void * memory;

  while (memory = malloc(sizeof(fvck))) {
    // fill memory with fvcks
    memcpy(memory, fvck, sizeof(fvck));
  }

  while (1) {
    // leave all the fvcks in there forever
  }

  return 0;
}
