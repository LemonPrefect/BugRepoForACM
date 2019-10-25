#include <cstdio>
#include <cstdlib>
int main() {
	int timesToRun = 0;
	__int64 numA = 0, numB = 0;
	scanf("%d", &timesToRun);
	for (int i = 0; i < timesToRun; i++) {
		scanf("%I64d %I64d", &numA, &numB);
		__int64 numC = numA - numB;
		if (numC >= 2) {//because any even number >2 is sum of two prime number while odd number >3 minus 3 cloud be a even number
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}