#include<stdio.h>
#include<dlfcn.h>
//#include "simpleAdd.h"
int main(void)
{
    int i = 2, j = 3;
    int (*addFunc)(int);
    void* lib = dlopen("./simpleAdd.so", RTLD_LAZY);
    addFunc = dlsym(lib, "add") ;
    //addFunc(i,j);
    printf("The sum is : %d", addFunc(i));

    return 0;

}