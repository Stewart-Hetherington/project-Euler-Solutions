#include <iostream>
/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 *What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 *
 *Author: Stewart Hetherington.
 */
int main()
{
    bool found = false;
    int lowest = 2520;
    
    while(!found) {
        bool divisor =true;
        for( int i=11; i<21; i++) {
            if(lowest%i != 0) {
                divisor = false;
                lowest += 2520;
                break;
            }
        }
        if(divisor) {
            found = true;
            std::cout << lowest;
        }
    }
    system("pause");
    return 0;
}
