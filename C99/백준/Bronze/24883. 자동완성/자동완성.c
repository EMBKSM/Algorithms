#include <stdio.h>

int main() {
	char alphabat[2];
	scanf("%s", alphabat);
	(alphabat[0] == 'N' || alphabat[0] == 'n') ? printf("Naver D2") : printf("Naver Whale");
}