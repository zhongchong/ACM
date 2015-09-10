#define NUM 100 //初始个体数量

int individual[NUM] = {0};
int weight[NUM] = {0};
int weight_sum = 0;
double possibility[NUM] = {0.0};

int generate()
{
	srand((unsigned int)time(0));

	for (int i=0; i<NUM; ++i)
	{
		individual[i] = rand()%10000;
	}
	return 0;
}

int selection()
{
	weight_sum = 0;
	//计算适应度
	for (int i=0; i<NUM; ++i)
	{
		int a = 0, b = 0;
		a = individual[i]%100;
		b = (individual[i]/100) %100;
		weight[i] = a*a + b*b;
		weight_sum += weight[i];
		//cout<<individual[i]<<" "<<weight[i]<<endl;
	}
	//cout<<endl;

	for (int i=0; i<NUM; ++i)
		possibility[i] = (double)weight[i] / (double)weight_sum;

	for (int i=1; i<NUM; ++i)
	{
		possibility[i] += possibility[i-1];
		//cout<<possibility[i]<<endl;
	}
	//cout<<endl;

	srand((unsigned int)time(0));
	//选择适合的个体
	int individual_0[NUM] = {0};
	for(int i=0; i<NUM; ++i)
	{
		double randNum = rand();
		randNum /= (double)RAND_MAX;
		//cout<<randNum<<endl;
		for(int j=0; j<NUM; ++j)
		{
			if(randNum < possibility[j])
			{
				individual_0[i] = individual[j];
				//cout<<individual[j]<<endl;
				break;
			}
		}
	}
	//cout<<endl;
	for(int i=0; i<NUM; ++i)
	{
		individual[i] = individual_0[i];
	}

	return 0;
}

void display()
{
	int max = -1, max_value = -1;
	for(int i=0; i<NUM; ++i)
	{
		int a = 0, b = 0;
		a = individual[i]%100;
		b = (individual[i]/100) %100;
		int temp = a*a + b*b;
		if(temp > max)
		{
			max = temp;
			max_value = individual[i];
		}
	}
	cout<<max_value<<" "<<max<<endl;

}

int crossover()
{
	int position = 1;
	srand((unsigned)time(0));
	for (int i=0; i<NUM/2; ++i)
	{
		position = rand()%3+1;
		position = (int)pow(10.0,(double)position);
		int a,b;
		a = individual[i] % position;
		individual[i] /= position;
		individual[i] *= position;

		b = individual[i+NUM/2] % position;
		individual[i+NUM/2] /= position;
		individual[i+NUM/2] *= position;

		individual[i] += b;
		individual[i+NUM/2] += a;
	}
	return 0;
}

int variation()
{
	int position = 1, position0 = 0;
	srand((unsigned)time(0));
	for (int i=0; i<NUM; ++i)
	{
		int randNum = rand()%4+1;
		position = (int)pow(10.0,(double)randNum);
		position0 = (int)pow(10.0,(double)(randNum-1));
		int temp = individual[i] % position0;
		individual[i] /= position;
		individual[i] *= position;
		individual[i] += rand()%10 * position0;
		individual[i] += temp;
	}
	return 0;
}