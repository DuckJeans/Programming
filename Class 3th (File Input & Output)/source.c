#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10000

void countCharacters(const char* name)
{
    FILE* file = fopen(name, "r");

    if (file == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return;
    }

    printf("--- 파일 내용 출력 ---\n");

    int character;
    while ((character = fgetc(file)) != EOF)
    {
        printf("%c", character);
    }
    printf("\n");

    fclose(file);
}

void load(const char* name)
{
    FILE* file = fopen(name, "r");
    if (file == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return;
    }

    int count = 0;
    int character;

    while ((character = fgetc(file)) != EOF)
    {
        printf("%c", character);
        count++;
    }

    printf("\n--------------------\n");
    printf("무효의 문자(EOF)를 만나기 전까지 센 count: %d\n", count);

    rewind(file);

    char* dynamicBuffer = (char*)malloc(count + 1);
    if (dynamicBuffer == NULL) {
        fclose(file);
        return;
    }

    size_t readCount = fread(dynamicBuffer, sizeof(char), count, file);
    dynamicBuffer[readCount] = '\0';

    printf("%s\n", dynamicBuffer);

    free(dynamicBuffer);
    fclose(file);
}

int main()
{
    FILE* file = fopen("data.txt", "w");
    if (file != NULL) {
        fputs("asdasd", file);
        fclose(file);
    }

    load("resources/pokemon.txt");

    return 0;
}