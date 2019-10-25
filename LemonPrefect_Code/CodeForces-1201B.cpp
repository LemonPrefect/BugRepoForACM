#include <cstdio>
#include <cstdlib>
int main() {
	__int64 sumWithoutMax = 0;
	__int64 sum = 0;
	__int64 numMax = 0;
	int i, j;
	__int64* numArray;
	int numInLines = 0;
	scanf("%d", &numInLines);
	numArray = (__int64*)calloc(numInLines, sizeof(__int64));
	for (i = 0; i < numInLines; i++) {
		scanf("%I64d", &numArray[i]);
		if (numArray[i] > numMax) {
			numMax = numArray[i];
		}
		sum += numArray[i];
	}
	if (sum % 2 != 0) {
		printf("NO\n");
		return 0;
	}
	else {
		sumWithoutMax = sum - numMax;
		if (sumWithoutMax < numMax - 1) {
			printf("NO\n");
		}
		else {
			printf("YES\n");
		}
	}
	free(numArray);
	return 0;

}