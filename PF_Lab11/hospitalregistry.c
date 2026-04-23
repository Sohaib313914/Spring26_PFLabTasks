#include <stdio.h>

struct Patient {
    char name[50];
    int age;
    char blood[5];
    int id;
    char note[100];
};

void displayAll(struct Patient p[], int n) {
    printf("\nID\tName\tAge\tBlood\tNote\n");
    for(int i = 0; i < n; i++) {
        /* Formatting with tabs for a clean table look */
        printf("%d\t%s\t%d\t%s\t%s\n", p[i].id, p[i].name, p[i].age, p[i].blood, p[i].note);
    }
}

void searchByID(struct Patient p[], int n, int key) {
    int found = 0;
    for(int i = 0; i < n; i++) {
        if(p[i].id == key) {
            printf("\nMatch Found!\nName: %s\nDiagnosis: %s\n", p[i].name, p[i].note);
            found = 1;
            break;
        }
    }
    if(!found) printf("\nPatient with ID %d not found.\n", key);
}

int main() {
    struct Patient data[5];
    
    for(int i = 0; i < 5; i++) {
        printf("\nPatient %d Detail\n", i + 1);
        
        printf("Enter ID: ");
        scanf("%d", &data[i].id);
        
        printf("Enter Name: ");
        scanf(" %s", data[i].name); 
        
        printf("Enter Age: ");
        scanf("%d", &data[i].age);
        
        printf("Enter Blood Type: ");
        scanf(" %s", data[i].blood);
        
        printf("Enter Diagnosis Note: ");
        scanf(" %s", data[i].note);
    }
    
    displayAll(data, 5);
    
    int sId;
    printf("\nEnter Patient ID to search: ");
    scanf("%d", &sId);
    searchByID(data, 5, sId);
    
    return 0;
}