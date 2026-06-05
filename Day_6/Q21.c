//Write a program to Convert decimal to binary.

int main() {
    int num, binary[32], i = 0;

    printf("Enter the decimal number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0");
        return 0;
    }

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}
