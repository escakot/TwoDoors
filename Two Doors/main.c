//
//  main.c
//  Two Doors
//
//  Created by Errol Cheong on 2017-05-22.
//  Copyright © 2017 Errol Cheong. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char play;
    int choice;
    
    printf("Welcome to Two doors.\n");
    printf("Would you like to play? (y/n): ");
    scanf("%c", &play);
    
    while(play == 'y') { // Repeat to play game again
        
            printf("\nYou are a prisoner in a room with 2 doors and 2 guards.\n");
            printf("One of the doors will guide you to freedom and behind the other is a hangman --you don't know which is which.\n");
            printf("One of the guards always tells the truth and the other always lies. You don't know which one is the truth-teller or the liar either.\n");
            printf("You have to choose and open one of these doors, but you can only ask a single question to one of the guards.\n");
            
            do { //do-while loop to ensure 1-3 is inputted for choice
                printf("What do you ask so you can pick the door to freedom?\n\n");
                printf("\t1.Ask the truth-guard to point to the door of doom.\n");
                printf("\t2.Ask the liar-guard to point to the door of doom.\n");
                printf("\t3.Doesn't matter which one you pick.\n");
                scanf("%i", &choice);
                
                char *answer = "No matter which one you choose the guards both tell you which door leads to death, and therefore you can pick the other door.\n";
                
                switch (choice) {
                    case 1:
                        printf("%s", answer);
                        break;
                    case 2:
                        printf("%s", answer);
                        break;
                    case 3:
                        printf("%s", answer);
                        break;
                    default:
                        printf("Please choose to ask question 1-3.\n");
                        break;
                }
            }while(choice > 3 || choice < 1);
            printf("Would you like to play again? (y/n):");
            scanf( "%c", &play);
        }
    return 1;
}
