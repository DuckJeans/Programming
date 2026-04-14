#include <stdio.h>

void shuffle(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int j = rand() % size;

		int temp;

		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}
}

int main()
{
#pragma region 의사 난수
	// 0 ~ 32767 사이의 난수 값을 반환하는 함수입니다.

	// UTC 기준으로 1970년 1월 1일 0시 0분 0초부터 경과된
	// 시간을 초(sec)로 반환하는 함수입니다.
	
	// srand : rand()가 사용할 초기값(seed)을 설정하는 함수

	//srand(time(NULL));
	//
	//int random = rand() % 10 + 1;
	//
	//printf("%d", random);
#pragma endregion

#pragma region 셔플 함수

	srand(time(NULL));

	int array[] = {1,2,3,4,5,6,7,8,9,10};
	int size = sizeof(array) / sizeof(array[0]);

	shuffle(array, size);

	for (int a = 0; a < size; a++)
	{
		printf("%d\n", array[a]);
	}

#pragma endregion


	return 0;
}