#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

int main(int argc, char **argv) {
    while(1) {
        char *input = readline("lipsy>");
        add_history(input);
        printf("I got %s!\n", input);
        free(input);
    }

}
