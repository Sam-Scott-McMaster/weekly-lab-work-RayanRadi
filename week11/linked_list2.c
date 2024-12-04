#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define N 100

/* The node type contains a next pointer */
struct node {
    char name[N+1];
    int grade;
    struct node *next;
};

/* returns TRUE if head is null (list is empty) */
bool is_empty(struct node *head) {
    return head == NULL;
}

/* prepends a node containing the given name and grade at the head of a list 
 * returns the new head 
 */
struct node *prepend(struct node *head, char *name, int grade) {
    struct node *newnode = malloc(sizeof(struct node));
    if (newnode == NULL) 
        exit(EXIT_FAILURE);

    strcpy(newnode->name, name);
    newnode->grade = grade;
    newnode->next = head;

    return newnode;
}

/* deletes the head of a list. Returns the new head. */
struct node *delete_first(struct node *head) {
    if (head == NULL) 
        return head;
    struct node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

/* destroys a list from head onwards. Returns NULL. */
struct node *destroy_list(struct node *head) {
    while (head != NULL) {
        struct node *temp = head;
        head = head->next;
        free(temp);
    }
    return NULL;
}

/* prints the contents of a list given the head. */
void print_list(struct node *head) {
    if (head == NULL) {
        puts("*** empty list ***");
        return;
    }
    while (head != NULL) {
        printf("%s: %d\n", head->name, head->grade);
        head = head->next;
    }
}

/* counts grades above a given value */
int count(struct node *head, int value) {
    int count = 0;
    struct node *current = head;
    while (current != NULL) {
        if (current->grade > value) {
            count++;
        }
        current = current->next;
    }
    return count;
}

/* appends a node to the end of the list */
struct node *append(struct node *head, char *name, int grade) {
    struct node *new_node = malloc(sizeof(struct node));
    if (new_node == NULL) {
        perror("Failed to allocate memory");
        return head;
    }
    strcpy(new_node->name, name);
    new_node->grade = grade;
    new_node->next = NULL;

    if (head == NULL) {
        return new_node;
    }

    struct node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_node;
    return head;
}

/* reverses the list */
struct node *reverse(struct node *head) {
    struct node *prev = NULL;
    struct node *current = head;
    struct node *next = NULL;

    while (current != NULL) {
        next = current->next;  
        current->next = prev;  
        prev = current;        
        current = next;        
    }

    return prev;
}

int main() {
    struct node *list = NULL;

    puts("\nLIST CREATED");
    print_list(list);

    puts("\nADDING NODES");
    list = prepend(list, "Sam Scott", 99);
    list = prepend(list, "Anne St-Amand", 85);
    list = prepend(list, "Rosa St-Amand", 78);
    list = prepend(list, "Maxime St-Amand", 65);
    print_list(list);

    puts("\nCOUNTING GRADES ABOVE 80");
    printf("Number of grades above 80: %d\n", count(list, 80));

    puts("\nADDING NODE TO END");
    list = append(list, "Chris Smith", 88);
    print_list(list);

    puts("\nREVERSING LIST");
    list = reverse(list);
    print_list(list);

    puts("\nDESTROYING LIST");
    list = destroy_list(list);
    print_list(list);

    return 0;
}
