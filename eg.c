#include <stdio.h>
struct addrress
{
   char name[50];
   char street[100];
   char city[50];
   char state[20];
   int pin;
};

main()
{
    printf("%d",sizeof(struct addrress));
}
