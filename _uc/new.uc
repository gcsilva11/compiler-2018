int printf (const char *, ...);
union U5 {
short f1;
int f3:13;
};
const union U5 a = { 30155 };
int
main () {
printf ("%d\n", a.f1);
printf ("%d\n", a.f3);
ret