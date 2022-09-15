//#include<iostream>
//#include<math.h>
//using namespace std;
//int main()
//{
//	float payment, arate, N, loan,mrate;
//	cout << "Enter the loan\n";
//	cin >> loan;
//	cout << "Enter the rate\n";
//	cin >> arate;
//	cout << "Enter the no of payments\n";
//	cin >> N;
//	mrate = arate / 12;
//	payment = (((mrate/100) * pow((1 + (mrate/100)), N)) / (pow((1 + (mrate/100)), N) - 1))*loan ;
//	cout << "loan Amount:\n" << loan;
//	cout << "\nMonthly interest rate:\n" << mrate;
//	cout << "\nMonthly Payments:\n" << payment;
//	cout << "\nAmount Paid back:\n" << payment * N;
//	cout << "\nInterest paid:\n" << payment * N - loan;
//
//	system("pause");
//	return 0;
//}