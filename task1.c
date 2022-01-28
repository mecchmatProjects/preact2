#include <stdio.h>

void print_process_parents(pid_t pid) {

  pid_t current = pid;

 while (current != 1 ) {
  
  printf("%d\n",current);
  current = get_parent_pid(current)

 }

 printf("%d (init) \n",current);
}

int main()
{
  //char name[100];
  //printf("What is your name? __");
  //gets(name);
  
  print_process_parents(123);
  
  return 0;// printf("Hello %s\n",name);
}
