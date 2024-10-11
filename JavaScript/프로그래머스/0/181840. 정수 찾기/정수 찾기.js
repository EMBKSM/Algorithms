function solution(num_list, n) {
    let i =0;
    while(num_list[i] !=null){
        if(num_list[i++] === n){
            return 1;
        }
    }
    return 0;
}