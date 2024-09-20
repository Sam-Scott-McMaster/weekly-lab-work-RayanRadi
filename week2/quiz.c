#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2){
        printf("Usage: quiz [-#] [<answer>]\n Try 'quiz --help' for more information.");
        return EXIT_FAILURE;
    }
    if (strcmp(argv[1], "-1")==0 ){
        if (argc == 2){
        printf("What command is used to navigate files in linux");
        }
        if (argc >= 3){
            if (strcmp(argv[2],"cd")==0){
                printf("Correct! \n");
                return EXIT_SUCCESS;
            }
            if (strcmp(argv[2],"cd")==1){
                printf("Wrong!,the answer is cd");
                return EXIT_SUCCESS;
            }

          
        }
    return EXIT_FAILURE;
    }
    if (strcmp(argv[1],"-2")== 0){
        if (argc == 2){
            printf ("what is used to print statements in C (hint it starts with a P and ends with a t)"); 
        }
        if (argc >= 3){
            if (strcmp(argv[2],"printf")==0){
                printf("Correct! \n");
                 return EXIT_SUCCESS;

            }
            if (strcmp(argv[2],"printf")==1){
                printf("Wrong! the answer is printf \n");
                 return EXIT_SUCCESS;
            }
        }
    return EXIT_FAILURE;
    }
    if (strcmp(argv[1],"-3")==0){
        if (argc == 2){
            printf("what command is used to check the status of your Git repository?");
        }
        if (argc >= 3){
            if (strcmp(argv[2],"git status")==0){
                printf("Correct! \n");
                 return EXIT_SUCCESS;
            }
            if (strcmp(argv[2],"git status")==1){
                printf("Wrong! The answer is git status \n");
                 return EXIT_SUCCESS;
            }
        }
    return EXIT_FAILURE;
    }
    if (strcmp(argv[1], "--help")==0){
        printf("Usage: quiz [-#] [<answer>]\n");
        printf("Flags:\n");
        printf("  -1: Question 1\n");
        printf("  -2: Question 2\n");
        printf("  -3: Question 3\n");
        return EXIT_SUCCESS;
    } else {
        printf("Usage:quiz [-#] [<answer>] \n Try 'quiz --help' for more information.");
        return EXIT_FAILURE;

    }

}