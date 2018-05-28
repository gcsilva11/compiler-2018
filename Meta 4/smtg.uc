int sum(int a,int b){
	int c;
	c = a + b;
	return c;
}

void _1(void){
	return;
}

int _2(void){
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

int main(void){
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
	putchar('\123');
    return 0;
}