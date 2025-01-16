//    //  #include <stdio.h>   
//    //  void main() {  
//    //     int a=10;
       
      
//    //     printf ("Iterator points to \n\t") ;  
      

//    //    if(a==10)
//    //       return;

//    //     printf("VINAYAK  \n\t");  
 
//    //  }  

// // #include <fstream>
// // #include <iostream>
// // using namespace std;
// // int main (int argc, char** argv) {
// //    fstream File("d.txt", ios::in | ios::out );
// //    File << "TutorialsPoint";
// //    File.seekg(100, ios::beg);
// //    char F[10];
// //    File.read(F, 100);
// //    F[5] = 0;
// //    cout <<F<< endl;
// //    File.close();
// // }


// // #include<stdio.h>
// // #include<string.h>
// // void main()
// // {

// //    string txt = "Hello";
// //    cout <<  txt.length();
// // }





// #include<stdio.h>
// #include<string.h>
// void main()
// {
//    FILE *fp;
//    char ch[20]; 
//    char buff[4096];
//    char str[]="10-vfyhgygg";
//    // for(int i=0; i<=5;i++){
     
//    //    sprintf(ch,"data%d.log",i);
//    //    // fp = fopen (ch, "w");
//    //    // fprintf(fp, "print this %d",i); 
//    //    // fclose(fp);
//    //    printf("%s\n",ch);
//    //    strcat(buff, ch);

//    // }
//    int cnt = atoi(str);
//    printf("%d\n",cnt);
//    //printf("data0.log,data1.log,data2.log,data3.log,data4.log,data5.log");
// }




// C program for splitting a string
// using strtok()
#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[] = "Gee-ksGeeks-gnhh";
 
    // Returns first token
    char* token = strtok(str, " - ");
 

    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL) {
        printf(" % s\n", token);
        //token = strtok(NULL, " - ");
    }
 
    return 0;
}

