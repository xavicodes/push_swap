/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xlourenc <xlourenc@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-04 12:02:42 by xlourenc          #+#    #+#             */
/*   Updated: 2024-12-04 12:02:42 by xlourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
//#include "/Users/xaviermonteiro/Desktop/42/PROJECTS/push_swap/push_swap.h"


static int count_words(char *s, char c) 
{
    int count = 0;
    bool inside_word = false;

    while (*s) 
    {
        if (*s != c && !inside_word) 
        {
            inside_word = true;
            count++; // Found a new word
        } 
        else if (*s == c) 
        {
            inside_word = false; // Leaving a word, enter delimiter area
        }
        s++;
    }
    return count;
}

static char *get_next_word(char *s, char c, int *cursor) 
{
    int len = 0, i = 0;
    char *next_word;

    // Skip delimiters
    while (s[*cursor] == c && s[*cursor])
        (*cursor)++;
    
    // Find the length of the next word
    while (s[*cursor + len] != c && s[*cursor + len])
        len++;

    // Allocate memory for the next word
    next_word = malloc((len + 1) * sizeof(char)); 
    if (!next_word)
        return NULL;

    // Copy the word into next_word
    while (i < len)
        next_word[i++] = s[(*cursor)++];

    next_word[i] = '\0'; // Null-terminate the string
    return next_word;
}

char **split(char *s, char c) 
{
    int words_count = count_words(s, c);
    char **result_array;
    int i = 0, cursor = 0;

    if (words_count == 0)
        return NULL;

    // Allocate memory for result array (one more for NULL terminator)
    result_array = malloc((words_count + 1) * sizeof(char *));
    if (!result_array)
        return NULL;

    // Extract words and populate the array
    while (i < words_count) 
    {
        result_array[i] = get_next_word(s, c, &cursor);
        if (!result_array[i]) 
        {
            // Handle memory deallocation in case of failure
            while (--i >= 0)
                free(result_array[i]);
            free(result_array);
            return NULL;
        }
        i++;
    }
    result_array[i] = NULL; // Null-terminate the result array

    return result_array;
}

/* int main() 
{
    char *test_string = "hello,world,this,is,a,test";
    char delimiter = ',';
    
    char **result = split(test_string, delimiter);

    if (!result) 
    {
        printf("Error: Unable to split the string.\n");
        return 1;
    }

    printf("Split string results:\n");
    for (int i = 0; result[i]; i++)
    {
        printf("[%d]: %s\n", i, result[i]);
    }

    for (int i = 0; result[i]; i++)
        free(result[i]);
    free(result);

    return 0;
} */

