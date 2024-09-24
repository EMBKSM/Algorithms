function solution(n, control) {
    answer = n;
    for(let i = 0; control[i] != null; i++){
        switch(control[i]){
            case "w":
                n++;
                break;
            case "s":
                n--;
                break;
            case "d":
                n +=10;
                break;
            case "a":
                n -= 10;
        }
    }
    return n;
}