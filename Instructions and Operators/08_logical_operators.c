/*
    Logical operators:

    &&(and) : both the operands should be true for the final answer to be true)
        TRUTHTABLE:
            1 1 = 1
            1 0 = 0
            0 1 = 0
            0 0 = 0

    ||(or) : (one or both the operands should be true for the final answer to be true)
        TRUTHTABLE:
            1 1 = 1
            1 0 = 1
            0 1 = 1
            0 0 = 0

    !(not) : (reverses the output)
        TRUTHTABLE:
            1 = 0
            0 = 1

    NOTE: 1 represents TRUE,0 represents FALSE
*/
#include <stdio.h>

int main()
{
	printf("%d",(4>3) && (5>2)); // 1 1 = 1
	printf("\n%d",(4>3) && (2>5)); // 1 0 = 0
	printf("\n%d",(2>5) && (4>3)); // 0 1 = 0
	printf("\n%d",(1>5) && (2<1)); // 0 0 = 0


	printf("\n%d",(4>3) || (5>2)); // 1 1 = 1
	printf("\n%d",(4>3) || (2>5)); // 1 0 = 1
	printf("\n%d",(2>5) || (4>3)); // 0 1 = 1
	printf("\n%d",(1>5) || (2<1)); // 0 0 = 0


	printf("\n%d",!(3>4)); // 0 = 1
	printf("\n%d",!(5>1)); // 1 = 0

	printf("\n%d",!((5>1) && (3>4))); // 1 0 = 0 ...0 = 1
	printf("\n%d",!((5>1) || (3>4))); // 1 0 = 1 ...1 = 0

	return 0;
}
