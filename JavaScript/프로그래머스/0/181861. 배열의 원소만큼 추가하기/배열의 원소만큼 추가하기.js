function solution(arr) {
    var answer = [];
    for(let j = 0; j < arr.length; j++){
        for(let i = 0; i < arr[j];i++){
            answer.push(arr[j]);
        }
    }
    return answer;
}