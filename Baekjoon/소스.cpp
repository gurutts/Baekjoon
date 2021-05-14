#include <iostream>

using namespace std;

void star(int i, int j, int num, int mid)
{
	int top = i / num * num, bot = top + num - 1;
	int dis = abs(top - i), rdis = abs(bot - i);
	int left = mid - dis, right = mid + dis;
	int rleft = mid - rdis, rright = mid + rdis;
	if (num == 3) {
		rleft++; rright--;
	}
	// �ﰢ�� ��
	if (j < left || j > right) cout << ' ';
	// ���� �ﰢ��
	else if (dis >= num / 2 && j >= rleft && j <= rright) cout << ' ';
	// �� ����
	else if (j == left || j == right) cout << '*';
	else {
		if (num == 3) cout << '*';
		else {
			// mid�� ����
			if (dis >= num / 2 && j < mid) mid -= (num / 2);
			else if (dis >= num / 2 && j > mid) mid += (num / 2);
			star(i, j, num / 2, mid);
		}
	}
}

int main(void)
{
	int N; cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N * 2 - 1; j++) {
			star(i, j, N, (N * 2 - 1) / 2);
		}
		cout << '\n';
	}

	return 0;
}