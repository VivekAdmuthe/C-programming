#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c, d, y;

    printf("Enter four integers (separate them with spaces): ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a>b && a>c && a>d){
      if (b<c && b<d){
        y = b;
      }
      else if (c<b && c<d){
        y = c;
      }
      else if (d<b && d<c){
        y = d;
      }

      printf("Largest: %d\n", a);
      printf("Smallest: %d", y);
    }
    else if (b>a && b>c && b>d) {
      if (a<c && a<d){
        y = a;
      }
      else if(c<a && c<d){
        y = c;
      }
      else if(d<a && d<c){
        y = d;
      }

      printf("Largest: %d\n", b);
      printf("Smallest: %d", y);
    }
    else if (c>a && c>b && c>d)
    {
      if (a<b && a<d){
        y = a;
      }
      else if(b<a && b<d){
        y = b;
      }
      else if(d<a && d<b){
        y = d;
      }

      printf("Largest: %d\n", c);
      printf("Smallest: %d", y);
    }
    else if (d>a && d>b && d>c) {
      if (a<b && a<c){
        y = a;
      }
    else if(b<a && b<c){
      y = b;
    }
    else if(c<a && c<b){
      y = c;
    }

    printf("Largest: %d\n", d);
    printf("Smallest: %d", y);
  }
return 0;
}
