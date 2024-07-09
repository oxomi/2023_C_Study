//#include <stdio.h> 
//
//int main(void) {
//	int i, j;
//	int n1, n2, n3;
//
//	for (j = 0; j < 10; j = j + 1) {
//		n1 = 9 - j;
//		n3 = (19 - j) / 2;
//		n2 = 19 - n1 - n3;
//
//		for (i = 0; i < n1; i = i + 1) printf(". ");
//		for (i = 0; i < n2; i = i + 1) printf("* ");
//		for (i = 0; i < n3; i = i + 1) printf(". ");
//		printf("\n");
//	}
//	for (j = 0; j < 9; j = j + 1) {
//		n1 = 2 * (j + 1);
//		n3 = (9 - j) / 2;
//		n2 = 19 - n1 - n3;
//
//		for (i = 0; i < n1; i = i + 1) printf(". ");
//		for (i = 0; i < n2; i = i + 1) printf("* ");
//		for (i = 0; i < n3; i = i + 1) printf(". ");
//		printf("\n");
//	}
//
//	return 0;
//}
//
//
//
//#include <stdio.h> 
//int main(void)
//{
//	int n1, n2, n3;
//	int nx = 0, ny = 0;
//
//	printf(" Enter three integers : ");
//	scanf("%d %d %d", &n1, &n2, &n3);
//
//	if (n1 < n2)
//		if (n1 < n3) printf("ifinif\n");
//		else printf("else\n");
//
//	if (n1 < n2) {
//		if (n1 < n3) ny = n1;
//	}
//	else ny = n3;
//
//	printf("nx=%d, ny=%d\n", nx, ny);
//
//	return 0;
//}
//
//
////#include <stdio.h>
////
//////lab1
////
////int main(void) {
////	int a, r, n;
////	int s, ai, i;
////
////	scanf("%d%d%d", &a, &r, &n);
////
////	ai = a;	// i = 1, the first term
////	s = a;
////
////	printf("%d ", a);
////	for (i = 2; i <= n; i++)
////	{
////		ai = ai * r;
////		s = s + ai;
////		printf("%d\n", ai);
////
////	}
////
////	printf("= %d\n", s);
////
////	return 0;
////}
////
////
////lab2
////int main(void)
////{
////	int x, y;
////	printf("Enter an intenger number no less than 100: ");
////	scanf("%d", &x);
////
////	while (x < 100) {
////		printf("Sorry, the number you entered is less than 100\n");
////		printf("Enter an intenger number no less than 100: ");
////		scanf("%d", &x);
////	}
////
////	y = (x/10) % 10;
////
////	if (y % 2 == 0) printf("The 2nd last number of %d is %d and it is even\n", x, y);
////	else  printf("The 2nd last number of %d is %d and it is odd\n", x, y);
////	
////
////	return 0;
////}
////
////
////
////lab3
////#include <stdio.h>
////#include <string.h>
////
////int main(void) {
////	int option = 1;
////
////	int	a[10] = { 3,7,8,9,2,3,4,6,1,7 };
////
////	int	i;
////	{
////		int a2[] = { 1,3,5,7,9,1,3,5,7,9 };
////		int a3[] = { 1,3,7,9,9,3,1,7,1,2 };
////
////		scanf("%d", &option);
////		if (option == 2) memcpy(a, a2, sizeof(a));
////		else if (option == 3) memcpy(a, a3, sizeof(a));
////	}
////	
////
////	int state = 0, index =0;
////
////	for (i = 0; i < 10; i++)
////	{
////		if (a[i] % 2 == 0) {
////			index = i;
////			state = a[i];
////		}
////	}
////	if (state == 0) printf("No even number");
////	else printf("Found: a[%d]=%d\n", index, state);
////
////	return 0;
////}
////
////
////lab4
////#include <stdio.h>
////int main() {
////	int N = 3;
////	int option;
////	scanf("%d", &option);
////	// Enter your code here
////	int sum = 0, i, j;
////	for (i = 1; i <= N; i++)
////	{
////		if (option == 1)
////		{
////			for (j = 1; j <= 9; j++)
////			{
////				sum = i * j;
////				printf("%d * %d = %d\n", i, j, sum);
////			}
////		}
////
////		else if (option == 2)
////		{
////			for (j = 9; j >= 1; j--)
////			{
////				sum = i * j;
////				printf("%d * %d = %d\n", i, j, sum);
////			}
////		}
////
////		else if (option == 3)
////		{
////			for (j = 1; j <= 9; j = j + 2)
////			{
////				sum = i * j;
////				printf("%d * %d = %d\n", i, j, sum);
////			}
////		}
////	}
////
////	return 0;
////
//////}
////
////
////
////lab5
////#include <stdio.h>
////int main() {
////
////	int n, direction;
////	scanf("%d %d", &n, &direction);
////
////	// Enter your code here
////	int i, j, k;
////	if (direction == 1)
////	{
////		for (i = 1; i <= n; i++)
////		{
////			for (j = n-i; j > 0; j--) printf(" ");
////			for (k = 1; k <= i; k++) printf("*");
////			printf("\n");
////		}
////	}
////
////	else if (direction == 2)
////	{
////		for (i = n; i>0; i--)
////		{
////			for (j = n - i; j > 0; j--) printf(" ");
////			for (k = 1; k <= i; k++) printf("*");
////			printf("\n");
////		}
////	}
////
////	return 0;
////}
////
////
//////lab6
////#include <stdio.h>
////#include <string.h>
////
////
////int main() {
////	int n = 5;
////	int arr[10] = { 1,2,3,4,5 };
////	int k,i,j;
////	int option;
////
////	scanf("%d", &k);
////	scanf("%d", &option);
////
////	// Enter your code here
////	k %= 5;
////	printf("Rotated array: ");
////	for (i = 0; i < n; i++)
////	{
////		arr[i] = arr[i + k];
////		if (i >= 5) arr[i] = arr[i - 5];
////	}
////	for (i = 0; i < 5; i++)
////	{
////		printf("%d", arr[i]);
////	}
////	
////
////
////
////	
////	return 0;
////
////	
////}
////
//
//
////#include <stdio.h> 
////int foo(int nx)
////{
////    nx = nx - 1;
////    return 2 * nx;
////}
////
////int main(void)
////{
////    int nx = 5, ny;
////
////    ny = foo(nx);
////
////    printf("nx = %d, ny = %d\n", nx, ny);
////
////    return 0;
////}
//
//
//
////#include <stdio.h> 
////double square(double x) {
////    printf("1 ");
////    return x * x;
////}
////
////double cube(double x) {
////    printf("2 ");
////    return x * square(x);
////}
////
////double pi(double x) {
////    printf("3 ");
////    return 3.14 * x;
////}
////
////double sphere(double r) {
////    printf("4 ");
////    return 4.0 / 3.0 * pi(cube(r));
////}
////
////int main(void) {
////    double radius = 1.5;
////    double volume;
////
////    volume = sphere(radius);
////    return 0;
////}
//
//
//
//
////#include <stdio.h> 
////int factorial(int n)
////{
////    if (n == 0) return 1;
////    return n * factorial(n - 1);
////}
////
////int main(void)
////{
////    printf("%d\n", factorial(5));
////    return 0;
////}
//
//
//
//
////lab3-1
////#include <stdio.h>
////int sum_of_3(int x, int y)
////{
////	int s = 0, i;
////	for (i = x; i <= y; i++)
////	{
////		if(i%3==0) s=s+i;
////	}
////	return s;
////
////}
////
////int main(void)
////{
////	int b, e;
////	scanf("%d%d", &b, &e);
////
////	printf("sum == %d\n", sum_of_3(b, e));
////	return 0;
////}
//
//
//
//lab3-2
//#include <stdio.h> 
//
//#define GCD(a,b)	euclid(a,b)
//
//
//
///* Get and return the LCM (Least Common Multiples) of integers a and b */
//int LCM(int a, int b) {
//	// Enter your code here, You can change the return statement. 
//	return a*b/euclid(a,b);
//}
//
///* If the GCD of integers a and b is 1, a and b are called co-prime or relatively prime
// * Determine if a and b are co-prime or relatively prime.
// * Return 1 if they are co-prime, otherwise return 0 */
//int isCoprime(int a, int b) {
//	// Enter your code here, You can change the return statement.
//	if (euclid(a, b) == 1) return 1;
//	else return 0;
//}
//
///* Get and return the GCD of integers a and b based on the Euclidean algorithm */
///* Note that recursive call is not allowed in this function */
//int euclid(int a, int b) {
//	// Enter your code here. You can change the return statement.
//	int temp;
//	if (b < a)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (b == 0) return a;
//	while (a % b != 0)
//	{
//		temp = a;
//		a = b;
//		b = temp % b;
//	}
//	return b;
//}
//
//
//
//int main(void) {
//	int a, b;
//	printf("Enter two positive integers\n");
//	scanf("%d%d", &a, &b);
//	printf("GCD of (%d, %d) is %d\n", a, b, GCD(a, b));
//	printf("LCM of (%d, %d) is %d\n", a, b, LCM(a, b));
//	printf("(%d, %d) is co-prime (True-1 / False-0) : %d\n", a, b, isCoprime(a, b));
//	return 0;
//}
//
//
//
//
////lab3-3
////#include <stdio.h> 
////
////// implement your code
////
////int count_digits(int n)
////{
////	int count = 0;
////	while (n != 0)
////	{
////		n = n / 10;
////		count = count + 1;
////	}
////
////	return count;
////}
////
////int sum_digits(int n)
////{
////	int sum = 0;
////	
////	while (n > 0)
////	{
////		sum = sum + n % 10;
////		n = n / 10;
////	}
////	return sum;
////}
////
////int analyze_digits(int n) {
////	return count_digits(n) + sum_digits(n);
////}
////
////int main() {
////	int num = 0;
////
////	scanf("%d", &num);
////	printf("Result: %d", analyze_digits(num));
////
////
////	return 0;
////}
//
//
//
////lab3-4
////#include <stdio.h>
////
////int is_optimized_prime(int n);
////
////int main(void)
////{
////    int a;
////    scanf("%d", &a);
////    if (is_optimized_prime(a))
////        printf("a prime\n");
////    else
////        printf("not a prime\n");
////    return 0;
////}
////
////int is_optimized_prime(int n)
////{
////    // implement your code
////    int k = n % 10;
////    int sum = 0;
////    int temp = n;
////
////    while (temp > 0)
////    {
////        sum = sum + temp % 10;
////        temp = temp / 10;
////    }
////
////    if (n == 2 || n == 5 || n == 3) return 1;
////    if (k == 0 || k == 2 || k == 4 || k == 5 || k == 6 || k == 8) return 0;
////    if (sum % 3 == 0) return 0;
//// 
////    for (int i = 2; i * i <= n; i++)
////    {
////        if (n % i == 0) return 0;
////    }
////
////    return 1;
////
////}
//
//
//
//
//lab3-5
//#include <stdio.h> 
//void hanoi_tower(int n, int ox, int tx, int mx) {
//    if (n < 1) {
//        printf("Error: n >= 1\n");
//    }
//    else if (n == 1) {
//        printf("%d -> %d\n", ox, tx);
//    }
//    else {
//        //Enter Your Code Here
//        // 원반 n-1개를 보조 기둥(aux)으로 옮기고
//        hanoi_tower(n - 1, ox, mx, tx);
//
//        // 가장 큰 원반을 목표 기둥(to)으로 옮김
//        printf("%d -> %d\n", ox, tx);
//
//        // 보조 기둥(aux)에 있는 원반 n-1개를 목표 기둥(to)으로 옮김
//        hanoi_tower(n - 1, mx, tx, ox);
//
//    }
//}
//
//int main(void) {
//    int n;
//
//    printf("Enter the height of the tower :\n");
//    scanf("%d", &n);
//    hanoi_tower(n, 1, 3, 2);
//
//    return 0;
//}
//
//
////lab4-1
//#include <stdio.h>
//
//// You can add your own functions if necessary
//
//void capitalize_first_character(char str[1000]) {
//	// Enter your code here	
//	if (str[0] != ' ' && str[0] >= 'a' && str[0] <= 'z') str[0] = str[0] - 32;
//	for (int i = 1; str[i] != '\0'; i++)
//	{
//		if (str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z') str[i] = str[i] - 32;
//	}
//	printf("%s", str);
//	return;
//}
//
//int main(void) {
//	char str[1000];
//
//	gets(str);
//
//	capitalize_first_character(str);
//	return 0;
//}
//
//
//
//lab4-2
//#include <stdio.h>
//
//#define INT_BITS 32
//
//void print_binary(unsigned int n) {
//	// Enter your Code Here
//	//int binary[INT_BITS]; //선언만 할 경우 배열은 전부 0으로 초기화됨
//	//int index = 0;
//	//while (n != 0) 
//	//{
//	//	binary[index] = n % 2;
//	//	n = n / 2;
//	//	index++;
//
//	//}
//	//for (int j = 0; j < INT_BITS - index; j++)
//	//{
//	//	printf("%d", 0);
//	//}
//	//for (int i = index - 1; i >= 0; i--)
//	//{
//	//	printf("%d", binary[i]);
//	//}
//	//return;
//	int bit;
//	int power;
//	for (power = INT_BITS - 1; power >= 0; power--) {
//		bit = (n >> power) & 1;
//		printf("%d", bit);
//	}
//
//}
//
//int main(void) {
//	unsigned int num;
//
//	scanf("%d", &num);
//	print_binary(num);
//
//	return 0;
//}
//
//
//
//
////lab4-3
//#include <stdio.h>
///**
//* @brief : prints a floating-point number as an argument in the IEEE 754 binary format.
//* @return: The function does not return any value (void return type).
//* @param : num (type: float): The floating-point number to be converted to its IEEE 754 representation.
//*/
//void print_ieee754(float num) {
//    // implement your code
//    unsigned int i;
//    unsigned int binary = 0;
//
//    // 부호 비트
//    if (num < 0) {
//        binary = 1 << 31;
//        num = -num;
//    }
//    // 음수가 들어왔을 경우 첫 비트를 1로 지정하고 들어온 수를 양수로 변환 
//    int exponent = 0;
//    // 지수의 숫자를 구할 변수 
//     // 정규화
//    while (num >= 2.0) {
//        num /= 2.0;
//        exponent++;
//    }
//    // 정수부가 2보다 큰 경우 exponent가 양수이고, 이때의 exponent의 크기 구함 
//    while (num < 1.0) {
//        num *= 2.0;
//        exponent--;
//    }
//    // 정수부가 1보다 작은 경우 exponent가 음수일 수 있으므로 exponent의 크기 구함
//    // 정수부가 1인 경우 exponent가 0이므로 무시함. 
//     // 지수 부분
//    exponent += 127;
//    binary |= exponent << 23;
//    // IEEE 754 규약에 따라, exponent에 127을 더하여 비트로 변환함. 이때 binary의 앞 2~9자리 비트는 모두 0이므로 
//    // exponent와의 or 연산을 통해 자리에 따른 0, 1 여부를 구함. 
//
//    // 가수 부분
//    float fraction = num - 1.0; // 위의 while문에 의해 num은 반드시 1.01010~(2) 형태이고, IEEE 754 규약에 의하면 
//    //맨 앞 비트 1은 제외하므로 1을 뺌 
//    for (i = 0; i < 23; i++) {
//        fraction *= 2; // 가수부를 구하기 위해 2를 곱함 
//        if (fraction >= 1.0) {
//            binary |= 1 << (22 - i); //이때 1 이상일 경우 IEEE 754 규약에 의해 해당 자리수를 1로 설정함. 
//            fraction -= 1.0; // 그리고 1을 제거함. 
//        }
//    }
//
//    // 이진 형태 출력
//    for (i = 0; i < 32; i++) {
//        printf("%d", (binary >> (31 - i)) & 1); // 이진 형태로 완성된 수를 출력함. 
//        //        if (i == 0 || i == 8) {
//        //            printf(" ");
//        //        }
//    }
//    //    printf("\n");
//
//}
//
//int main() {
//    float num;
//
//    scanf("%f", &num);
//    print_ieee754(num);
//
//    return 0;
//}
//
////블랭크에 이거 넣어도 되긴함. 다만 포인터를 씀~
////char arr_p[50]={};
////int* b = (int*)&num;
////int n = *b;
////for (int i = 0; i < 32; i++) {
////    int nn = n & 0x01;
////    n >>= 1;
////    arr_p[31 - i] = nn + '0';
////}
////printf("%s\n", arr_p);
//
//
////코드를 자세히 설명하겠습니다.
////
////먼저, 입력한 부동 소수점 숫자를 float num에 저장합니다.
////binary 변수는 IEEE 754 형식으로 숫자를 표현할 때 사용할 32비트 이진 표현을 저장하는 데 사용됩니다.
//// binary 변수를 초기화합니다.
////만약 입력한 숫자 num이 음수인 경우, 부호 비트를 설정하고 num을 양수로 변경합니다.
////정규화 과정을 통해 num을 1보다 크거나 같고 2 미만의 숫자로 만듭니다.
//// 이를 위해 exponent 변수를 사용하여 지수 부분을 계산합니다.
//// IEEE 754 표준에서는 지수를 127을 더한 값을 사용합니다.binary에 지수 부분을 저장합니다.
////나머지 부분인 가수 부분을 계산합니다.가수 부분은 num에서 1을 빼고 2를 곱하면서 비트를 설정합니다.
////이진 형태로 출력하기 위해 binary의 비트를 출력합니다.각 비트는 binary 값을 2진수로 변환하여 출력됩니다.
////이 코드는 주어진 숫자를 IEEE 754 표준에 따라 부호, 지수 및 가수로 나누어 처리하고, 이진 형태로 출력합니다.
//// 이것은 복잡한 수학적 계산과 비트 조작을 필요로 하므로 이 코드가 어떻게 작동하는지 이해하기에 시간이 걸릴 수 있습니다.
//
//
//
//
//
//
//
//
//
////lab4-4
//#include <stdio.h> 
//int main(void) {
//	int i;		// index
//	int num = 0, sum = 0;	// number
//	char csv[256];
//
//	scanf("%s", csv);
//
//	for (i = 0; csv[i] != '\0'; i++) {
//		// Enter your code here
//		if (csv[i] != ',')
//		{
//			num = num * 10 + (csv[i] - '0');
//		}
//		else {
//			sum = sum + num;
//			num = 0;
//		}
//
//	}
//	sum += num;
//	printf("Sum of all values in CSV[%s] : %d", csv, sum);
//
//	return 0;
//}
//
//
////lab4-5
//#include <stdio.h> 
///**
//* @brief : determine whether n is a palindromic number or not
//* @return: 1 if n is a palindromic number, 0 otherwise
//* @param : n - a non-negative integer to be checked
//*/
//int is_palindromic_number(unsigned int n) {
//	// Enter your code
//	int originalnum = n;
//	int rev = 0;//역수 저장 변수
//
//	while (n > 0) {
//		int r = n % 10; //n의 마지막 숫자를 r에 젖ㅇ
//		rev = rev * 10 + r;
//		n = n / 10;
//
//	}
//	return(originalnum == rev);
//}
//
//int main(void) {
//	unsigned int num;
//
//	scanf("%d", &num);
//
//	if (is_palindromic_number(num))
//		printf("is a palindromic number\n");
//	else
//		printf("is not a palindromic number\n");
//
//	return 0;
//}




//////lab 5-1
//#include <stdio.h> 
//#include <stdlib.h> 
//#include <time.h>
///**
//* @brief : generate and return a random digit in 0~9
//* @return : a digit in 0~9
//* @param	 : none
//*/
//int generate_a_digit(void) {
//	return (rand() % 10);
//}
//
///**
//* @brief : generate a 3-digits target integer for the puzzle
//* @return : return an integer with 3 different digits in 0~9
//* @param : none
//*/
//int generate_target_number_approach2(void) {
//	// Implement here
//	int returnnum =0 ; 
//	int d[3];
//	srand(time(0));
//	d[0] = generate_a_digit();
//	d[1] = generate_a_digit();
//
//	while (d[0] == d[1]) {
//		d[1] = generate_a_digit();
//	}
//	d[2] = generate_a_digit();
//
//	while (d[0] == d[2] || d[1] == d[2]) {
//		d[2] = generate_a_digit();
//	}
//	
//	for (int i = 0; i < 3; i++) {
//		returnnum = returnnum * 10 + d[i];
//	}
//	
//	return returnnum;
//}
//
////근데 왜 이렇게 하니까 안되고
//
//int returnnum = 0;
//int d[3];
//while (1) {
//	for (int i = 0; i < 3; i++) {
//		d[i] = generate_a_digit();
//	}
//	if (d[0] != d[1] && d[0] != d[2] && d[1] != d[2]) break;
//}
//
//for (int i = 0; i < 3; i++) {
//	returnnum = returnnum * 10 + d[i];
//}
//
//return returnnum;
//
////이렇게 하니까 되지...
//
////int main(void) {
////	printf("%d", generate_target_number_approach2());
////}
//
//
//
//
//////lab 5-2
//#include <stdio.h> 
///**
//* @brief : compare the guessed number with the target and return the match results
//* @return : return 2-digits number, 1st digit stands for the number of strikes and 2nd digit stands for the number of balls. For example 11 means 1 strike 1 ball
//* @param	 : 	target - 3-digits target integer
//			guessed - 3-digits guessed integer
//*/
//int get_match_result(int target, int guessed) {
//	int n_strike = 0, n_ball = 0;
//
//	// Implement here
//	int i, j, k;
//	int target_digits[3];
//	int guessed_digits[3];
//
//	for (i = 2; i >= 0; i--) {
//		target_digits[i] = target % 10;
//		target = target / 10;
//		guessed_digits[i] = guessed % 10;
//		guessed = guessed / 10;
//	}
//	for (j = 0; j < 3; j++) {
//		for (k = 0; k < 3; k++) {
//			if (target_digits[j] == guessed_digits[k]) {
//				if (j == k) n_strike++;
//				else n_ball++;
//			}
//		}
//	}
//
//
//
//	return (n_strike * 10 + n_ball);
//}
//
//
//
//
////lab 5-3
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define ATTEMPT_LIMIT	9
//
//// Function Prototypes
//int generate_target_number(void);
//int guess_number(void);
//int get_match_result(int target, int guessed);
//void receive_match_result(int result, int guessed);
//
//int is_different_digits(int num);
//int generate_a_digit(void);
//
////implement generate_target_number()
//int generate_target_number(void) {
//	int returnnum = 0;
//	int d[3];
//	srand(time(0));
//	d[0] = generate_a_digit();
//	d[1] = generate_a_digit();
//
//	while (d[0] == d[1]) {
//		d[1] = generate_a_digit();
//	}
//	d[2] = generate_a_digit();
//
//	while (d[0] == d[2] || d[1] == d[2]) {
//		d[2] = generate_a_digit();
//	}
//
//	for (int i = 0; i < 3; i++) {
//		returnnum = returnnum * 10 + d[i];
//	}
//
//	return returnnum;
//}
//
//// Implement get_match_result()
///**
//* @brief : compare the guessed number with the target and return the match results
//* @return : return 2-digits number, 1st digit stands for the number of strikes and 2nd digit stands for the number of balls. For example 11 means 1 strike 1 ball
//* @param	 : 	target - 3-digits target integer
//			guessed - 3-digits guessed integer
//*/
//int get_match_result(int target, int guessed) {
//	int n_strike = 0, n_ball = 0;
//
//	// Implement here
//	int i, j, k;
//	int target_digits[3];
//	int guessed_digits[3];
//
//	for (i = 2; i >= 0; i--) {
//		target_digits[i] = target % 10;
//		target = target / 10;
//		guessed_digits[i] = guessed % 10;
//		guessed = guessed / 10;
//	}
//	for (j = 0; j < 3; j++) {
//		for (k = 0; k < 3; k++) {
//			if (target_digits[j] == guessed_digits[k]) {
//				if (j == k) n_strike++;
//				else n_ball++;
//			}
//		}
//	}
//
//
//
//	return (n_strike * 10 + n_ball);
//}


//
//int main(void) {
//	int n_attempt = 0;
//	int target_num, guessed_num, match_result;
//
//	setvbuf(stdout, NULL, _IONBF, 0);
//
//	srand(time(0));
//	target_num = generate_target_number();
//	do {
//		printf("Attempt [%d/%d] ", ++n_attempt, ATTEMPT_LIMIT);
//		guessed_num = guess_number();
//		match_result = get_match_result(target_num, guessed_num);
//		receive_match_result(match_result, guessed_num);
//	} while (n_attempt <= ATTEMPT_LIMIT && match_result != 30);
//
//	if (match_result == 30)
//		printf("Congratulation!!! You Win\n");
//	else
//		printf("Nice Try!!! But You Lose, The target number is %d\n", target_num);
//	return 0;
//}
//
///**
//* @brief : check digit duplication
//* @return : return true if all digits of the number are different, false otherwise.
//* @param	 : 	num a 3-digits number to be checked for digit duplication.
//*/
//int is_different_digits(int num) {
//	int digits[3];
//	int is_different = 1;
//
//	digits[0] = num % 10;
//	digits[1] = (num / 10) % 10;
//	digits[2] = (num / 100) % 10;
//	if ((digits[0] == digits[1]) ||
//		(digits[0] == digits[2]) ||
//		(digits[1] == digits[2]))
//		is_different = 0;
//
//	return is_different;
//}
//
///**
//* @brief : generate and return a random digit in 0~9
//* @return : a digit in 0~9
//* @param	 : none
//*/
//int generate_a_digit(void) {
//	return (rand() % 10);
//}
//
//
///**
//* @brief : generate a 3-digits target integer for the puzzle
//* @return : return an integer with 3 different digits in 0~9
//* @param : none
//*/
//
//
//
//
//
//
///**
//* @brief : get a guessed number from the Attacker
//* @return : return an integer with 3 different digits in 0~9
//* @param	 : none
//*/
//int guess_number(void) {
//	int num;
//	while (1) {
//		printf("Enter your guess : ");
//		scanf("%d", &num);
//		if (num < 1000 && is_different_digits(num)) break;
//		printf("Input Error !!! Wrong number format\n");
//	}
//	return num;
//}
//
///**
//* @brief : notify the match result of the guessed number to the Attacker
//* @return : none
//* @param	 : 	result - 2-digits number for the match result, 1st digit stands for the number of strikes and 2nd digit stands for the number of balls.
//			guessed - 3-digits guessed integer
//*/
//void receive_match_result(int result, int guessed) {
//	int n_strike = result / 10, n_ball = result % 10;
//	switch (result) {
//	case 30: printf("Congratulation !!!\n");
//		break;
//	case 0: printf("Oops !!!\n");
//		break;
//	default: printf("Nice try !!!\n");
//	}
//	printf("Your guess %d is [%d] strikes and [%d] balls\n",
//		guessed, n_strike, n_ball);
//}




//lab 5-4
//#include <stdio.h>
//#include <stdbool.h>
//
//bool isCalibrationMode = false;
//
//void beginCalibration() {
//    isCalibrationMode = true;
//}
//
//void endCalibration() {
//    isCalibrationMode = false;
//}
//
//void performRadiation(int dose) {
//    printf("Radiation performed with dose: %d\n", dose);
//}
//
//// implement your code
//void safeRadiation(int dose) {
//    if (isCalibrationMode == true) { //트루 생략해도됨
//        printf("Error\n");
//    }
//    else if (dose <= 0 || dose > 10) {
//        printf("Error\n");
//    }
//    else {
//        performRadiation(dose);
//    }
//}

////얘도 밑에꺼처럼 해야지 되던데
//if (isCalibrationMode == false && (dose >= 1 && dose <= 10)) {
//	printf("Radiation performed with dose: %d", dose);
//}
//else {
//	printf("Error: Unsafe radiation parameters.\n");
//}
//
//int main() {
//    // A technician calibrated the machine but forgot to switch back to treatment mode.
//    beginCalibration();
//    int calibrationDose = 30;
//    performRadiation(calibrationDose);
//
//    // The safe range for treatment is (0, 10)
//    int patientDose = 15;
//    // This should trigger the error message, protecting the patient
//    safeRadiation(patientDose);
//
//    // Switching back to treatment mode and testing again
//    endCalibration();
//
//    // This should successfully administer radiation
//    patientDose = 5;
//    safeRadiation(patientDose); 
//
//    return 0;
//}
//
//
//
//
//
//
////lab 5-5 얘는 족보보고함
//#include <stdio.h>
//#define MAX_NUMBER	10000
//int not_selfnum(int n) {
//	int sum = n;
//	if (n / 10 == 0)
//		return n + n;
//	else {
//		while (1) {
//			if (n == 0) {
//				return sum;
//				break;
//			}
//			sum += n % 10;
//			n /= 10;
//		}
//	}
//}
//
//int main(void) {
//
//	int arr[MAX_NUMBER] = { 0, };
//
//	for (int i = 1; i < MAX_NUMBER; i++) {
//		int result = not_selfnum(i);
//		if (result < 10000)
//			arr[result] = 1;
//	}
//
//	for (int j = 1; j < MAX_NUMBER; j++) {
//		if (arr[j] == 0)
//			printf("%d\n", j);
//	}
//
//	return 0;
//}





//lab6-1
//#include <stdio.h>
//
//char* mystrcat(char* dest, char* src) {
//	char* original_dest = dest; 
//	//두번째로 mystrcat 수행하려면 mystrcat(str, " World !!! ...")을 해서 나온 결괏값의 
//	// 첫번째 주소가 다시 필요하기 때문!
//	while(*dest) { //for(; *dest; dest++) 
//		dest++;
//	}
//	while (*src != '\0') {
//		*dest++ = *src++;
//	}
//	*dest = '\0';
//	return original_dest;
//}
//
//int main(void) {
//	char str[256] = "Hello ";
//	char* pstr2 = "Good Bye World !!!";
//
//	printf("%s\n", mystrcat(mystrcat(str, " World !!! ..."), pstr2));
// //%s 형식 지정자는 문자열의 시작 주소를 인자로 받고, 
// //해당 주소부터 시작하여 널 종료 문자('\0')를 만날 때까지 연속된 문자들을 출력
//
//	return 0;
//}
//



//lab6-2
#include <stdio.h>
#include <string.h>

void swap(char* x, char* y) {
	char temp = *x;
	*x = *y;
	*y = temp;
}

void print_all_permutations(char* str) {
	static int end = 0;
	int len = strlen(str); //strlen은 널 문자를 포함하지 않은 개수를 반환
	if (end == len-1) { //end가 문자열의 마지막 문자에 도달했는지를 확인하는 것. len -1을 해주는 이유는 인덱스값이기 떄문.
		puts(str);
	}
//puts에 포인터변수 str을 전달하면 str(==문자열시작주소) 부터 널 문자가 나올 때 까지를 전부 출력한다. 
//법칙이다.
//주소를 출력하고 싶다면, printf("%p\n", (void*)str);와 같이 포맷 스펙시파이어 %p를 사용해야 함.
	else {
		for (int i = end; i < len; i++) {
			swap((str + end), (str + i));
			end++;
			print_all_permutations(str);
			end--;
			swap((str + end), (str + i));
		}

	}
	return;
}

int main(void) {
	char str[256] = "ABC";

	print_all_permutations(str);
	return 0;
}



//lab6-3
#include <stdio.h>

char* mystrtok1(char* str, char delim) {
	static char* psave = NULL; 
	//psave에는 주소만 들어갈 수 있지만 
	//포인터가 아무 것도 가리키지 않음을 나타내고 싶을 땐 0이나 NULL을 써서 초기화가 가능하다!
    if (str != NULL) {
        psave = str;  // 새로운 문자열로 시작
    }


    if (psave == NULL) {
        return NULL;  // 더 이상 분할할 문자열이 없음
    }

    // 토큰의 시작을 찾음
    char* start = psave;

    // 구분자를 찾거나 문자열의 끝에 도달할 때까지 이동
    while (*psave != delim && *psave != '\0') {
        psave++;
    }

    // 구분자를 널 문자로 대체하고, psave를 다음 문자로 이동
    if (*psave != '\0') {
        *psave = '\0';
        psave++;
    }
    else {
        psave = NULL;  // 문자열의 끝에 도달. 다음에 또 함수를 사용하기 위해 필요한 코드.
    }

    return start;  // 현재 토큰 반환
}


int main(void) {
	char pstr[256] = { ",123,hello,34 56, Good.,Bye" };
	char* ptoken;
	char delim = ',';
	int test = 0;

	ptoken = mystrtok1(pstr, delim);

	while (ptoken) {
		printf("%s\n", ptoken); //%s성질 떄문! 배열 첫주소넣어주면 널문자 전까지 출력.
		ptoken = mystrtok1(0, delim);
	}

	return 0;
}
//'\0'은 문자열과 관련된 컨텍스트에서 사용되어 문자열의 끝을 나타냅니다.
//NULL은 포인터와 관련된 컨텍스트에서 사용되어 포인터가 아무것도 가리키지 않음을 나타냅니다.




//lab6-4







//lab6-5
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <string.h>
#include <limits.h>
#include <stdint.h>

// Fix issues related to pointer operations

double calculateAverage(int* values, size_t count) {
	double sum = 0;
	for (size_t i = 0; i < count; i++) { // <= -> <
		sum += values[i];
	}
	return sum / count;
}

void updateTemperature(float* temp) {
	if (temp) *temp = 25.0; // if (temp) 넣음 -> null 체크하는 if 문
}

int* allocateMemory(size_t size) {
	int* ptr = (int*)malloc(size * sizeof(int)); // malloc 앞에 int* 붙이기
	if (ptr) {
		for (size_t i = 0; i < size; ++i) // int -> size_t
			ptr[i] = 0;
	}
	else return;
	return ptr;
}
//근데 랩에는 이 함수 자체가 없었음.

void reverseString(char* str) {
	if (str == NULL) return; // str이 NULL인 경우에 대한 처리

	size_t len = strlen(str);
	if (len <= 1) return;
	for (size_t i = 0; i < len / 2; i++) {
		char temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}

// The main function is intentionally hidden.