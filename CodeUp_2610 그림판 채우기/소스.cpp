#include <iostream>
using namespace std;

char place[12][12];
void fill(int x, int y)
{
	if (!place[x][y] || place[x][y] == '*')
		return;
	
	place[x][y] = '*';

	fill(x + 1, y);
	fill(x - 1, y);
	fill(x, y + 1);
	fill(x, y - 1);
}
int main()
{
	int xpos, ypos;
	for (int i = 1; i < 11; i++)
		for (int j = 1; j < 11; j++)
			cin >> place[i][j];
	cin >> xpos >> ypos;

	fill(ypos + 1, xpos + 1);

	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < 11; j++)
			cout << place[i][j];
		cout << endl;
	}
	return 0;
}