#include <iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main() {
	int n, len, result, i;
	char str[60], str1[60], str2[60];//���ݸ����˷�Χ50�������鿪����Է���ѧ
	while (scanf("%s",&str) != EOF) {
		memset(str1, 0, sizeof(str1));//��ʼ������
		memset(str2, 0, sizeof(str2));//��ʼ������
		len = strlen(str);//��ȡstr����
		result = 0;//����
		for (i = 1; i <= len; i++) {//�ӵ�һλ��ʼ�ж�
			strncpy(str1, str, i);//��str��ǰiλԪ�ظ�ֵ��str1��	
			strcpy(str2, str1);//��str1���Ƶ�str2
			if (strcmp(str1, strrev(str2)) != 0)result = i;//��str1������ת��һ����ѳ��ȸ�ֵ��result
		}
		printf("%d", result);
	}
	return 0;
}   