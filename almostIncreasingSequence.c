// Arrays are already defined with this interface:
// typedef struct arr_##name {
//   int size;
//   type *arr;
// } arr_##name;
//
// arr_##name alloc_arr_##name(int len) {
//   arr_##name a = {len, len > 0 ? malloc(sizeof(type) * len) : NULL};
//   return a;
// }
//
//
bool solution(arr_integer sequence) {
    int remove =0;
    for(int i=0; i<sequence.size-2;i++)
    {
        int first = sequence.arr[i];
        int next = sequence.arr[i+1];
        int last  = sequence.arr[i+2];
       
        if(first>=next){
            remove++;
            sequence.arr[i]=next-1;
        }
        if(next>=last){
            
            remove++;{
                if(first==last){
                    sequence.arr[i+2]=next+1;
                }else{
                    sequence.arr[i+1] = first;
                }
            }
        }
            
        }

    if(remove>1){
        return false;
    }else{
        return true;
    }
    
}

