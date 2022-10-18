#include <stdio.h>
#include <stdlib.h>

int main()
{

	    char color[20];
	        char pluralnoun[20];
		    char celebrity[20];

		        prinf("Eneter a color:");
			    scanf("%s", color);
			        prinf("Eneter a plural noun:");
				    scanf("%s", pluralnoun);
				        prinf("Eneter a celebrity:");
					    scanf("%s", celebrity);

					        printf("Roses are %s\n", color);
						    printf("%s are blue\n", pluralnoun);
						        printf("I love %s\n", celebrity);

							    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{

	    char color[20];
	        char pluralnoun[20];
		    char celebrity[20];

		        prinf("Eneter a color:");
			    scanf("%s", color);
			        prinf("Eneter a plural noun:");
				    scanf("%s", pluralnoun);
				        prinf("Eneter a celebrity:");
					    scanf("%s", celebrity);

					        printf("Roses are %s\n", color);
		    printf("%s are blue\n", pluralnoun);
		        printf("I love %s\n", celebrity);
		 return 0;
}


eclared to be float, and the formula for conversion is written in a more natural way. We were unable to use 5/9 in the previous version because integer division would truncate it to zero. A decimal point in a constant indi- cates that it is floating point, however, so 5. 0/9. 0 is not truncated because it is the ratio of two floating-point values.
If an arithmetic operator has integer operands, an integer operation is per- formed. If an arithmetic operator has one floating-point operand and one integer operand, however, the integer will be converted to floating point before the operation is done. If we had written fahr-32, the 32 would be automati- cally converted to floating point. Nevertheless, writing floating-point constants with explicit decimal points even when they have integral values emphasizes their floating-point nature for human rea9ers.
The detailed rules for when integers are converted to floating point are in Chapter 2. For now, notice that the assignment
fahr = lower;
