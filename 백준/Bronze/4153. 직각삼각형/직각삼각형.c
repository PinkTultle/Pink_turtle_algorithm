#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int side1, side2, side3, L, S1, S2;

	while (1){
		scanf("%d %d %d", &side1, &side2, &side3);

		if ( (side1 == 0 && side2 == 0 && side3 == 0) )
			return 0;

		L = (side1 < side2) ? ((side3<side2) ? side2 : side3) : ((side3 < side1) ? side1 : side3);
		S1 = (L == side3) ? side1 : (L == side1) ? (side3) : (side1);
		S2 = (L == side3) ? side2 : (L == side1) ? (side2) : (side3);

		if ((L * L) == (S1 * S1) + (S2 * S2)) {
			printf("right\n");
		}
		else {
			printf("wrong\n");
		}
	}

	return 0;
}

