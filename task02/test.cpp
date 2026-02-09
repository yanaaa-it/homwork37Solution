#include "test.h"
void print(string name, long long number, bool expected) {
	bool actual = find_digits_Unique(number);

	cout << name << (expected == actual ? " \002 PASS (green)" : " \001 FAIL (red)")
		<< ": with number = " << number << " result is " << actual << endl;
	cout << "----------------------------------------------------------------------" << endl;
}
void test01() {
	long long number = 21673;
	bool expected = true;
	print("test01", number, expected);
}
void test02() {
	long long number = -98347;
	bool expected = true;
	print("test02", number, expected);
}
void test03() {
	long long number = 1231;
	bool expected = false;
	print("test03", number, expected);
}
void test04() {
	long long number = 1122;
	bool expected = false;
	print("test04", number, expected);
}
void test05() {
	long long number = 0;
	bool expected = true;
	print("test05", number, expected);
}