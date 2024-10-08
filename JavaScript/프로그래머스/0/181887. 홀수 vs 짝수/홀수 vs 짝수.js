function solution(num_list) {
    let hol=0;
    let JJAC = 0;
    for(let i = 0; i < num_list.length;i++){
        if(i %2 == 0){
            JJAC+= num_list[i];
        }
        else{
            hol+= num_list[i];
        }
    }
    return (JJAC>hol) ? JJAC: hol;
}