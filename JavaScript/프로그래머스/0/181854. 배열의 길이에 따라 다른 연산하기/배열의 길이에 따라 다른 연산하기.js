function fors(arr,n, a){
    let answer = arr
    for(let i = a; i<arr.length;i+=2)
        answer[i] +=n;
    return answer;
}

function solution(arr, n) {
    let answer = arr;
    return (arr.length%2 == 0) ?  fors(arr,n,1): fors(arr,n,0);
}



