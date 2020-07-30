#include<stdio.h>
struct student
{
char c[10];
};
main()
{
struct student *s = malloc (sizeof(struct student));
s->c = "hello";
printf("%s", s->c);
}
