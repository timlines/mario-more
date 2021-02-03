#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    
    do
    {
        h = get_int("Height: ");
    }
    while (h > 8 || h < 1);

    for (int i = 0; i < h; i++)
    {
        for (int j = h - 1; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int l = 0; l <= i; l++)
        {
            printf("#");
        }
        printf("\n");
    }
}



/*
NOTES:

Mario more.

I've already completed the less version so I thought I'd challenge myself to the next
version to see if I could do it. This is my code for the first verion:

#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int h;

    do
    {
        h = get_int("Height: ");
    }

    while (h < 1 || h > 8);

    for (int i = 0; i < h; i++)
    {
        for (int j = h - 1; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}

What I'll do now is start from scratch and see if any lessons I learned from the first
mario apply here.

Log 12:53:

I need to make two pyramids.

   #  #
  ##  ##
 ###  ###
####  ####

How should it work?

The user types in a number 1-8

two pyramids are made 8 rows high.

If an invaid input is entered it just asks again.

1 step, prompt the user for input, us get_int()
This will automatically handle invaild inputs
I'll stil need to check it is inside a valid range.

Use a do {} while loop

For the pyramid it needs to do this

.......#..#
......##..##
.....###..###
....####..####
...#####..#####
..######..######
.#######..#######
########..########

Print spaces.
Print left hashes.
Print gap.
Print right hashes.

How do you know how many spaces and hashs?

Given the hieght of the pyramid, and given the row number your curerntly on,
how can I calculate how many spaces should be in the row, how many left hashes, spaces,
and how many right hashes should be in the row.

It might be helpful to draw a pyramid and come up with a pattern or formula that will
help you calculate how many spaces and hashes you need. 

Let me go back to this pyramid and draw out the pattern:

For the pyramid it needs to do this:

.......#..#         Row 0: 7 spaces, 1 left hash, 2 spaces, 1 right hash
......##..##        Row 1: 6 spaces, 2 left hash, 2 spaces, 2 right hash    
.....###..###       Row 2: 5 spaces, 3 left hash, 2 spaces, 3 right hash
....####..####      Row 3: 4 spaces, 4 left hash, 2 spaces, 4 right hash
...#####..#####     Row 4: 3 spaces, 5 left hash, 2 spaces, 5 right hash
..######..######    Row 5: 2 spaces, 6 left hash, 2 spaces, 6 right hash
.#######..#######   Row 6: 1 spaces, 7 left hash, 2 spaces, 7 right hash
########..########  Row 7: 0 spaces, 8 left hash, 2 spaces, 8 right hash

There are three disticnt patterns here, I wonder how I could just use three? Or does
the 2nd and 3rd pattern need to be a copy and paste?

I guess copy and paste is bad in coding so maybe there is a way to do both with only
one code that is shared between both?

LOG 1:51 PM

Well I didn't mess around with coping the 2nd and thrid pattern because the two are
actually a little differnt. It looks like this was fairly simply after understanding
how the for ( ) loops work.

Here is my code: 

   for (int i = 0; i < h; i++)
    {
        for (int j = h - 1; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }

And the results:

~/pset1/mario/ $ ./mario
Height: 1
#  #
~/pset1/mario/ $ ./mario
Height: 2
 #  #
##  ##
~/pset1/mario/ $ ./mario
Height: 3
  #  #
 ##  ##
###  ###
~/pset1/mario/ $ ./mario
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####



*/
