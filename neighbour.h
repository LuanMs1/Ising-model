/*

Function to calculate the neighbour j of the k site given a
square lattice of side L and size N (N = L*L).

The neighbours are chosen by the j value as especified below:
j = 0 right neighbour;
j = 1 upper neighbour;
j = 2 left neighbour;
j = 3 below neighbour;
*/

int nbr(int j, int k, int L)
{

	int N = L*L;
	int n;

	if (j ==0)		
	{
		if(k%L == L-1)
		{
			n = k+1-L;
		}
		else n = k+1;
	}

	if (j == 1)	
	{
		n = (k+L)%N;
	}

	if (j == 2) 
	{
		if(k%L == 0)
		{
			n = k-1+L;
		}
		else n = k-1;
	}

	if (j == 3)
	{
		n = (k-L+N)%N
	}

}