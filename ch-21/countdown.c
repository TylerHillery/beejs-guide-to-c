#include <stdio.h>
#include <time.h>

  int main(void) {                                                         
      for (int i = 10; i >= 0; i--) {
          printf("\rT minus %d second%s... \b", i, i != 1 ? "s" : "");     
          fflush(stdout);
          nanosleep(&(struct timespec){.tv_sec=1}, NULL);                  
      }                                                                    
      printf("\rLiftoff!                \n");
  }