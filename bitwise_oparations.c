#include <stdio.h>

int main()
{
    int bit, sel, pos;
    printf("Enter a number: ");
    scanf("%d",&bit);
    printf("\n1: Set, 2: Clear, 3: Toggle, 4: Test/Monitor, 5: Extract");
    scanf("%d",&sel);
    switch(sel)
    {
        case 1:
        printf("\nEnter position: ");
        scanf("%d",&pos);
        bit|=1<<(pos-1);
        printf("New Value: %d",bit);
        break;
        
        case 2:
        printf("\nEnter position: ");
        scanf("%d",&pos);
        bit&=(~(1<<(pos-1)));
        printf("New Value: %d",bit);
        break;
        
        case 3:
        printf("\nEnter position: ");
        scanf("%d",&pos);
        bit^=1<<(pos-1);
        printf("New Value: %d",bit);
        break;
        
        case 4:
        printf("\nEnter position: ");
        scanf("%d",&pos);
        if(bit & (1<<pos-1))
		printf("\nBit number %d is SET in number %d.",pos,bit);
	    else
		printf("\nBit number %d is not SET in number %d.",pos,bit);
        break;
        
        case 5:
        printf("\nEnter position: ");
        scanf("%d",&pos);
        if(bit & (1<<pos-1))
		printf("\nBit number %d is 1 of %d.",pos,bit);
	    else
		printf("\nBit number %d is 0 of %d.",pos,bit);
        break;
        
        default:
        printf("\nWrong Input");
        break;
        
    }
    return 0;
}
