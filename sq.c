#include <stdio.h>
void square(int x);

int main(){
    square(3);
    square(4);
    return 0;
}

void square(int x){
    int square=x*x;
    printf("%d \n", square);


}