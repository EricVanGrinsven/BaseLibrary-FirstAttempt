// WARNING: DO NOT PUT NUMBERS OUTSIDE OF THE BASE
//EX: 9 IS NOT A DIGIT IN OCTAL
int baseChange( int newBase, int oldBase, int num );
int convertToDecimal ( int base, int num);
int convertFromDecimal( int newBase, int num);
int decimal = 10;
int baseChange( int newBase, int oldBase, int num ) {
	int decimalNum = convertToDecimal(oldBase, num);
	return convertFromDecimal( newBase, decimalNum);
	
}
int convertToDecimal ( int base, int num) {
	int newNum = 0;
	int weight = 1;
	while (num > 0) {
		
		newNum += (num % decimal) * weight;
		weight *= base;	
		num = num/decimal;
	}
	return newNum;
}
int convertFromDecimal( int newBase, int num) {
    int dec = 1;
    int newNum = 0;
	bool isNegative = false;
	// Do 2's complement if the number is negative
	if (num < 0) {
		num *= -1;
		isNegative = true;		
	}
	while (num > 0) {           
		int remainder = num % newBase;
		num = num/newBase;
		newNum +=remainder*dec; 
		dec = dec*decimal;      
	}
	if (isNegative == true) newNum *= -1;
    return newNum;	
}
