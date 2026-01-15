#include <stdio.h>
#include <math.h>

int main() {
    int num, composite = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not a composite number");
        return 0;
    }

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            composite = 1;
            break;
        }
    }

    if (composite)
        printf("%d is a Composite number", num);
    else
        printf("%d is NOT a Composite number", num);

    return 0;
}
