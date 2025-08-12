#include<stdio.h>
#include<stdint.h>
uint32_t flipBits(uint32_t num){
    return ~num;
}

int main(){
    int n;
    uint32_t num;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%u",&num);
        printf("%u\n",flipBits(num));
    }
    return 0;
}