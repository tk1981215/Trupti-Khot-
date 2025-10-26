#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to hold customer data
struct Customer {
    int room_no;
    char name[50];
    char address[100];
    char phone[15];
};

int book_room(struct Customer cs[], int *count) {
    printf("Enter Room Number: ");
    scanf("%d", &cs[*count].room_no);
    printf("Enter Customer Name: ");
    scanf(" %[^
]", cs[*count].name);
    printf("Enter Address: ");
    scanf(" %[^
]", cs[*count].address);
    printf("Enter Phone No.: ");
    scanf(" %s", cs[*count].phone);
    (*count)++;
    printf("Room booked successfully!
");
    return 0;
}

void view_customers(struct Customer cs[], int count) {
    printf("All Customer Records:
");
    for (int i = 0; i < count; i++) {
        printf("
Room No: %d
Name: %s
Address: %s
Phone: %s
",
                cs[i].room_no, cs[i].name, cs[i].address, cs[i].phone);
    }
}

int search_customer(struct Customer cs[], int count, int room_no) {
    for (int i = 0; i < count; i++) {
        if (cs[i].room_no == room_no) {
            printf("Customer found!
Room No: %d
Name: %s
Address: %s
Phone: %s
",
                    cs[i].room_no, cs[i].name, cs[i].address, cs[i].phone);
            return i;
        }
    }
    printf("Customer not found!
");
    return -1;
}

int delete_customer(struct Customer cs[], int *count, int room_no) {
    for (int i = 0; i < *count; i++) {
        if (cs[i].room_no == room_no) {
            for (int j = i; j < *count - 1; j++) {
                cs[j] = cs[j + 1];
            }
            (*count)--;
            printf("Customer deleted successfully!
");
            return 0;
        }
    }
    printf("Customer not found!
");
    return -1;
}

int main() {
    struct Customer cs[100];
    int count = 0, choice, room_no, index;
    while (1) {
        printf("
--- Hotel Management System ---
");
        printf("1. Book a Room
");
        printf("2. View Customer Records
");
        printf("3. Search Customer by Room No.
");
        printf("4. Delete Customer Record
");
        printf("5. Exit
");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                book_room(cs, &count);
                break;
            case 2:
                view_customers(cs, count);
                break;
            case 3:
                printf("Enter Room Number to Search: ");
                scanf("%d", &room_no);
                search_customer(cs, count, room_no);
                break;
            case 4:
                printf("Enter Room Number to Delete: ");
                scanf("%d", &room_no);
                delete_customer(cs, &count, room_no);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice.
");
        }
    }
    return 0;
}
