//create a link list , display , insert a new node , delete a node , exit , these are choices 
#include <stdio.h>
int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Create Linked List\n");
        printf("2. Display Linked List\n");
        printf("3. Insert a New Node\n");
        printf("4. Delete a Node\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

if (choice == 1) {
    printf("Creating Linked List...\n");
}
else if (choice == 2) {
    printf("Displaying Linked List...\n");
}
else if (choice == 3) {
    printf("Inserting a New Node...\n");
    
}
else if (choice == 4) {
    printf("Deleting a Node...\n");
}
else if (choice == 5) {
    printf("Exiting\n");
}
else {
    printf("Invalid choice! Please try again.\n");
}

    } while(choice != 5);
    return 0;
}