function solution(num_list) {
    let answer = num_list;
    answer.sort(function(a,b){
        return a-b;
    });
    return answer.slice(5);
}