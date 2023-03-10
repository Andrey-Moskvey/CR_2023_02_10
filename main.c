#include <iostream>

int* add(int* ar, int* n, int x) {
   int* ar1 = new int[*n + 1];
   for (int i = 0; i < *n; i++)  ar1[i] = ar[i];
   ar1[*n] = x;
   delete [] ar;
   *n += 1;
   return ar1;
}

bool isPalindrom(int num) {
	int n = 0;
	int* ar = new int[1];
	while (num != 0) {
		ar = add(ar, &n, num % 10);
		num /= 10;
	}
	for (int i = 0; i < n / 2; i++){
		if (ar[i] != ar[n - i - 1]) return false;
	}
	return true;
}

int main() {
	int n;
	std::cin >> n;
	std::cout << (isPalindrom(n)? "YES":"NO") << " ";
}
