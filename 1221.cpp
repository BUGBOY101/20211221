#define	_CRT_SECURE_NO_WARNINGS 1

//贪心算法
//贪心算法的基本步骤
//从问题的某个初始解出发。
//采用循环语句，当可以向求解目标前进一步时，就根据局部最优策略，得到一个部分解，
//缩小问题的范围或规模。
//将所有部分解综合起来，得到问题的最终解。

//钱币找零问题

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

//最大不相交覆盖--可进行的最多的活动数

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
//		if (act[j].start >= act[i].end) {//开始时间要大于上一个活动的结束时间
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
//	cin >> N;//测试样例个数
//	while (N--) {
//		cin >> n;//几张桌子需要移动
//		memset(p, 0, sizeof(p));
//		while (n--) {
//			cin >> s >> d;
//			s = (s - 1) / 2;
//			d = (d - 1) / 2;//?
//			if (s > d) {//无论出发房间和目的房间哪个大，都可以看做是从小的房间到大的房间
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
//		cout << 10 * max << endl;//所需时间就是区间有多少个重叠部分*10
//	}
//}

//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct node {
//	int j;//可以兑换的豆子数
//	int f;//需要的猫粮数
//	double bi;//性价比
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