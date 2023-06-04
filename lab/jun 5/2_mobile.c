#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BRAND_LENGTH 50
#define MAX_MODEL_LENGTH 50

typedef struct {
    char brand[MAX_BRAND_LENGTH];
    char model[MAX_MODEL_LENGTH];
    int ram;
    int storage;
    int frontCamera;
    int backCamera;
    float price;
} MobilePhone;

void displayMobilePhoneDetails(MobilePhone* phone) {
    printf("Brand: %s\n", phone->brand);
    printf("Model: %s\n", phone->model);
    printf("RAM: %d GB\n", phone->ram);
    printf("Storage: %d GB\n", phone->storage);
    printf("Front Camera: %d MP\n", phone->frontCamera);
    printf("Back Camera: %d MP\n", phone->backCamera);
    printf("Price: $%.2f\n", phone->price);
    printf("-------------------------\n");
}

void displayPriceByModel(MobilePhone* phones[], int numPhones, const char* modelName) {
    int i;
    for (i = 0; i < numPhones; i++) {
        if (strcmp(phones[i]->model, modelName) == 0) {
            printf("Price of '%s' model: $%.2f\n", modelName, phones[i]->price);
        }
    }
}

void displayBrandsAlphabetically(MobilePhone* phones[], int numPhones) {
    char brands[numPhones][MAX_BRAND_LENGTH];
    int i, j;
    int count = 0;

    // Extract unique brands from phones
    for (i = 0; i < numPhones; i++) {
        int isUnique = 1;
        for (j = 0; j < count; j++) {
            if (strcmp(brands[j], phones[i]->brand) == 0) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            strcpy(brands[count], phones[i]->brand);
            count++;
        }
    }

    // Sort the brands in alphabetical order
    for (i = 0; i < count - 1; i++) {
        for (j = 0; j < count - i - 1; j++) {
            if (strcmp(brands[j], brands[j + 1]) > 0) {
                char temp[MAX_BRAND_LENGTH];
                strcpy(temp, brands[j]);
                strcpy(brands[j], brands[j + 1]);
                strcpy(brands[j + 1], temp);
            }
        }
    }

    // Display the sorted brands
    printf("Brands in alphabetical order:\n");
    for (i = 0; i < count; i++) {
        printf("%s\n", brands[i]);
    }
}

int findHighestFrontCameraResolution(MobilePhone* phones[], int numPhones) {
    int maxResolution = 0;
    int i;

    for (i = 0; i < numPhones; i++) {
        if (phones[i]->frontCamera > maxResolution) {
            maxResolution = phones[i]->frontCamera;
        }
    }

    return maxResolution;
}

void displayPhonesByRam(MobilePhone* phones[], int numPhones, int ramValue) {
    int i;
    printf("Mobile Phones with RAM greater than %d GB:\n", ramValue);

    for (i = 0; i < numPhones; i++) {
        if (phones[i]->ram > ramValue) {
            displayMobilePhoneDetails(phones[i]);
        }
    }
}

void displayPhonesByBrandWithSortedPrice(MobilePhone* phones[], int numPhones, const char* brandName) {
    int i, j;
    MobilePhone* temp;

    // Filter phones by brand
    MobilePhone* brandPhones[numPhones];
    int count = 0;
    for (i = 0; i < numPhones; i++) {
        if (strcmp(phones[i]->brand, brandName) == 0) {
            brandPhones[count] = phones[i];
            count++;
        }
    }

    // Sort phones by price (using bubble sort)
    for (i = 0; i < count - 1; i++) {
        for (j = 0; j < count - i - 1; j++) {
            if (brandPhones[j]->price > brandPhones[j + 1]->price) {
                temp = brandPhones[j];
                brandPhones[j] = brandPhones[j + 1];
                brandPhones[j + 1] = temp;
            }
        }
    }

    // Display the sorted phones
    printf("Mobile Phones of brand '%s' in sorted price order:\n", brandName);
    for (i = 0; i < count; i++) {
        displayMobilePhoneDetails(brandPhones[i]);
    }
}

int main() {
    int i;

    // Create an array of 10 mobile phones
    MobilePhone* phones[10];

    // Allocate memory for each mobile phone
    for (i = 0; i < 10; i++) {
        phones[i] = (MobilePhone*)malloc(sizeof(MobilePhone));
    }

    // Assign values to the mobile phones using a loop
    for (i = 0; i < 10; i++) {
        printf("Enter details for Mobile Phone %d:\n", i + 1);
        printf("Brand: ");
        scanf("%s", phones[i]->brand);
        printf("Model: ");
        scanf("%s", phones[i]->model);
        printf("RAM: ");
        scanf("%d", &(phones[i]->ram));
        printf("Storage: ");
        scanf("%d", &(phones[i]->storage));
        printf("Front Camera: ");
        scanf("%d", &(phones[i]->frontCamera));
        printf("Back Camera: ");
        scanf("%d", &(phones[i]->backCamera));
        printf("Price: ");
        scanf("%f", &(phones[i]->price));
        printf("-------------------------\n");
    }

    // Perform operations
    displayPriceByModel(phones, 10, "iPhone 12");
    displayBrandsAlphabetically(phones, 10);
    int highestFrontCameraResolution = findHighestFrontCameraResolution(phones, 10);
    printf("Highest resolution front camera: %d MP\n", highestFrontCameraResolution);
    displayPhonesByRam(phones, 10, 6);
    displayPhonesByBrandWithSortedPrice(phones, 10, "Sony");

    // Free the allocated memory
    for (i = 0; i < 10; i++) {
        free(phones[i]);
    }

    return 0;
}