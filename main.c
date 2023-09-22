#include<stdio.h>
#include<math.h>

int main(){
    double a, b;
    char s;

printf("Vvedite 2 chisla");
scanf("%lf %lf", &a, &b);
scanf(" %c", &s);

switch (s)
{
case 1:printf("%lf\n",a+b);
break;
case 2: printf("%lf",a-b);
break;
case 3: printf("%lf",a*b);
break;
case 4: printf("%lf",a/b);
break;
}

    return 0;
}