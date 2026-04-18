#include <stdio.h>

int main() {
    int n, num;

    long long pos_sum = 0, neg_sum = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &num);

        if(num > 0){
            pos_sum += num;
            
        }else if(num < 0){
            neg_sum += num;
        }
    }

    printf("%lld %lld\n", pos_sum, neg_sum);
    return 0;
}




