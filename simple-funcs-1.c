#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*

Outline made by Kevin Rowland, completed by EJ Cervantes

*/


/* 1) Return the sum of all numbers between 0 and "n" (inclusive) where
 *    "n" is a positive integer
 *
 * @param n     positive integer
 *
 * @return      sum of all positive integers between 0 and n
 */
int sum(int n)
{
	int summation = 0;
	for (int x = 0; x <= n; x++){
		summation = summation + x;
	}
	return summation;
}

/* 2) Make a copy of a string, except the returned string is in reverse
 *    order. Leave the original string unchanged.
 *
 * @param source    input string
 *
 * @return          copy of source reversed
 */
char * str_reverse(const char * source)
{
	static char r[1000];
	int front, end, cnt = 0;
	while(source[cnt] != '\0')
		cnt++;
	end = cnt-1;

	for (front = 0; front < cnt; front++) {
    	r[front] = source[end];
    	end--;
   }
   r[front] = '\0';
	return r;
}


/* 3) Given an array of integers, print the minimum value, the maximum
 *    value and the average of the values. Use the printf function to
 *    print the values.
 *
 * @param data      array of integer values
 * @param datalen   number of items in data array
 *
 * @return          none
 */
void func(int data[], int datalen)
{
	int min, max, sum;
		min = data[0];
		max = data[0];
		sum = 0;
	for (int i = 0; i < datalen; ++i)
	{

		if(data[i] < min){
			min = data[i];
		}
		if(data[i] > max){
			max = data[i];
		}
		sum = sum + data[i];	
	}
	double avg = (double)sum/(double)datalen;
	printf("The min is %d\n", min);
	printf("The max is %d\n", max);
	printf("The avg is %lf\n", avg);
}

/* 4) Write a function that when called will swap two integers
 *
 * @param p1    pointer to integer value
 * @param p2    pointer to integer value
 *
 * @return      none
 
*/
void swap(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	printf("*p1[%d] *p2[%d]", *p1, *p2);
	printf("\n");
	}

/* 5) Given an input string, return the number of words contained in
 *    the string. Words are delimited by any whitespace characters.
 *
 * @param string    input string
 *
 * @return          count of words in the input string
 */
unsigned int word_count (const char* string)
{
	int count = 0;
	int length = strlen(string);
	char lastW;
	for(int i=0; i<=length; i++)
    {
        if((string[i]==' ' || string[i]=='\0'))
        {
            count++;
        }
    }
    return count;

}


/* 6) Write a function that outputs a triangle of height and width n,
 *    so n = 3 would look like:
 *
 *    *
 *    **
 *    ***
 *
 * @param n     height and width of triangle
 *
 * @return      none
 */
void print_triangle (unsigned int n)
{
	int i = 0;
	int j = 0;
	while(i <= n){
		i++;
		if(j <= n){
			int l = 0;	
			while(l <= j){
				printf("*");
				l++;
			}
			j++;
		}
		printf("\n");
	}
}

/*

Main function created by EJ Cervantes as a base test case to check every function works correctly

*/

int main (){
	int n = 5;
	printf("The summation is %d\n", sum(n));

	char string1[] = "hello";
	printf("Reverse: %s\n", str_reverse(string1));

	int arr[5] = {1000, 2, 3, 17, 50};
	int size = 5;
	func(arr, size);

	int p1, p2;
	p1=10;
	p2=20;
	swap(&p1, &p2);

	char string2[1000] = "The quick brown fox jumps over the lazy dog";
    printf("Word count = %i\n", word_count(string2));

    print_triangle(5);

	return(0);
}