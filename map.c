int	**ft_empty_map()
{
	int	**map;
	int	i;
	int j;

	i = 0;
	map = (int **)malloc(sizeof(int *) * 8);
	while (i < 8)
	{
		map[i] = (int *)malloc(sizeof(int) * 9);
		i++;
	}
	i = 0;
	j = 0;
	while (map[i])
	{
		while (map[i][j])
		{
			map[i][j] = 1;
			j++;
		}
		i++;
	}
}