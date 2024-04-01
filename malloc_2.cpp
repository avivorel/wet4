#include <unistd.h>



struct MallocMetadata {
    size_t size;
    bool is_free;
    MallocMetadata* next;
    MallocMetadata* prev;
};


void* smalloc(size_t size){

    if (size == 0 || size > 100000000){
        return nullptr;
    }
    void* sbrkResult = sbrk((intptr_t)size);

    if(sbrkResult == (void*)(-1)){
        return nullptr;
    }
    else{
        return sbrkResult;
    }
}
