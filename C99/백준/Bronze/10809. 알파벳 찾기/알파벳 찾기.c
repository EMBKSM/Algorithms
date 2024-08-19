#include <stdio.h>
#include <string.h>

int main() {
	int num, alphabat[27] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, -1, -1, -1, -1, -1, -1, -1 };
	char word[101];
	scanf("%s", word);
	for (int i = 0; i < strlen(word); i++) {
		num = word[i] - 97;
		if (alphabat[num] == -1) {
			alphabat[num] = i;
		}
	}
	for (int i = 0; i < 26; i++)
		printf("%d ", alphabat[i]);

}