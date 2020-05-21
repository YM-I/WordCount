#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[])
{
	FILE* file;
	int CharNum = 0, WordNum = 0;
	char ch;
	file = fopen(argv[2], "r");
	if (file == NULL)
	{
		printf("打开文件失败！\n");
		return 0;
	}
	if (strcmp(argv[1], "-c") == 0)
	{
		while ((ch = fgetc(file)) != EOF)
		{
			CharNum++;
		}
		printf("字符数：%d\n", CharNum);
	}
	if (strcmp(argv[1], "-w") == 0)
	{
		while ((ch = fgetc(file)) != EOF)
		{
			if (ch == ' ' || ch == ',' || ch == '.')
			{
				WordNum++;
			}
		}
		printf("单词数：%d\n", WordNum);
	}
	fclose(file);

}