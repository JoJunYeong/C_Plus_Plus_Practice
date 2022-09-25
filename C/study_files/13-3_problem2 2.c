/*
문제 2
유클리도 호제법을 이용해서 N 개의 수들의 최대공약수를 구하는 함수를 만들어보세요. 
유클리드 호제법이 무엇인지 모르신다면, 
인터넷 검색을 활용하는 것을 추천합니다. (난이도 : 中上)
*/

/*
유클리드 호제법

개념
유클리드 호제법은 2개의 자연수 또는 정식의 최대공약수를 구하는 알고리즘의 하나이다.
호제법이란 말은 두 수가 서로 상대방 수를 나누어서 결국 원하는 수를 얻는 알고리즘을 나타낸다.
2개의 자연수(또는 정식) a, b에 대해서 a를 b로 나눈 나머지를 r이라 하면(단, a>b), 
a와 b의 최대공약수는 b와 r의 최대공약수와 같다. 
이 성질에 따라, b를 r로 나눈 나머지 r’를 구하고, 
다시 r을 r’로 나눈 나머지를 구하는 과정을 반복하여 나머지가 0이 되었을 때 나누는 수가 
a와 b의 최대공약수이다. 이는 명시적으로 기술된 가장 오래된 알고리즘으로서도 알려져 있으며, 
기원전 300년경에 쓰인 유클리드의 《원론》 제7권, 명제 1부터 3까지에 해당한다.

예시
1071과 1029의 최대공약수를 구하면,

1071은 1029로 나누어떨어지지 않기 때문에, 1071을 1029로 나눈 나머지를 구한다. => 42
1029는 42로 나누어떨어지지 않기 때문에, 1029를 42로 나눈 나머지를 구한다. => 21
42는 21로 나누어떨어진다.
따라서, 최대공약수는 21이다.

*/
#include <stdio.h>

int Euclidean_algorithm(int N, int n);

int main()
{
	int N, n;
	int greatest_common_factor = 0;
	printf("N과 n의 최대공약수를 구하시오.\nN과 n값 입력 : ");
	
	scanf("%d %d", &N, &n);

	greatest_common_factor = Euclidean_algorithm(N, n);

	printf("최대공약수 : %d\n", greatest_common_factor);

	return 0;
}

int Euclidean_algorithm(int N, int n)
{
	int num = 1;

	while (1)
	{
		num = N % n;
		if (num == 0)
			break;
		N = n;
		n = num;
	}

	return n;
}