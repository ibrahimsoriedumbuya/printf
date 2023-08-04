#include "main.h"

#define BUFF_SIZE 1024

/************************* WRITE HANDLE *************************/

/**
 * handle_write_char - Prints a character.
 * @c: Character to print.
 *
 * Return: Number of characters printed.
 */
int handle_write_char(char c)
{
    char buffer[2];
    buffer[0] = c;
    buffer[1] = '\0';
    return write(1, buffer, 1);
}

/************************* WRITE NUMBER *************************/

/**
 * write_number - Prints a signed number.
 * @num: Number to print.
 *
 * Return: Number of characters printed.
 */
int write_number(int num)
{
    char buffer[BUFF_SIZE];
    int len = snprintf(buffer, BUFF_SIZE, "%d", num);
    if (len < 0 || len >= BUFF_SIZE) {
        // Handle error: snprintf failed or buffer overflow
        return -1;
    }
    return write(1, buffer, len);
}

/**
 * write_unsigned - Prints an unsigned number.
 * @num: Number to print.
 *
 * Return: Number of characters printed.
 */
int write_unsigned(unsigned int num)
{
    char buffer[BUFF_SIZE];
    int len = snprintf(buffer, BUFF_SIZE, "%u", num);
    if (len < 0 || len >= BUFF_SIZE) {
        // Handle error: snprintf failed or buffer overflow
        return -1;
    }
    return write(1, buffer, len);
}

/**
 * write_pointer - Prints a memory address.
 * @ptr: Pointer to print.
 *
 * Return: Number of characters printed.
 */
int write_pointer(const void *ptr)
{
    char buffer[BUFF_SIZE];
    int len = snprintf(buffer, BUFF_SIZE, "%p", ptr);
    if (len < 0 || len >= BUFF_SIZE) {
        // Handle error: snprintf failed or buffer overflow
        return -1;
    }
    return write(1, buffer, len);
}

