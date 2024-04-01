#include <unistd.h>
#include <iostream>


using namespace std;


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
