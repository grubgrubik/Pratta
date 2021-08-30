//Pratta chapter 8, control task 4
//the average numbers of the letters in the word

#include <stdio.h>


int main()
{
    int c_word, c_letter, ch, det_word, c_letter_w;

    det_word = 0;
    c_word = 0;
    c_letter = 0;
    c_letter_w  = 0;

    while ((ch = getchar()) != EOF)
    {
        if (isalnum(ch))
        {
            c_letter++;
            det_word++;
            if (det_word ==2)
                c_word++;
            if (c_word)
                c_letter_w++;
        }
        else
            det_word = 0;

    }

    printf("c_word  = %d\nc_letter = %d\ndet_word = %d\nc_letter_w = %d\n", c_word, c_letter, det_word, c_letter_w);

    printf("the average quantity letters in the word = %.2f\n", (float)c_letter_w/c_word);
    return 0;
}
