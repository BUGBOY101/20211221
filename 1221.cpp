#define	_CRT_SECURE_NO_WARNINGS 1

//̰���㷨
//̰���㷨�Ļ�������
//�������ĳ����ʼ�������
//����ѭ����䣬�����������Ŀ��ǰ��һ��ʱ���͸��ݾֲ����Ų��ԣ��õ�һ�����ֽ⣬
//��С����ķ�Χ���ģ��
//�����в��ֽ��ۺ��������õ���������ս⡣

//Ǯ����������

#include<iostream>
#include<algorithm>
using namespace std;
#define N 7
int Count[N] = { 3,0,2,1,0,3,5 };
int Value[N] = { 1,2,5,10,20,50,100 };
int solve(int money) {
	int i, sum = 0;
	for (i = N-1; i >= 0; i--) {
		int c = min(money / Value[i], Count[i]);
		money -= c * Value[i];
		sum += c;
	}
	if (money > 0)
		sum = -1;
	return sum;
}
int main() {
	int k, sum;
	cin >> k;
	sum=solve(k);
	cout << sum << endl;
}

//����ཻ����--�ɽ��е����Ļ��

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int n;
//struct node {
//	int start;
//	int end;
//}act[1005];
//bool cmp(node a, node b) {
//	return a.end < b.end;
//}
//int selector() {
//	int i = 1, s = 1, j;
//	for (j = 2; j <= n; j++) {
//		if (act[j].start >= act[i].end) {//��ʼʱ��Ҫ������һ����Ľ���ʱ��
//			i = j;
//			s++;
//		}
//	}
//	return s;
//}
//int main() {
//	int i, j, sum;
//	cin >> n;
//	for (i = 1; i <= n; i++) {
//		cin >> act[i].start >> act[i].end;
//	}
//	act[0].end = -1;
//	act[0].start = -1;
//	sort(act + 1, act + n + 1, cmp);
//	sum = selector();
//	cout << sum << endl;
//}

//hdoj1050

//#include<iostream>
//using namespace std;
//int main() {
//	int N, n, i, s, d, p[200], max;
//	cin >> N;//������������
//	while (N--) {
//		cin >> n;//����������Ҫ�ƶ�
//		memset(p, 0, sizeof(p));
//		while (n--) {
//			cin >> s >> d;
//			s = (s - 1) / 2;
//			d = (d - 1) / 2;//?
//			if (s > d) {//���۳��������Ŀ�ķ����ĸ��󣬶����Կ����Ǵ�С�ķ��䵽��ķ���
//				int temp = s;
//				s = d;
//				d = temp;
//			}
//			for (i = s; i <= d; i++)
//				p[i]++;
//		}
//		max = -1;
//		for (i = 0; i < 200; i++) {
//			if (p[i] > max) {
//				max = p[i];
//			}
//		}
//		cout << 10 * max << endl;//����ʱ����������ж��ٸ��ص�����*10
//	}
//}

//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct node {
//	int j;//���Զһ��Ķ�����
//	int f;//��Ҫ��è����
//	double bi;//�Լ۱�
//}food[1005];
//bool cmp(node a, node b) {
//	return a.bi > b.bi;
//}
//int main() {
//	int m, n, i;
//	while (cin >> m >> n && (m != -1 || n != -1)) {
//		for (i = 0; i < n; i++) {
//			cin >> food[i].j >> food[i].f;
//			food[i].bi = (double)food[i].j / food[i].f;
//		}
//		sort(food, food + n, cmp);
//		double sum = 0;
//		i = 0;
//		while (m && i < n) {
//			if (m >= food[i].f) {
//				sum += food[i].j;
//				m -= food[i].f;
//			}
//			else {
//				sum += (double)food[i].bi * m;
//				m = 0;
//			}
//			i++;
//		}
//		printf("%.3lf\n", sum);
//	}
//}