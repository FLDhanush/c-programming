#include <stdio.h>  
int main()  
{  
    int a, bn, dn = 0, base = 1, rem,n,on=0,j=1;  
    printf("1 for BINARY TO DECIMAL\n");
    printf("2 for BINARY TO ocatl\n");
    printf("enter the choice= ");
    scanf("%d",&n);
    printf (" Enter a binary number with the combination of 0s and 1s \n");  
    scanf (" %d", &a);
    if(n==1){
    bn = a;
    while ( a > 0)  
    {  
        rem = a % 10;  
        dn = dn + rem * base;  
        a = a / 10;
        base = base * 2;  
    }  
    printf (" \n The decimal number is %d \t", dn);}
    if(n==2)
    {
        while (a != 0)
    {
        rem = a % 10;
        on = on + rem * j;
        j = j * 2;
        a = a / 10;
    }
    printf("Equivalent octal value: %lo", on);
    }
} #include <stdio.h>
int main() {
  int n;
  double arr[100];
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }
  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }
  printf("Largest element = %.2lf", arr[0]);
  return 0;
}