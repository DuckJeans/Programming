#include <stdio.h>

int main()
{
#pragma region 파일 입출력

	// 첫 번째 매개 변수 (파일의 이름)
	// 두 번째 매개 변수 (파일의 입출력 모드)

	FILE* file = fopen("data.txt", "w");

	fputs("asdasd",file);

	fclose(file);
#pragma endregion


	return 0;
}