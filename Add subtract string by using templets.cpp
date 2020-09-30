//#include <iostream>
//using namespace std;
//
//template <typename t>
//t gm(t x, t y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//template <typename t>
//t gm(t x, t y) {
//	if (x > y)
//		return y;
//	else
//		return x;
//}
//template <typename t1, typename t2>
//t1 gem(t1 a, t2 b) {
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//template <typename t1, typename t2>
//t1 gem(t1 c, t2 d) {
//	if (c > d)
//		return c;
//	else
//		return d;
//}
//int main() {
//	char i = 'Z';
//	int j = 6, k;
//	long l = 10;
//	int m = 5;
//	int n;
//	int i1 = 5;
//			k = gm<int>(i1, j);
//			n = gm<long>(l, m);
//			gm(i1, j);
//			gm(i1, j);
//			k = gm<int, long>(i, m);
//			n = gm<int, char>(j, l);
//			gm(i, m);
//			gm(j, l);
//	system("Pause");
//	return 0;
//}