#include <iostream>
#include <vector>

#ifndef _MSC_VER
#include <bits/stdc++.h>
#endif

#define FASTIO ios::sync_with_stdio(false), cin.tie(nullptr);
#define rep(i,a,b) for(int i=a; i < b; ++i)
#define all(x) (x).begin(),(x).end()
#define endl "\n"

using namespace std;

void output(const vector<int> &a) {
	cout << "value :" << a[0];
	for (int i = 1; i < a.size(); i++) {
		cout << " ";
		if (a[i] < 10) cout << " ";
		cout << a[i];
	}
	cout << endl;

	cout << "index :" << 0;
	for (int i = 1; i < a.size(); i++) {
		cout << " " ;
		if (i < 10) cout << " ";
		cout << i;
	} 
	cout << endl;
}

int main() {
	vector<int> a;
	rep(i, 1, 11) {
		if (i == 5) continue; // 删除5， 观察lower_bound(5), 和 upper_bound(5) 的结果
		rep(j, 0, i) a.push_back(i);
	}

	output(a);
	
	rep(i, 1, 15) {
		auto it = lower_bound(all(a), i);
		if (it != a.end()) {
			cout << "lower_bound(" << i << ") index is (" << it - a.begin() << ") and value is : " << *it << endl;
		} else {
			cout << "lower_bound(" << i << ") index is (end)" << endl;
		}
	}

	output(a);

	rep(i, 1, 15) {
		auto it = upper_bound(all(a), i);
		if (it != a.end()) {
			cout << "upper_bound(" << i << ") index is (" << it - a.begin() << ") and value is : " << *it << endl;
		} else {
			cout << "upper_bound(" << i << ") index is (end)" << endl;
		}
	}

	// output
	// value :1  2  2  3  3  3  4  4  4  4  6  6  6  6  6  6  7  7  7  7  7  7  7  8  8  8  8  8  8  8  8  9  9  9  9  9  9  9  9  9 10 10 10 10 10 10 10 10 10 10
	// index :0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49
	// lower_bound(1) index is (0) and value is : 1
	// lower_bound(2) index is (1) and value is : 2
	// lower_bound(3) index is (3) and value is : 3
	// lower_bound(4) index is (6) and value is : 4
	// lower_bound(5) index is (10) and value is : 6
	// lower_bound(6) index is (10) and value is : 6
	// lower_bound(7) index is (16) and value is : 7
	// lower_bound(8) index is (23) and value is : 8
	// lower_bound(9) index is (31) and value is : 9
	// lower_bound(10) index is (40) and value is : 10
	// lower_bound(11) index is (end)
	// lower_bound(12) index is (end)
	// lower_bound(13) index is (end)
	// lower_bound(14) index is (end)
	// value :1  2  2  3  3  3  4  4  4  4  6  6  6  6  6  6  7  7  7  7  7  7  7  8  8  8  8  8  8  8  8  9  9  9  9  9  9  9  9  9 10 10 10 10 10 10 10 10 10 10
	// index :0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49
	// upper_bound(1) index is (1) and value is : 2
	// upper_bound(2) index is (3) and value is : 3
	// upper_bound(3) index is (6) and value is : 4
	// upper_bound(4) index is (10) and value is : 6
	// upper_bound(5) index is (10) and value is : 6
	// upper_bound(6) index is (16) and value is : 7
	// upper_bound(7) index is (23) and value is : 8
	// upper_bound(8) index is (31) and value is : 9
	// upper_bound(9) index is (40) and value is : 10
	// upper_bound(10) index is (end)
	// upper_bound(11) index is (end)
	// upper_bound(12) index is (end)
	// upper_bound(13) index is (end)
	// upper_bound(14) index is (end)

	// lower_bound(x)
	// 如果 x 存在，则返回最靠前的 x 的元素
	// 如果 x 不存在，则返回第一个大于 x 的元素
	// 总结就是，返回第一个大于或等于 x 的元素，若不存在则返回 end

	// lower_bound(x)
	// 返回第一个大于 x 的元素
	// 若没有则返回 end

	return 0;
}