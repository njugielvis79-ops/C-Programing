#include <stdio.h>

int main()
{
  char title[100];
  FILE *fp;

  fp = fopen("borrowed_books.txt", "a");

  if (fp == NULL)
  {
    printf("Error opening file\n");
    return 1;
  }

  printf("Enter book title: ");
  scanf(" %[^\n]", title);

  fprintf(fp, "%s\n", title);
  fclose(fp);

  printf("Title stored successfully\n");

  return 0;
}