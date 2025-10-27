
#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int count = 0;
        int temp = N;
        while (temp > 0) {
            if (temp % 2 == 1) {
                count++;
            }
            temp = temp / 2;
        }
        int result = 0;
        for (int i = 0; i < count; i++) {
            result = result * 2 + 1;
        }

        printf("%d\n", result);
    }

    return 0;
}
