#include"library_management.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int menu()
{
/*struct library l[100];
char publisher[30],bk_nm[30];
int i,j, keepcount;
i=j=keepcount = 0;*/
int j;

printf("\n\n## Library Management ##\n");

 while(j!=6){
      printf("\n1. Add book information\n");
      printf("2.Display book information\n");
      printf("3. no of books in the library\n");
      printf("4.List of Authors\n");
      printf("5. Exit");

printf ("\n\nEnter one of the above : ");
scanf("%d",&j);
 return j;
}