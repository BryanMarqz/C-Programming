/*
 * With continue
 * n = 0;
 * sum = 0;
 * while(n < 10)
 * {
 * 	scanf("%d", &i);
 * 	if(i == 0)
 * 		continue;
 * 	sum += i;
 * 	n++;
 * }
 * 
 * With goto
 * n = 0;
 * sum = 0;
 * while(n < 10)
 * {
 * 	scanf("%d", &i);
 * 	if(i == 0)
 * 		goto end;
 * 	sum += i;
 * 	n++;
 * 	end:
 * }
