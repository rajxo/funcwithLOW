#include <stdio.h>

void deter(int z[]){
    int determ = z[0]*((z[4]*z[8])-(z[5]*z[7]))
    - z[1]* ( (z[3]*z[8]) - (z[6]*z[5]))
    + z[2]*((z[3]*z[7])-(z[4]*z[6]));
    printf("Determinant is %d\n",determ);
}







int main(){
    int arr[9];
    for(int x = 0; x < 9; x++){
        scanf("%d",&arr[x]);
    }
    deter(arr);


    printf("hellow");
    return 0;
}