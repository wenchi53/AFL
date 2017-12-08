#include <stdio.h>
int main()
{
     // printf() displays the string inside quotation
   FILE *fp;

   fp = fopen("./o/message/message.txt", "w+");
   fprintf(fp, "%d",2);
   fclose(fp);
  
   return 0;
}
