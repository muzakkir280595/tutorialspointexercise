#include <stdio.h>

size_t my_strlen(const char *s)
{
   char *p = s;

   while (*p)
      ++p;

   return (p - s);
}

int main(void)
{
   int i;
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point",
      "Kingz"
      "Laila"
      "Lailu"
      "Alpha"
      "Nona"
      "onanaz"
   };

   for (i = 0; i < 5; ++i)
      
   printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));

   return 0;
}
