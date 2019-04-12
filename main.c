#include <stdio.h>

void sub1();
void sub2();

int main(){
sub1();
sub2();

return 0;
}
void sub1(){
    int i int j;
    for(i=1; i<10; i++){
        for(j=1; j<10; j++){
            printf("%d * %d = %d",i,j,i*j);
        }
    }
}   
