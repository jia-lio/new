#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a = 0;			//�Է¹��� ��
	int b = 0;
	int c = 0;
	double x1, x2;		//��
	int number;			//�Ǻ��� number == 0 / number < 0 / number > 0
	cin >> a;
	cin >> b;
	cin >> c;

	//�Ǻ���
	number = b * b - (4 * a * c);
	cout << number << endl;

	if (number == 0)	//�� 1��
	{
		x1 = (-b + (sqrt(b * b - 4 * a * c))) / (2 * a);
		cout << "���� 1�� �̸� " << x1 << " �Դϴ�." << endl;
	}
	else if (number > 0) //�� 2��
	{
		x1 = (-b + (sqrt(b * b - 4 * a * c))) / (2 * a);
		x2 = (-b - (sqrt(b * b - 4 * a * c))) / (2 * a);
		cout << "���� 2�� �̸� " << x1 << ", " << x2 << " �Դϴ�." << endl;
	}
	else if (number < 0) //�� 0��
	{
		cout << "���� 0 �� �Դϴ�." << endl;
	}

	return 0;
}