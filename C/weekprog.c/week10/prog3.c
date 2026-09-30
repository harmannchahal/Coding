// A sports academy wants to store the details of cricket players such as player name, matches played, total runs scored, and number of 
// times the player remained not out. 
// Write a C program using structures to: 
// 1. Read the details of n cricket players  
// 2. Calculate the batting average of each player using the formula:  
// B𝑎𝑡𝑡𝑖𝑛𝑔 𝐴𝑣𝑒𝑟𝑎𝑔𝑒 = 𝑇𝑜𝑡𝑎𝑙 𝑅𝑢𝑛𝑠/𝑀𝑎𝑡𝑐ℎ𝑒𝑠 𝑃𝑙𝑎𝑦𝑒𝑑 −𝑁𝑜𝑡 𝑂𝑢𝑡
// 3. Display the details of the player who has the highest batting average  

// Note: 
// If matches played - not out = 0, then batting average should be considered as 0 to avoid division by zero. 

// Enter the number of players: 3

// Enter details of player 1 
// Enter player name: Virat 
// Enter matches played: 100 
// Enter total runs scored: 5000 
// Enter number of times not out: 10 

// Enter details of player 2 
// Enter player name: Rohit 
// Enter matches played: 95 
// Enter total runs scored: 4800 
// Enter number of times not out: 5 

// Enter details of player 3 
// Enter player name: Rahul 
// Enter matches played: 80 
// Enter total runs scored: 3900 
// Enter number of times not out: 20 

// --- Player with Highest Batting Average --- 
// Player Name       : Rahul 
// Matches Played    : 80 
// Total Runs        : 3900 
// Not Out           : 20 
// Batting Average   : 65.00

#include <stdio.h>
#include <string.h>

struct player
{
    char name[20];
    int matches;
    int runs;
    int notout;
    float avg;
};

int main()
{
    int i,j,n,high=0;
    float avg;
    printf("Enter number of Players : ");
    scanf("%d",&n);

    struct player p[n];
    for(i=0;i<n;i++)
    {
        printf("\nEnter Details of player %d: \n",i+1);
        printf("Enter Player Name : ");
        scanf(" %[^\n]",p[i].name);
        printf("Enter matches played : ");
        scanf("%d",&p[i].matches);
        printf("Enter Total runs Scored : ");
        scanf("%d",&p[i].runs);
        printf("Enter number of times not out: ");
        scanf("%d",&p[i].notout);

        
        if (p[i].matches-p[i].notout==0)
            avg=0;
        else
            avg=p[i].runs/(p[i].matches-p[i].notout);
        
        p[i].avg = avg;
        
        if(p[i].avg > p[high].avg)
            high = i;    
    }
     printf("\n--- Player with Highest Batting Average ---\n");
    printf("Player Name       : %s\n", p[high].name);
    printf("Matches Played    : %d\n", p[high].matches);
    printf("Total Runs        : %d\n", p[high].runs);
    printf("Not Out           : %d\n", p[high].notout);
    printf("Batting Average   : %.2f\n", p[high].avg);

    return 0;
}