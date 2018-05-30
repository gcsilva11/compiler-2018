int a_global;
double b_global;
char c_global;
short d_global;

//20 pontos
int main(void){
	int ass = assignment();
	putchars();
	return 0;
}

// 60 pontos
int assignment(void){
	int a, b, c;
	int d;
	a = b;
	char aa, bb;
	aa = bb;
	short aaa, bbb;
	aaa = bbb;
	double aaaa, bbbb;
	aaaa = bbbb;
	a = 1;
	b = 1;
	c = 1;
	d = 1;
	aa = 'A';
	bb = 'z';
	aaa = 1;
	bbb = 1;
	aaaa = 1.0;
	bbbb = 1.0;
	return d;
}

char chario(char a){
	return a;
}

// 60 pontos
int unary_minus(int a, int bbb, char ccc, short ddd){
	int b = -a;
	int c = -b;
	int d;
	d = -2;
	d = -b;
	return d;
}

// 60 - 100 pontos
void putchars(void){
	// 60 pontos
	char _11 = 'A';
	int _12 = 65;
	short _13 = 65;
	double _14 = 65.0;
	putchar('a');
	putchar(97);
	putchar(65.0);
	putchar(_11);
	putchar(_12);
	putchar(_13);
	putchar(_14);
	putchar('\n');
	putchar('\t');
	putchar('\n');
	putchar('\'');
	putchar('\n');
	putchar('\"');
	putchar('\n');
	putchar('\\');
	putchar('\n');
	// 100 pontos
	putchar('\123');
	putchar('\n');
	putchar(78);
	putchar('\116');
	putchar('\n');
	putchar('\10');
	putchar('\n');
	putchar('\65');
	putchar('\n');
    return;
}

void storing(void){
	int a, b, c;
	a = 1 + 2;
	a = b - c;
	a = 50 + c;
	double d = b + c;
	a = d + 1;
	char oi= 'a' + 2;
	return;
}