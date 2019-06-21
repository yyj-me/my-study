/*
백준 1003
피보나치 함수
#0 #1
1 0
0 1
1 1
1 2
2 3
3 5
5 8
8 13
13 21
21 34
34 55
55 89
89 144
144 233
233 377
377 610
610 987
987 1597
1597 2584
2584 4181
4181 6765
6765 10946
10946 17711
17711 28657
28657 46368
46368 75025
75025 121393
121393 196418
196418 317811
317811 514229
514229 832040
832040 1346269
1346269 2178309
2178309 3524578
3524578 5702887
5702887 9227465
9227465 14930352
14930352 24157817
24157817 39088169
39088169 63245986
63245986 102334155


풀이1
#include <stdio.h>

int T, N;
int fibo[41][2];

int main() {
    fibo[0][0] = 1; fibo[0][1] = 0;
    fibo[1][0] = 0; fibo[1][1] = 1;
    for(int i = 2; i <= 40; i++) {
        fibo[i][0] = fibo[i-1][1];
        fibo[i][1] = fibo[i-1][1] + fibo[i-2][1];
    }

    scanf("%d", &T);
    for(int i = 1; i <= T; i++) {
        scanf("%d", &N);
        printf("%d %d\n", fibo[N][0], fibo[N][1]);
    }
    return 1;
}

풀이2
#include <stdio.h>

int main() {
    int T, N;
    int fibo[41][2];
    int done = 1;

    fibo[0][0] = 1; fibo[0][1] = 0;
    fibo[1][0] = 0; fibo[1][1] = 1;
    

    scanf("%d", &T);

    for(int i = 1; i <= T; i++) {
        scanf("%d", &N);

        if(done < N) {
            for(int j = done + 1; j <= N; j++) {
                fibo[j][0] = fibo[j-1][0] + fibo[j-2][0];
                fibo[j][1] = fibo[j-1][1] + fibo[j-2][1];
            }
            done = N;
        }

        printf("%d %d\n", fibo[N][0], fibo[N][1]);
    }
    return 1;
}

풀이3 - 시간초과
#include <stdio.h>
int T, N, i;
int n0 = 0, n1 = 0;

int fibonacci(int n) {
    if (n == 0) {
        n0++;
        return 0;
    } else if (n == 1) {
        n1++;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    scanf("%d", &T);
    for(i =1; i <= T; i++) {
        scanf("%d", &N);
        n0 = n1 = 0;
        fibonacci(N);
        printf("%d %d\n", n0, n1);
    }
    return 1;
}
 */
#include <stdio.h>

int T, N;
int fibo[41][2];

int main() {
    fibo[0][0] = 1; fibo[0][1] = 0;
    fibo[1][0] = 0; fibo[1][1] = 1;
    for(int i = 2; i <= 40; i++) {
        fibo[i][0] = fibo[i-1][1];
        fibo[i][1] = fibo[i-1][1] + fibo[i-2][1];
    }

    scanf("%d", &T);
    for(int i = 1; i <= T; i++) {
        scanf("%d", &N);
        printf("%d %d\n", fibo[N][0], fibo[N][1]);
    }
    return 1;
}
