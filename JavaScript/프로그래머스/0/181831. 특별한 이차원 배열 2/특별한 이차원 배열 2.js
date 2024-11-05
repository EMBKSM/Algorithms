function solution(arr) {
    const SIZE = arr.length;

    for(let i=0; i<SIZE; i++) {
        for(let j=i+1; j<SIZE; j++) {
            if(arr[i][j] !== arr[j][i]) return 0;
        }
    }

    return 1;
}