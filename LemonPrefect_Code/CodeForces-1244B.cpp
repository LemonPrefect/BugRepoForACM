#include <cstdio>
#include <algorithm>
int main() {
	int leftToRightMost = 0;
	int rightToLeftMost = 0;
	int leftLift = -1;
	int rightLift = -1;
	int timesToRun = 0;
	int numInLines = 0;
	char* rooms;
	int i, j;
	scanf("%d", &timesToRun);
	for (i = 0; i < timesToRun; i++) {
		leftLift = -1;
		rightLift = -1;
		scanf("%d", &numInLines);
		rooms = (char*)calloc(numInLines + 2, sizeof(char));
		scanf("%s", rooms);
		for (j = 0; j < numInLines; j++) {
			if (rooms[j] == '1') {
				leftLift = j;
				break;
			}
		}
		for (j = numInLines - 1; j >= 0; j--) {
			if (rooms[j] == '1') {
				rightLift = j;
				break;
			}
		}
		if (leftLift == -1 && rightLift == -1) {
			printf("%d\n", numInLines);
		}
		else {
			leftToRightMost = rightLift + 1;
			rightToLeftMost = numInLines - leftLift;
			printf("%d\n", ((leftToRightMost > rightToLeftMost) ? leftToRightMost : rightToLeftMost) * 2);
		}
	}

}