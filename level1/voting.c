#include <stdio.h>

int main()
{
    int votes[4] = {0}; // Array to store the votes for each candidate
    int totalVoters = 100;

    printf("Welcome to the Voting System!\n");

    for (int i = 0; i < totalVoters; i++)
    {
        int userVote;
        printf("Voter %d, please enter your vote (1, 2, 3, or 4): ", i + 1);
        scanf("%d", &userVote);

        if (userVote >= 1 && userVote <= 4)
        {
            votes[userVote - 1]++; // Increment the vote count for the selected candidate
        }
        else
        {
            printf("Invalid vote! Please enter a valid candidate number.\n");
            i--; // Decrement i to allow the user to vote again
        }
    }

    int maxVotes = 0;
    int winningCandidate = 0;

    for (int i = 0; i < 4; i++)
    {
        if (votes[i] > maxVotes)
        {
            maxVotes = votes[i];
            winningCandidate = i + 1;
        }
    }

    printf("\nVoting has ended. Candidate %d is nominated as the Prime Minister with %d votes!\n", winningCandidate, maxVotes);

    return 0;
}
