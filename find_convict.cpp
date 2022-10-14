#include<iostream>
using namespace std;
int main()
{
	int A, B, C, D;
	int sta, stb, stc, std;
	for (A = 0; A <= 1; A++)
	{
		for (B = 0; B <= 1; B++)
		{
			for (C = 0; C <= 1; C++)
			{
				for (D = 0; D <= 1; D++)
				{
					sta = B || C || D;
					stb = !B && C;
					stc = A || D;
					std = stb;
					if (sta + stb + stc + std == 2 && A + B + C + D == 1)
					{
						if (A == 1)
						{
							cout << "AÊÇ×ï·¸" << endl;
						}
						else if (B == 1)
						{
							cout << "BÊÇ×ï·¸" << endl;
						}
						else if (C == 1)
						{
							cout << "CÊÇ×ï·¸" << endl;
						}
						else if (D == 1)
						{
							cout << "DÊÇ×ï·¸" << endl;
						}
					}

				}
			}
		}
	}
	return 0;
}