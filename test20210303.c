#define _CRT_SECURE_NO_WORINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

my_strstr(const char*p1,const char*p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* s1 = p1;//p1和p2要保持这个值的起始位置
	char* s2 = p2;
	char* cur = p1;
	if (*p2 == '\0')
	{
		return p1;
	}
	while (*cur !='\0')
	{
		s1 = cur;
		s2 = p2;
		
		while ((*s1!='\0')&&(*s2!='\0')&&(*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;//找到子串
		}
		cur++;
	}
	return NULL;//找不到子串
}
int main()
{
	char* p1 = "abcdef";
	char* p2 = "def";

	char* ret = my_strstr(p1, p2);
	if (ret == NULL)
	{
		printf("子串不存在\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}