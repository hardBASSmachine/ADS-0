// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
 template <typename Integer>
 Integer gcd (Integer a, Integer b) {
	 for (Integer c; b; ) {
		 c = a % b;
		 a = b;
		 b = c;
	 }
	 return abs(a);
 }
}
