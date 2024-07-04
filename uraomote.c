#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char* coin_toss() {
    return rand() % 2 == 0 ? "Heads" : "Tails";
}

int main() {
    int heads_count = 0;
    int tails_count = 0;

    // 乱数のシードを設定
    srand(time(NULL));

    printf("Who are you?\n> ");
    scanf("%99s", user_name);
    printf("Hello, %s!\n", user_name);


    printf("Tossing a coin...\n");
    for (int round = 1; round <= 3; ++round) {
        const char* result = coin_toss();
        if (result == "Heads") {
            heads_count++;
        } else {
            tails_count++;
        }
        printf("Round %d: %s\n", round, result);
    }

    printf("Heads: %d, Tails: %d\n", heads_count, tails_count);

     if (heads_count > tails_count) {
        printf("%s won!\n",user_name);
    } else {
        printf("%s lost!\n",user_name);
    }

    return 0;
}
