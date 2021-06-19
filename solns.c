/* Enter your solutions in this file */
#include <stdio.h>
float average(int A[], int b)
{
    int c = 0;
    int d = 0;
    for(int i = 0; i < b; i++)
    {
        c = c + A[i];
    }
    d = c/b;
    return d;
}
int max(int A[],int b)
{
    int i;
    for (int i = 1; i < b; i++) {
        if (A[0] < A[i]) {
          A[0] = A[i];
        }
      }
    return A[0];
}
int min(int A[],int b)
{
    int i;
    for (int i = 1; i < b; i++) {
        if (A[0] > A[i]) {
          A[0] = A[i];
        }
      }
    return A[0];
}
int factors(int n, int a[])
{
    int i;
    int j = 0;
    int x = n;
    for(i = 2;i <= n;i++)
    {
        if(n%i == 0)
        {
            a[j] = i;
            n = n/i;
            i = 1;
            j++;
        }
    }
    return j;
}
int mode(int a[] , int n){
    int i;
    int j;
    int max = 0;
    int value = 0;
    for(i=0 ; i<n; i++)
    {
        int count = 0;
        for(j=0; j<n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
    }
    if(count > max)
    {
        max = count;
        value = a[i];
    }
    }
    return value;
 }
