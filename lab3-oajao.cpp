//Oyedola Ajao
//LAB3 - Numeric Errors
//09-28-2017

#include <iostream>

using namespace std;

int main()
{	
	//computing regular sum - using type short
	int n;

	cout << "Input an integer : " << endl;

	cin >> n;

	short sumshort(0);

	for (short i = 1; i <= n; i++)
	{
		sumshort += i;
	}

	cout << "The sum is : " << sumshort << endl << endl;
	//computing regular sum - using type long
	cout << "Input an integer : " << endl;

	cin >> n;

	long sum(0);

	for (long i = 1; i <= n; i++)
	{
		sum += i;
	}

	cout << "The sum is : " << sum << endl << endl;

	//computing n! - using type long for consecutive integers and type float for the product.

	cout << "Input an integer : " << endl;

	cin >> n;

	float result(1);

	for (long j = 1; j <= n; ++j)
	{
		result *= j;
	}

	cout << "The result is : " << result << endl << endl;

	//computing n! - using type double to store the result

	cout << "Input an integer : " << endl;

	cin >> n;

	double result2(1);

	for (long j = 1; j <= n; ++j)
	{
		result2 *= j;
	}

	cout << "The result is : " << result2 << endl << endl;

	//computing "strange" floating point number behavior - adding up n copies of the ratio 1 / n. 

	cout << "Input an integer : " << endl;

	cin >> n;

	double outcome(1);

	float ratio = (1 / n);

	for (long j = 1; j < n; ++j)
	{
		outcome = (ratio * n);
	}

	(outcome - 1);

	cout << "The outcome is : " << outcome << endl << endl;

	//computing the puzzle - with i as type float

	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}

	cout << endl;
	//computing the puzzle - changing i to type double

	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}

	return 0;
}

//2. You can detect an overflow by using very large numbers and seeing the program produce inaccurate results. When n = 300, the prgram produces a negative value of -20386, which is an overflow.

//3. The value of n that causes an overflow with type long is, n = 90000.The sum returns  -244922296.

//4. An overflow is detected when a value that was inputted returns an inaccurate result. The value of n that causes an overflow is n = 1000, which produces inf as a result.

//5. After using type double to store the result and using n = 6000, there was an overflow due to the output resulting as inf.

//6. The loop continues to approach 1 depending on the input, thus when the result is outputted and subtracted by 1 lastly, the answer will be 0. No matter the input, the result will continuously approach zero. However, when n = 800000000000000000000000000000000000000000000000000, the end result is 2, which would be considered an overflow.

//7. The numeric error occurs when 4.4 is displayed. This should not happen because the loop indicates that i < 4.4, not i <= 4.4. More specifically, this error is occuring because type float is not as accurate (rather than 0.2 being added, a less accurate value of 0.2 is being added each time). As a result, 4.4 ends up being displayed.

//8. Using type double (rather than float) fixed this issue because type double is more accurate than type float. Thus, the results will also become more accurate and the correct output will then be displayed (previous error of 4.4 being displayed will not show anymore).