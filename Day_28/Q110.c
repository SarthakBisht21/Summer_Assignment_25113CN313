#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account a[100];
    int n = 0, choice, acc;
    float amt;

    do {
        printf("\n1. Create Account\n2. Deposit\n3. Withdraw\n4. Display\n5. Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter AccNo Name Initial Balance: ");
                scanf("%d %s %f", &a[n].accNo, a[n].name, &a[n].balance);
                n++;
                break;

            case 2:
                printf("Enter AccNo and Amount: ");
                scanf("%d %f", &acc, &amt);
                for(int i=0;i<n;i++)
                    if(a[i].accNo == acc)
                        a[i].balance += amt;
                break;

            case 3:
                printf("Enter AccNo and Amount: ");
                scanf("%d %f", &acc, &amt);
                for(int i=0;i<n;i++)
                    if(a[i].accNo == acc && a[i].balance >= amt)
                        a[i].balance -= amt;
                break;

            case 4:
                for(int i=0;i<n;i++)
                    printf("AccNo:%d Name:%s Balance:%.2f\n",
                        a[i].accNo, a[i].name, a[i].balance);
                break;
        }
    } while(choice != 5);

    return 0;
}