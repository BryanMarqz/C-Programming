int evaluate_position(char (*board)[8])
{
	char *p,
	    sum = 0;

	for(p = *board; p < (*board) + (8 * 8); p++)
	{
		switch(*p)
		{
			case 'Q': sum += 9;
				break;
			case 'R': sum += 5;
				break;
			case 'B': sum += 3;
				break;	
			case 'N': sum += 3;
				break;
			case 'P': sum += 1;
				break;
			case 'q': sum -= 9;
				break;
			case 'r': sum -= 5;
				break;
			case 'b': sum -= 3;
				break;	
			case 'n': sum -= 3;
				break;
			case 'p': sum -= 1;
				break;
			default:
				break;
		}
	}
	return sum;
}
