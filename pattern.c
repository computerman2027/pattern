#include<stdio.h>

void pattern1(int h)
{
    if(h<1)
    {
        printf("INVALID");
        return;
    }
    int i,j;
    for(i=1;i<=h;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern2(int h)
{
    if(h<1)
    {
        printf("INVALID");
        return;
    }
    int i,j,c=1;
    for(i=1;i<=h;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",c);
            c++;
        }
        printf("\n");
    }
}

void pattern3(int h)
{
    if(h<1)
    {
        printf("INVALID");
        return;
    }
    int i,j;
    for(i=1;i<=h;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}

void pattern4(int h)
{
    if(h<1)
    {
        printf("INVALID");
        return;
    }
    int i,j,sp;
    for(i=1;i<=h;i++)
    {
        for(sp=h-1;sp>=i;sp--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void pattern5(int h)
{
    if(h<1)
    {
        printf("INVALID");
        return;
    }
    int i,j,sp;
    for(i=1;i<=h;i++)
    {
        for(sp=h-1;sp>=i;sp--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern6(int h)
{
    if(h<1)
    {
        printf("INVALID");
        return;
    }
    int i,j,sp;
    for(i=1;i<=h;i++)
    {
        for(sp=h-1;sp>=i;sp--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
void pattern7(int h)
{
    if(h<1)
    {
        printf("INVALID");
        return;
    }
    int i,j,sp;
    for(i=1;i<=h;i++)
    {
        for(sp=h-1;sp>=i;sp--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
void pattern8(int h)
{
  if(h<1)
  {
    printf("INVALID");
    return;
  }
  int i,j,sp;
  for(i=1;i<=h;i++)
    {
      for(j=i;j>=1;j--)
        {
          printf("%d",j);
        }
      printf("\n");
    }
}

void pattern9(int h)
{
  if(h<1)
  {
    printf("INVALID");
    return;
  }
  int i,j,sp;
  for(i=1;i<=h;i++)
    {
      for(sp=h-1;sp>=i;sp--)
        {
            printf(" ");
        }
      for(j=i;j>=1;j--)
        {
          printf("%d",j);
        }
      printf("\n");
    }
}

void pattern10(int h)
{
  if(h<1)
  {
    printf("INVALID");
    return;
  }
  int i,j,sp;
  for(i=1;i<=h;i++)
    {
      for(sp=h-1;sp>=i;sp--)
        {
            printf(" ");
        }
      for(j=i;j>=1;j--)
        {
          printf("%d ",j);
        }
      printf("\n");
    }
}

void pattern11(int h)
{
    //inverted floyds triangle
    if(h<1)
    {
        printf("INVALID HEIGHT");
        return;
    }
    int count=(h*(h+1))/2;
    int i,j;
    for(i=h;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",count);
            count--;
        }
        printf("\n");
    }
}

void pattern12(int h)
{
    if(h<1)
    {
        printf("INVALID INPUT");
        return;
    }
    int count=(h*(h+1))/2,i,j,sp;
    for(i=h;i>=1;i--)
    {
        for(sp=h;sp>i;sp--)
        {
            printf(" \t");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d\t",count);
            count--;
        }
        printf("\n");
    }
}

void pattern13(int h)
{
    if(h<1)
    {
        printf("INVALID INPUT");
        return;
    }
    int count=(h*(h+1))/2,i,j,sp;
    for(i=h;i>=1;i--)
    {
        for(sp=h;sp>i;sp--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",count);
            count--;
        }
        printf("\n");
    }
}

void pattern14(int h)
{
    //pascals triangle without space
    if(h<1)
    {
        printf("INVALID HEIGHT");
        return;
    }
    int i,j,term;
    for(i=1;i<=h;i++)
    {
        term=1;
        for(j=1;j<=i;j++)
        {
            printf("%d\t",term);
            term=term*(i-j)/j;
        }
        printf("\n");
    }
}

void pattern15(int h)
{
    //pascals triangle without space
    if(h<1)
    {
        printf("INVALID HEIGHT");
        return;
    }
    int i,j,sp,term;
    for(i=1;i<=h;i++)
    {
        term=1;
        for(sp=h;sp>i;sp--)
        {
            printf(" \t");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d\t",term);
            term=term*(i-j)/j;
        }
        printf("\n");
    }
}
void pattern16(int h)
{
    //pascals triangle 
    if(h<1)
    {
        printf("INVALID HEIGHT");
        return;
    }
    int i,j,sp,term;
    for(i=1;i<=h;i++)
    {
        term=1;
        for(sp=h;sp>i;sp--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",term);
            term=term*(i-j)/j;
        }
        printf("\n");
    }
}

void pattern17(int h)
{
    if(h<1)
    {
        printf("INVALID HEIGHT");
        return;
    }
    int i,j,term,sp;
    for(i=h;i>=1;i--)
    {
        term =1;
        for(sp=h;sp>i;sp--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",term);
            term=term*(i-j)/j;
        }
        printf("\n");
    }
}
int main()
{
    printf("PATTERN 1:\n");
    pattern1(5);
    printf("PATTERN 2:\n");
    pattern2(4);
    printf("PATTERN 3:\n");
    pattern3(4);
    printf("PATTERN 4:\n");
    pattern4(4);
    printf("PATTERN 5:\n");
    pattern5(6);
    printf("PATTERN 6:\n");
    pattern6(6);
    printf("PATTERN 7:\n");
    pattern7(6);
    printf("PATTERN 8:\n");
    pattern8(6);
    printf("PATTERN 9:\n");
    pattern9(6);
    printf("PATTERN 10:\n");
    pattern10(6);
    printf("PATTERN 11:\n");
    pattern11(5);
    printf("PATTERN 12:\n");
    pattern12(5);
    printf("PATTERN 13:\n");
    pattern13(5);
    printf("PATTERN 14:\n");
    pattern14(10);
    printf("PATTERN 15:\n");
    pattern15(10);
    printf("PATTERN 16:\n");
    pattern16(10);
    printf("PATTERN 17:\n");
    pattern17(10);
    return 0;
}