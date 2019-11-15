#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
int main() {
	char* arrowArray;
	char* singleArrowArray;
	arrowArray = (char*)calloc(1010, sizeof(char));
	singleArrowArray = (char*)calloc(12, sizeof(char));
	while (gets(arrowArray) != NULL) {
		//<------<<<
		if (strlen(arrowArray) < 10) {
			printf("No\n"); //少于10个字符 无法形成箭矢
			continue;
		}
		while (arrowArray[0] == ' ') { //前导空格去除
			sscanf(arrowArray, " %s", arrowArray);
		}
		int flag = -1;
		strncpy(singleArrowArray, arrowArray, 10);
		if (strcmp(singleArrowArray, "<------<<<") == 0 || strcmp(singleArrowArray, ">>>------>") == 0) {
			int arrowArrayLength = strlen(arrowArray);
			for (int i = 10; i < arrowArrayLength; i++) {
				if (arrowArray[i] != ' ') {  //完整箭矢后遍历
					flag = 0;
					break;
				}
			}
			if (flag == 0) {
				printf("No\n");
			}
			else {
				printf("Yes\n");
			}
		}
		else {
			printf("No\n");
		}
	}
}
