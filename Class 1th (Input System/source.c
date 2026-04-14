#include <stdio.h>
#include <windows.h>

#define SIZE 10

int main()
{
#pragma region 포인터 배열

	//const char* sentence[SIZE] = {NULL};
	//
	//sentence[0] = "Hello!";
	//sentence[1] = "Today is Monday.";
	//sentence[2] = "Nice to meet you!";
	//sentence[3] = "오늘 날씨가 좋네요.";
	//sentence[4] = "성함이 어떻게 되세요?";
	//sentence[5] = "이 물건은 어디에 쓰는 것일까?";
	//sentence[6] = "ABCD";
	//sentence[7] = "EFGHI";
	//sentence[8] = "JKLNM";
	//sentence[9] = "OPQRS";
	//
	//for (int i = 0; i < SIZE; i++)
	//{
	//	printf("%s\n", sentence[i]);
	//}

	// 0x0000 : 이전에 누른 적이 없고 호출 시점에도 눌려있지 않은 상태

	// 0x0001 : 이전에 누른 적이 있고 호출 시점에는 눌려있지 않은 상태

	// 0x8000 : 이전에 누른적이 없고 호출 시점에는 눌려있는 상태

	// 0x8001 : 이전에 누른 적이 있고 호출 시점에도 눌려있는 상태

	const char* sentence[SIZE] = { NULL };
	const char* name[2] = { NULL };

	name[0] = "steve";
	name[1] = "alex";

	sentence[0] = "Hello!";
	sentence[1] = "Nice to meet you!";
	sentence[2] = "안녕하세요!";
	sentence[3] = "처음 뵙겠습니다!";
	sentence[4] = "What's your name?";
	sentence[5] = "My name is 'Alex'.";
	sentence[6] = "성함이 어떻게 되시나요?";
	sentence[7] = "제 이름은 '알렉스'입니다.";
	sentence[8] = "Test";
	sentence[9] = "Sentence";

	int next = 0;
	int namechange = 0;

	while (1)
	{
		if (GetAsyncKeyState(VK_SPACE) & 0x0001)
		{
			printf("-[%s]\n", name[namechange]);
			printf("%s\n", sentence[next]);
			next++;
			namechange++;
			if (namechange == 2)
			{
				namechange = 0;
			}
		}
	}

#pragma endregion



	return 0;
}