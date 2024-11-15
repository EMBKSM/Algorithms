function solution(x) {
    let a = String(x);
    let sum=0;
    for(let i = 0; i < a.length ; i++){
        sum+= parseInt(a[i]);
    }
    return (x%sum == 0) ? true: false;
}