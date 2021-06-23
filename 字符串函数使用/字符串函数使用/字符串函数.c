#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>



////memmove 处理内存重叠部分
//void* my_memmove(void* dest,const void* src, size_t num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	void* ret = dest;
//	char* p1 = ((char*)src + num);
//	char* p2 = ((char*)dest + num);
//	if ((((char*)src + num) > (char *)dest) && dest>src)
//	{
//		while (num--)
//		{
//			//写法1：
//			//*(p2-1) = *(p1-1);
//			//--p1;
//			//--p2;
//			//写法2：
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	my_memmove(arr + 2, arr, 16);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


////memcpy 只要处理不重叠的内存部分
//void* my_memcpy(void* dest,const void* src, size_t num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
// }
////srtstr
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (cur != '\0')
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1 == *s2)&&(*s1 != '\0')&&(*s2 != '\0'))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abdbbbcbcdefg";
//	char arr2[] = "bbc";
//	char* ret=my_strstr(arr1,arr2);
//	if (ret == NULL)
//		printf("子字符串不存在");
//	else
//		printf("%s\n", ret);
//	return 0;
//}


////strncat
//char* my_strncat(char* dest, const char* src, int k)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (k && (*src != '\0'))
//	{
//		*dest = *src;
//		k--;
//		dest++;
//		src++;
//	};
//	*dest = '\0';
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	int k = 3;
//	my_strncat(arr1, arr2, k);
//	printf("%s\n", arr1);
//	return 0;
//}

//strncpy
//char* my_strncpy(char* dest,const char* src, int k)
//{
//	assert(dest !=0);
//	assert(src != 0);
//	char* ret = dest;
//	while ( k && (*dest++ = *src++))
//	{
//		k--;
//	}
//	if (k)
//	{
//		while (k)
//		{
//			*dest++ = '\0';
//			k--;
//		}
//	}
//	return (ret);
//}
//
//int main()
//{
//	char p1[] = "abcdef";
//	char p2[] = "bit";
//	int k = 6;
//	my_strncpy(p1, p2,k);
//	printf("%s\n", p1);
//	return 0;
//}

////strcmp
//
//int my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 < *str2)
//		return -1;
//	else
//		return 1;
//	//return (*str1-*str2);
//}
//
//int main()
//{
//	char *p1 = "abcdef";
//	char* p2 = "sqwer";
//	int ret=my_strcmp(p1, p2);
//	if (ret == 1)
//	{
//		printf("大于");
//	}
//	else if (ret == 0)
//	{
//		printf("等于");
//	}
//	else
//		printf("小于");
//	return 0;
//}

////strcat
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	//int len = strlen(dest);
//	//while (*(len + dest++) = *src++)
//	//{
//	//	;
//	//}
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n",arr1);
//	return 0;
//}

////strcpy
////char* strcpy(const char* dest,const char* src)
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//strlen
////size_t  unsigned int
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}

////递归实现
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//		return 1 + my_strlen(str + 1);
//}
//
//int main()
//{
//	char arr[] = { "abcdef" };
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	if (strlen("abc") - strlen("abcdef") > 0)//strlen 返回值是size_t
//	{
//		printf("haha");
//	}
//	else
//	{
//		printf("hehe");
//	}
//	return 0;
//}

