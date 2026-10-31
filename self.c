//Устинов Владислав ПИ1-1
#include <stdio.h>
int min_max(const int a[], int n, int *low, int *high){
    if (n<=0) return 0;
    
    int min = a[0];
    int max = a[0];
    
    for (int i = 1; i < n; i++) {
        if (a[i]<min)
            min = a[i];
        if (a[i]>max)
            max = a[i];
    }
    
    *low = min;
    *high = max;
    
    return 1;
}
int main(Void){
    int a[] = {55, -2, 7};
    int low = 99;
    int high = 99;
    
    if (min_max(a, 3, &low, &high))
        printf("Success: low=%d high=%d\n", low, high);
    low = 99;
    high = 99;
    
    if (min_max(a, 1, &low, &high))
        printf("Success: low=%d high=%d\n", low, high);
    low = 99;
    high = 99;
    
    if (min_max(a, 0, &low, &high))
        printf("Success: low=%d high=%d\n", low, high);
    else
        printf("Failure: low=%d high=%d\n", low, high);
    
    return 0;
}


