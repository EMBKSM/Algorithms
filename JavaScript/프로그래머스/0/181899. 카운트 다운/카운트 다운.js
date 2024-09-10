function solution(start_num, end_num) {
    let num_list =[]
    for(let i = start_num; i >= end_num;i-- ){
        num_list.push(i);
    }
    return num_list;
}