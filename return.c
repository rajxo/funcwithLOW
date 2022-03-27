#include <stdio.h>


int isEven(int x){
    if( (x % 2) == 0){
        return 1;
    }
    else if( (x % 2) == 1){
        return 2;
    }
}
int main(){
    int result = isEven(11);
    printf("%d",result);
    return 0;
}