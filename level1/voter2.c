#include <stdio.h>

int main() {
    int voters = 100;
    int candidates = 4;
    int votes[candidates];
    char candidateNames[candidates][20] = {"Sushil", "Yamma", "Dev", "BCA"};

    // Initialize votes array to zero
    for (int i = 0; i < candidates; i++) {
        votes[i] = 0;
    }

    // Collect votes
    for (int i = 0; i < voters; i++) {
        int vote;
        printf("Voter %d, Please enter your vote (1-%d): ", i + 1, candidates);
        scanf("%d", &vote);

        if (vote >= 1 && vote <= candidates) {
            votes[vote - 1]++;
        } else {
            printf("Invalid vote! Please enter a valid candidate number.\n");
            i--; // Decrement i to allow the voter to re-vote
        }
    }

    // Display total votes
    printf("\nVoting Results:\n");
    for (int i = 0; i < candidates; i++) {
        printf("%s: %d votes\n", candidateNames[i], votes[i]);
    }

    return 0;
}

