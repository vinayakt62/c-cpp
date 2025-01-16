#include <bits/stdc++.h>
using namespace std;
int remove_word (string str, char word[]) {
   char matrix[10][30];
   int i = 0, j = 0, k = 0, len1 = 0, len2 = 0;

   // putting each word of string into the rows of the 2-D matrix.
   for (i = 0; str[i] != '\0'; i++) {
      if (str[i] == ' ') {
         matrix[k][j] = '\0';
         k++;
         j = 0;
      }else{
         matrix[k][j] = str[i];
         j++;
      }
   }
   // looking for the word in a given string and putting a null character when the word is found.
   // matrix[k][j] = '\0';
   // j = 0;
   // for (i = 0; i < k + 1; i++) {
   //    if (strcmp (matrix[i], word) == 0) {
   //       matrix[i][j] = '\0';
   //    }
   // }

   // j = 0;
   // // printing the reordered string.
   // for (i = 0; i < k + 1; i++){
   //    if (matrix[i][j] == '\0')
   //       continue;
   //    else
   //       cout << matrix[i] << " ";
   // }

   cout << "\n";
}

int main () {
   
   char str1[] = "remove a given word", word1[] = "remove";
  
   cout << "\n"<<str1;

   remove_word (str1, word1);
  

   cout << "\n"<<str1;


   return 0;
}
