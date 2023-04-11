int main()
{
	char times[18] = {'0', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P'};
	int oitavas[8], quartas[4], semi[2], final, m, n, j;
	int aux = 0;

	for (int i = 0; i < 8; i++)
	{
		scanf("%i %i", &n, &m);
		if (n < m)
			oitavas[i] = aux + 2;

		else
			oitavas[i] = aux + 1;

		aux = aux + 2;
	}
	aux = 0;


	for (int i = 0; i < 4; i++)
	{
		scanf("%i %i", &n, &m);
		if (n < m)
		{
			aux++;
			quartas[i] = oitavas[aux++];
		}
		else
		{
			quartas[i] = oitavas[aux];
			aux = aux + 2;
		}
	}
	aux = 0;

	
	for (int i = 0; i < 2; i++)
	{
		scanf("%i %i", &n, &m);
		if (n < m)
		{
			aux++;
			semi[i] = quartas[aux];
			aux++;
		}
		else
		{
			semi[i] = quartas[aux];

			aux = aux + 2;
		}
	}
	aux = 0;
	scanf("%i %i", &n, &m);
	if (n < m)
	{
		final = semi[1];
		printf("%c\n", times[final]);
	}
	else
	{
		final = semi[0];
		printf("%c", times[final]);
	}
	return 0;
}