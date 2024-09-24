function solution(num_list) {
    let JJAC='', HOLE = '';
    for(let i = 0; i < num_list.length;i++){
        (num_list[i]%2==0)? JJAC += num_list[i]: HOLE += num_list[i];
    }
    return parseInt(JJAC) + parseInt(HOLE);
}