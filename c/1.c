/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int num1, num2;
    scanf("%d", &num1);
    num2 = (num1/100) + ((num1%100)/10)*10 + (num1%10)*100;
    printf("%d", num2);
    return 0;
}