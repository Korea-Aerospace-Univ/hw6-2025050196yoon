#include <stdio.h>

int main(void) {
    int n; 
    int arr1[20]={}; 
    int arr2[20]={};
    int *p;
    int *q;
    
    scanf("%d", &n);
    
    for(p=arr1 ; p<arr1+n ; p++) {
        scanf("%d", &p);
    }
    
    for(p=arr2 ; p<arr2+n ; p++) {
        scanf("%d", &p);
    }
    
    p = arr1
    q = arr2 + N - 1 ; 
    
    while (p < arr1 + N) {
        printf(" %d", *p + *q);
        p++;
        q--;
    }

    return 0;
    
}
