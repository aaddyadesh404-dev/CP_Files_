#include <stdio.h>
#include <stdlib.h>
void go(int n, int arr[], int k, int start, int count, int og)
{
    //Base
    if(count == og-1)
    {
        return;
    }
    if(start>n)
    {
        start = 1;
    }
    static int counter = 0;
    for(int i = start; i<=n; i++)
    {
        counter++;
        if(counter%k==0)
        {
            start = i;
            for(int j = i; j<n; j++)
            {
                arr[j] = arr[j+1];
                
            }
            n--;
            count++;
            break;
        }
        if(i==n)
        {
            go(n, arr, k, 1, count, og);
            return;
        }
    }
    go(n, arr, k, start, count,og);
    return;

}
int main(void)
{
    int n;
    int k;
    scanf("%d %d", &n, &k);
    int* arr = (int *)malloc((n+2)*sizeof(int));
    for(int i = 1; i<=n; i++)
    {
        *(arr+i) = i;
    }
    go(n, arr, k, 1, 0, n);
    printf("%d Survives ", arr[1]);
    
}