function solution(t, p) {
    let t_len = t.length;
    let p_len = p.length;
    let answer = 0;
    for(let i = 0; i<=t_len-p_len+1;i++){
        if(i+p_len > t_len){
            break;
        }
        if(t.slice(i,i+p_len) <= p){
            answer += 1;
        }
    }
    return answer;
}