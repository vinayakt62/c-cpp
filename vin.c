
// // // C code to illustrate using
// // // graphics in linux environment
// // #include<stdio.h>
// // #include<stdlib.h>
// // #include<graphics.h>
// // int main()
// // {
// //     int gd = DETECT, gm;
// //     initgraph(&gd, &gm, NULL);

// //     circle(50, 50, 30);

// //     delay(500000);
// //     closegraph();
// //     return 0;
// // }

// // #include <sys/statvfs.h>
// // #include <stdio.h>

// // int  main() {
// //   int fd;
// //   struct statvfs buf;

// //   if (statvfs(".", &buf) == -1)
// //     perror("statvfs() error");
// //   else {
// //     printf("each block is %d bytes big\n", buf.f_bsize);
// //     printf("there are %d blocks available out of a total of %d\n",
// //            buf.f_bavail, buf.f_blocks);
// //     printf("in bytes, that's %.0f bytes free out of a total of %.0f\n ", ((double)buf.f_bavail * buf.f_bsize), ((double)buf.f_blocks * buf.f_bsize));
// //   }
// //   return 0;
// // }

// // #include <sys/statvfs.h>
// // #include <stdio.h>

// // unsigned long rounddiv(unsigned long num, unsigned long divisor) {
// //     return (num + (divisor/2)) / divisor;
// // }

// // int main() {
// //     struct statvfs diskData;
// //     statvfs("/home", &diskData);
// //     unsigned long available = diskData.f_bavail * diskData.f_bsize;
// //     printf("Free Space : %lu\n", rounddiv(available, 1024*1024));
// //     return 0;
// // }

// // #include <stdio.h>
// // #include <string.h>

// // int main() {

// //     char str1[] = "apple";
// //    char *str2[10] = {"apple","apple","bpple","anup","apple"};

// //     //char *str2[5][10] = {"apple","apple","bpple","anup","apple"};
// //     int count=0;

// //     for (int i = 0; i < 5; i++)
// //     {

// //         if ( str1[0] == '-' ? (strcmp(str2[i], str1+1) != 0) : (strcmp(str2[i], str1) == 0) ) {
// //             count++;

// //         }
// #include <iostream>
// using namespace std;

// int main() {

//   for (int i = 0; i < 10; i++) {
//     if (i == 4) {
//       continue;
//     }
//     cout << i << "\n";
//   }

//   do (
//   w
//   return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {

//   for (int i = 0; i < 10; i++) {
//     if (i == 4) {
//       continue;
//     }
//     cout << i << "\n";
//   }

//   do (
//   w
//   return 0;
// }

// //         // if ( str1[0] == '-' ? (strcmp(str2[0][i], str1+1) != 0) : (strcmp(str2[0][i], str1) == 0) ) {
// //         //     count++;
// //         // }
// //     }

// //      printf("The strings are equal %d  .\n",count);
// //     return 0;
// // }

// // #include <stdio.h>
// // #include <stdlib.h>#include <iostream>
// using namespace std;

// int main() {

//   for (int i = 0; i < 10; i++) {
//     if (i == 4) {
//       continue;
//     }
//     cout << i << "\n";
//   }

//   do (
//   w
//   return 0;
// }

// //     val = atoi(str) - atoi(str1);
// //     printf("String value  value = %d\n", val);

// //    return(0);
// // }

// // /* program to check the printable character using the isprint() function in C. */
// // #include <stdio.h>
// // #include <ctype.h>
// // int main ()
// // {
// //     // declaration of the character type variables
// //     int ch5 = '\n';
// //     int ch6 = '\t';

// //     if (isprint(ch5))
// //     {
// //         printf (" '%c' is a printable character. \n", ch5);
// //     }
// //     else
// //     {
// //         printf ("'%c' is not a printable character. \n", ch5);
// //     }

// //     if (isprint(ch6))
// //     {
// //         printf (" '%c' is a printable character. \n", ch6);
// //     }
// //     else
// //     {
// //         printf ("'%c' is not a printable character. \n", ch6);
// //     }

// //     return 0;
// // }

// // // Example for getchar() in C
// // #include <stdio.h>
// // int main()
// // {
// //     char ch[10];
// //     printf("%c\n\t", ch[0]=getcwd());

// //     printf("%c\n\t", ch[0]);
// //     return 0;
// // }

// //  //#include <unistd.h>
// // #include <stdio.h>
// // #include <linux/limits.h>

// // int main() {
// //    char cwd[PATH_MAX];
// //    if (getcwd(cwd, sizeof(cwd)) != NULL) {
// //        printf("Current working dir: %s\n", cwd);
// //    } else {
// //        perror("getcwd() error");
// //        return 1;
// //    }
// //    return 0;
// // }

// // C program to implement
// // the above approach
// #include <stdio.h>
// #include <string.h>

// // Driver code
// int main()
// {
//     // Define a temporary variable
//     char example[100];

//     // Copy the first string into
//     // the variable
//     strcpy(example, "Geeks");

//     // Concatenate this string
//     // to the end of the first one
//     strcat(example, "ForGeeks");

//     // Display the concatenated strings
//     printf("%s\n", example); using namespace std;

// int main() {

//   for (int i = 0; i < 10; i++) {
//     if (i == 4) {
//       continue;
//     }
//     cout << i << "\n";
//   }

//   do (
//   w
//   return 0;
// }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main (void)
// {
//     int i = atoi (" ");
//     printf("%d\n", i);
//     return 0;
// }
// #include <stdlib.h>
// #include <stdio.h>
// int main(void)
// {
//    long int val;
//    char *str;
//    str = "20152030";

//    //convert string into long int
//    val = atol(str);
//    printf("Long int value = %ld", val);
// }

// #include <stdlib.h>
// #include <stdio.h>

//  long int val;
// char *str;

// int main1()
// {

//    str = "0:15";

//    //convert string into long int
//    val = atol(str);
//    printf("Long int value = %ld", val);
// }

// int main(void)
// {
//    str = "10:15";
//    //convert string into long int
//    val = atol(str);
//    printf("Long int value = %ld", val);
//    main1();
// }

#include <iostream>
using namespace std;

int main()
{

   //   for (int i = 0; i < 10; i++) {
   //     if (i == 4) {
   //       continue;
   //     }
   //     cout << i << "\n";
   //   }

   // cout << "continue j == 4" << "\n";
   // int j = 0;
   // do
   // {
   //    j++;
   //    if (j == 4)
   //       continue;
   //    cout << j << "\n";
   // } while (j < 10);

   // cout << "break j == 4" << "\n";
   // j = 0;
   // do
   // {
   //    j++;
   //    if (j == 4)
   //       break;
   //    cout << j << "\n";
   // } while (j < 10);

   cout << "continue j == 4" << "\n";
   int j = 0;
   cout <<"\n"<< j << "\n";
   if (j == 4)
      continue;
   cout << "continue j == 4" << "\n";


   return 0;
}
