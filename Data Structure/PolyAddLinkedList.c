#include <stdio.h>
#include <stdlib.h>

// Structure to represent a node in the polynomial linked list
struct Node {
    int coeff;
    int exp;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int coeff, int exp) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->exp = exp;
    newNode->next = NULL;
    return newNode;
}

// Function to print the polynomial
void printPoly(struct Node* poly) {
    while (poly != NULL) {
        printf("%d*x^%d", poly->coeff, poly->exp);
        if (poly->next != NULL) {
            printf(" + ");
        }
        poly = poly->next;
    }
    printf("\n");
}

// Function to add two polynomials
struct Node* addPolynomials(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL; // Resultant polynomial
    struct Node* last = NULL; // Last node in the result

    while (poly1 != NULL || poly2 != NULL) {
        int coeff = 0;
        int exp = 0;

        // Determine which polynomial term to add
        if (poly1 != NULL && (poly2 == NULL || poly1->exp > poly2->exp)) {
            coeff = poly1->coeff;
            exp = poly1->exp;
            poly1 = poly1->next;
        } else if (poly2 != NULL && (poly1 == NULL || poly2->exp > poly1->exp)) {
            coeff = poly2->coeff;
            exp = poly2->exp;
            poly2 = poly2->next;
        } else { // Same exponent, add coefficients
            coeff = poly1->coeff + poly2->coeff;
            exp = poly1->exp;
            poly1 = poly1->next;
            poly2 = poly2->next;
        }

        // Create a new node for the result polynomial
        struct Node* newNode = createNode(coeff, exp);
        if (result == NULL) {
            result = newNode; // First node in the result
        } else {
            last->next = newNode; // Link to the last node
        }
        last = newNode; // Move to the last node
    }

    return result;
}

int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;
    int n1, n2, coeff, exp;

    // Input for first polynomial
    printf("Enter the number of terms in the first polynomial: ");
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) {
        printf("Enter coefficient and exponent for term %d: ", i + 1);
        scanf("%d %d", &coeff, &exp);
        struct Node* newNode = createNode(coeff, exp);
        newNode->next = poly1; // Insert at the beginning
        poly1 = newNode;
    }

    // Input for second polynomial
    printf("Enter the number of terms in the second polynomial: ");
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) {
        printf("Enter coefficient and exponent for term %d: ", i + 1);
        scanf("%d %d", &coeff, &exp);
        struct Node* newNode = createNode(coeff, exp);
        newNode->next = poly2; // Insert at the beginning
        poly2 = newNode;
    }

    // Print the first polynomial
    printf("First polynomial: ");
    printPoly(poly1);

    // Print the second polynomial
    printf("Second polynomial: ");
    printPoly(poly2);

    // Add the two polynomials
    struct Node* result = addPolynomials(poly1, poly2);

    // Print the result
    printf("Resultant polynomial: ");
    printPoly(result);

    return 0;
}
