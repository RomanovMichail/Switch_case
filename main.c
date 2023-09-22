#include<stdio.h>
#include<math.h>

int main(){
    int a, b;
    char s;

printf("Vvedite 2 chisla");
scanf("%d %d", &a, &b);
scanf(" %c", &s);

switch (s)
{
case '+':printf("%d\n", a+b);
break;
case '-': printf("%d", a-b);
break;
case '*': printf("%d", a*b);
break;
case '/': printf("%d", a/b);
break;
}

    return 0;
}