dd
int arr[12];



void func(int a)
{
	int i;
	int div;
	int mod;

	div = a / 10;
	mod = a % 10;
	i = 0;
	arr[i] = mod;
	if (div > 10)
		i++;
		func (div);
	else
		arr[++i] = div;
}
