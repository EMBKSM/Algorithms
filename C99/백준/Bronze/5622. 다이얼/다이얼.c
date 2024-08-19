#include <stdio.h>
#include <string.h>

int main(){
    char word[16];
    int sum = 0;
    scanf("%s", word);
    for(int i = 0;i<strlen(word);i++){
        switch(word[i]){
            case 'A':
            case 'B':
            case 'C':
                sum +=3;
                break;
            case 'D':
            case 'E':
            case 'F':
                sum += 4;
                break;
            case 'G':
            case 'H':
            case 'I':
                sum += 5;
                break;
            case 'J':
            case 'K':
            case 'L':
                sum += 6;
                break;
            case 'M':
            case 'N':
            case 'O':
                sum += 7;
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                sum += 8;
                break;
            case 'T':
            case 'U':
            case 'V':
                sum += 9;
                break;
            default:
                sum += 10;
                break;
        }
    }
    printf("%d", sum);
}