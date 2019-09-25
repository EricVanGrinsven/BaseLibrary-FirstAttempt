int divide( int num1, int base1, int num2, int base2, int base3 ) {
	// Convert both numbers to decimal
	num1 = convertToDecimal( base1, num1 );
	num2 = convertToDecimal( base2, num2 );
	// Add the numbers, then convert to base3
	int num3 = num1 / num2;
	return convertFromDecimal( base3, num3 );
}
//Adding numbers of the same base, and keeping them in the same base
//Adding numbers of the same base, and keeping them in the same base
int divide( int num1, int num2, int base ) {
	// Convert both numbers to decimal
	num1 = convertToDecimal( base, num1 );
	num2 = convertToDecimal( base, num2 );
	// Add the numbers, then convert to base3
	int num3 = num1 / num2;
	return convertFromDecimal( base, num3 );
}
