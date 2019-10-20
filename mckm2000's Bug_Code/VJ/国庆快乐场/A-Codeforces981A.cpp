#include <iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main() {
	int n, len, result, i;
	char str[60], str1[60], str2[60];//数据给定了范围50不过建议开大点以防玄学
	while (scanf("%s",&str) != EOF) {
		memset(str1, 0, sizeof(str1));//初始化数组
		memset(str2, 0, sizeof(str2));//初始化数组
		len = strlen(str);//获取str长度
		result = 0;//清零
		for (i = 1; i <= len; i++) {//从第一位开始判断
			strncpy(str1, str, i);//把str中前i位元素赋值到str1中	
			strcpy(str2, str1);//把str1复制到str2
			if (strcmp(str1, strrev(str2)) != 0)result = i;//当str1与他反转后不一样则把长度赋值到result
		}
		printf("%d", result);
	}
	return 0;
}   