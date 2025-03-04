//Nguyen Bao Lam - SE1711
int roots(double a, double b, double c, double *x1, double *x2){
    double D, tx1, tx2;
    D = b * b - 4 * a * c;//Tinh denta
    if (D < 0) // denta <0
	return 0;
    else if (D == 0) { //denta = 0 nghiem kep
        *x1 = *x2 = -b / (2 * a);
        return 1;
    }
    else {              //2 nghiem pb
        tx1 = (-b + sqrt(D)) / (2 * a);
        tx2 = (-b - sqrt(D)) / (2 * a);
        *x1 = tx1;
        *x2 = tx2;
        return 2;
    }
}
int main(){
    double a, b, c, counter;
    double x1, x2;
    char choice;

    do {
        printf("1. Input the coefficients of the quadratic equation: \n");
        printf("Enter a, b, c: ");
        scanf("%lf %lf %lf", &a, &b, &c);
        counter = roots(a, b, c, &x1, &x2);
        printf("2. Input the coefficients of the quadratic equation: \n");
        if(counter == 0){
		printf("There are no real root\n");
		}else if(counter == 1) {
		printf("There is one real root: x0 = %f\n", x1);
		}else {
		printf("There are 2 real roots: x1 = %f, x2 = %f\n", x1, x2);
        }
        printf("Another run (y/n) ?");
        scanf("%15s", &choice);
    } while(choice == 'y');

    return 1;
}
