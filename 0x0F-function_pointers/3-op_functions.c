#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of a and b
 * @a: first num
 * @b: second num
 * Return: Result of a and b
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - Returns diff of a and b
 * @a: fisrt num
 * @b: second num.
 * Return: Result / diff of a and b
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - The product of a and b
 * @a: first number
 * @b: second num
 * Return: Product of a and b
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - Division of two numbers.
 * @a: first num
 * @b: second numb
 * Return: result of a and b
 */

int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - Remainder of division of a and b
 * @a: a
 * @b: b
 * Return: Division of a by b
 */

int op_mod(int a, int b)
{
return (a % b);
}
