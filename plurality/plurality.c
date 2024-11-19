#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
} candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    // TODO

    // Repeat, starting at the first element(candidate):

    for (int i = 0; i < candidate_count; i++)
    {  // If the first element is what you're looking for (A candidate) update votes and return true

        if (strcomp(candidate[i].name, name))
        {
            candidate[i].votes++;
            return true;
        }
        // Otherwise move to the next element
    }

    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    // TODO

    int swap_counter = -1;
    for (int i = 0; i < candidate_count; i++)
    {
        swap_counter = 0;
        for (int j = 0; j < candidate_count-1; j++)
        {

            if (candidates[j].votes > candidates[j+1].votes)
            {
                int temp = candidates[j].votes;
                candidates[j].votes = candidates[j+1].votes;
                candidates[j+1].votes = temp;
                swap_counter++;
            }
        }

        if (swap_counter == 0)
        {
            return 4;
        }
    }

    for (i = 0; i < candidate_count-1; i++)
    {
        if (candidates[i].votes == candidates[candidate_count-1])
        {
            printf("%s", candidates[i].name)
        }
    }
    return;
}
