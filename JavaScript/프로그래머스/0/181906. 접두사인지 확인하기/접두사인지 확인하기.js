function solution(my_string, is_prefix) {
    let answer = 0;
    let len = 0;
    for(let i = 0; i<((my_string.length> is_prefix.length) ? my_string.length:is_prefix.length);i++){
        if(!(my_string[i] == is_prefix[i] || is_prefix[i]==null)){
            answer = 0;
            break;
        }
        else{
            answer = 1;
        }
    }
    return answer
}