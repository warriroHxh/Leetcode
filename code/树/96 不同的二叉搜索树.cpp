class Solution {
public:
	int v[100] = {0};
    int numTrees(int n) {
		if(v[n] == 0)
		{
			if(n == 0)
			{
				v[0] = 1;
				return 1;
			}
			else if(n == 1)
			{
				v[1] = 1;
				return 1;
			}
			else
			{
				int sum = 0;
				for(int i= 0; i < n; i++)
				{
					sum += (numTrees(i)*numTrees(n-1-i));
				}
				v[n] = sum;
				return sum;
			}
		}
		else return v[n];
    }
};