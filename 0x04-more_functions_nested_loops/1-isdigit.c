int _isdigit(int c);

/**
 * _isdigit - Check if a letter is digit 
 * @x: The number to be checked
 * Return: 1 for a digit or 0 for any else
 */

int _isdigit(int x)

{
        if (x >= 40 && x <= 57)
        {
        return(1);
        }
        return(0);
}
 