#include <stdio.h>

int main(void)//기본적인 우선순위 : 단항 연산자 > 이항 연산자(산술 > 관계 > 논리) > 삼항 연산자 > 대입 > 쉼표(콤마)
{
	int x = 0, y = 0, result; // 기본적으로 계산은 우선순위를 우선시하되 우선순위가 같다면 왼쪽에서 오른쪽으로, 할당은 오른쪽에서 왼쪽으로 진행한다.

	printf("%d\n", result = 2 > 3 || 6 > 7); // 우선순위 : 관계 > 논리 > 대입
	printf("%d\n", result = 2 || 3 && 3 > 2); // 우선순위 : 관계 > 논리(AND) > 논리(OR) > 대입
	printf("%d\n", result = x = y = 1); // 결합 순서 : 오른쪽에서 왼쪽으로, y -> x -> result(마지막)
	printf("%d\n", result = - ++x + y--); // 우선순위 : y--(후위 증감 연산자) -> x++(전위 증감 연산자) -> 음수부호(왼쪽부터) -> 양수부호(오른쪽으로)

	return 0;
}