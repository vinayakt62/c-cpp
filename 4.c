#include<stdio.h>


/* Filename: shm_write.c */
#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<sys/types.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>


#define SHM_KEY "MYSHM"

/*struct shmseg {
   int cnt;
   int complete;
   char buf[BUF_SIZE];
};
int fill_buffer(char * bufptr, int size);
*/
int main(int argc, char *argv[]) {
   int shmid;//, numtimes;
   char *shmbuf;
   //struct shmseg *shmp;
   //char *bufptr;
   //int spaceavailable;
   shmid = shmget(SHM_KEY, 100, 0644|IPC_CREAT);
   if (shmid == -1) {
      perror("Shared memory");
      return 1;
   }
   
   // Attach to the segment to get a pointer to it.
   shmbuf = shmat(shmid, NULL, 0);
   if (shmbuf == (void *) -1) {
      perror("Shared memory attach");
      return 1;
   }
   
   /* Transfer blocks of data from buffer to shared memory */
   strcpy(shmbuf, "Hello Shared memory");
   sleep(60);
   if (shmdt(shmp) == -1) {
      perror("shmdt");
      return 1;
   }

   if (shmctl(shmid, IPC_RMID, 0) == -1) {
      perror("shmctl");
      return 1;
   }
   
   printf("Writing Process: Complete\n");
   return 0;
}
