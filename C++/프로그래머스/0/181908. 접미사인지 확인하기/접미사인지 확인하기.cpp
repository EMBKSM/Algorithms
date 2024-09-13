#include <string>

using namespace std;

int solution(string my_string, string is_suffix) {
    int check;
    
    if(my_string.size() >= is_suffix.size()) {
        for(int i = 0; i < my_string.size(); ++i) {
            for(int j = 0; j < is_suffix.size(); ++j) {
                if(my_string[i + j] == is_suffix[j] && my_string.size() - i == is_suffix.size()) {
                    check = 1;
                    continue;
                }
                else {
                    check = 0;
                    break;
                }
            }
            if(check == 1) return 1;
        }
    }
    return 0;
}