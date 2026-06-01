#include <stdio.h>

int main(void) {
    char arr[10]; 
    char *p, *q;
    char maxChar;
    int maxCount=0;
    
    for(p=arr ; p<arr+10 ; p++) {
        scanf(" %c", p);
    } // 배열 이름(arr)을 시작 주소로 사용하여, 포인터를 이동시키며 문자 10개를 저장한다.

    // 여기서 p는 빈도수를 확인할 기준 문자를 가리킨다. 
    for(p=arr ; p<arr+10 ; p++) {
        int count=0;
        
        for(q=arr ; q<arr+10 ; q++) {
            if (*p==*q) count++;
        } //q를 통해 배열 전체를 다시 탐색하며 현재 문자(*p)가 나타난 횟수를 계산한다.
        
        if (count>maxCount) {
            maxCount = count ; 
            maxChar = *p ; 
        } // 빈도수가 같으면 먼저 나온 문자를 출력해야 하므로, count가 maxCount보다 큰 경우에만 갱신한다. 
    }
    printf("%c %d\n", maxChar, maxCount);
    
    return 0 ;
}
