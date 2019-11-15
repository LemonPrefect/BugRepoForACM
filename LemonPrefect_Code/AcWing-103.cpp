#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <set>

using namespace std;
int* numArray;
int* differenceArray;
struct pCouple {
	int left;
	int right;
};
set<pCouple> pSet;
int main() {
	int numCow = 0;
	int pCow = 0;
	int defaultHeight = 0;
	int timesToProcess = 0;
	int left = 0, right = 0;
	pCouple* couples;
	scanf("%d %d %d %d", &numCow, &pCow, &defaultHeight, &timesToProcess);
	numArray = (int*)calloc(numCow, sizeof(int));	
	differenceArray = (int*)calloc(numCow, sizeof(int));
	couples = (pCouple*)calloc(numCow, sizeof(pCouple));
	fill(numArray, numArray + numCow, defaultHeight);
	fill(differenceArray, differenceArray + numCow, 0);
	for (int i = 0; i < timesToProcess; i++) {
		scanf("%d %d", &couples[i].left, &couples[i].right);
		//printf("%d %d\n", couples[i].left, couples[i].right);
		if (pSet.count(couples[i]) != 0) {
			continue;
		}
		else {
			pSet.insert(couples[i]);
		}
	}
	

}
