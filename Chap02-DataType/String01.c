#include <stdio.h>

int main(void)
{
    char c1 = 'A', ch2 = 'B', ch3 = 'C';
    char szData[4] = {'A', 'B', 'C'};
    char szNewData[4] = {"ABC"};
    printf("%s\n", szData);
    printf("%s\n", szNewData);
    // Array에 명시된 값이 없으면 0으로 초기화
    printf("%d\n", szData[3]);
    return 0;    
}
