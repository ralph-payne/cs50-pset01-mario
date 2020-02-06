// Program which draws triangles of height h. H being an integer provided by the user.
// This code is written to work inside the CS50 IDE (i.e. it doesn't include the header file cs50.c)

#include <stdio.h>
// CS50 Library required for get_int
#include <cs50.h>
// Comment out because you don't need this when you use the CS50 IDE
// #include <cs50.c>

// Declare function prototypes
int mario();
int draw_triangle(int rows);

int main(void)
{
  
    // Declare variable which stores the result of calling the function mario(). Mario will return a value of 0 (successful) or 1 (unsuccessful)
    int result = mario();

    // Create a while loop which will keep on looping until the result is 0
    while (result != 0)
    {
        result = mario();
    }

    // Once the program has run successfully once (i.e. mario has returned a value of 0), then the main function can also return a value of 0
    return 0;

}

// Declare function that takes userInput and draws triangles
int mario()
{

    // Declare variable that will hold the user's input
    // Use get_int (from CS50 lib) to prompt user for an integer (if you use scanf("%d", &userInput), the program will accept decimals between 1 and 8).
    int userInput = get_int("height (h): ");

    if (userInput > 0 && userInput < 9 && userInput % 1 == 0)
    {
        draw_triangle(userInput);
        
        // Return 0 because there has been a successful execution
        return 0;
    }
    else
    {
        // Return 1 because there has been an unsuccessful execution
        return 1;
    }

    
}

int draw_triangle(int rows)
{
    for (int i = 0; i < (rows); i++)
    {
        for (int k = (rows - 1); k > i; k--)
        {
            printf(" ");
        }

        for (int j = -1; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
        
    }

    return 0;
}