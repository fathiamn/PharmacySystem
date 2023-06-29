#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <conio.h>

#define MAX_SIZE 1000
#define MAX_NAME_LENGTH 50
#define MAX_COMPOSITIONS 10
#define MAX_COMPOSITION_LENGTH 50

char filename[] = "patient.txt";

typedef struct { 
    int hari;
    int bulan;
    int tahun;
} tanggal;

void clearScreen() {
    system("cls");
}

void createPatientFile(char* filename) {
    if (access(filename, F_OK) != -1) {
        printf("Patient file already exists.\n");
        return;
    }

    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("Failed to create patient file.\n");
        exit(1);
    }
    fclose(file);
}

void appendToPatientFile(const char* filename, const char* data, const char* dataType) {
    FILE* file = fopen(filename, "a");
    if (file == NULL) {
        printf("Failed to open patient file.\n");
        return;
    }

    fprintf(file, "%s: %s\n", dataType, data);
    fclose(file);
}

void alergi(const char* filename) {
    char alergi[5];
    
    printf("\n===================================\n");
    printf("\nAllergen Lists:\n");
    printf("\nAntibiotics\n1a Penicillin \n1b Amoxicillin \n1c Ampicillin \n1d Tetracycline\n");
    printf("\n-----------------------------------\n");
    printf("\nNonsteroidal anti-inflammatory drugs (NSAID) \n2a Ibuprofen \n2b Motrin \n2c Advil \n2d Naproxen \n2e Aleve \n2f Aspirin \n2g Celecoxib \n2h Celebrex\n");
    printf("\n-----------------------------------\n");
    printf("\nSulfa drugs \n3a Sulfonamide antibiotics \n3b Sulfamethoxazole-trimethoprim \n3c Bactrim \n3d Septra \n3e Erythromycin-sulfisoxazole \n3f Eryzole \n3g Pediazole \n3h Sulfasalazine \n3i Azulfidine \n3j Dapsone\n");
    printf("\n-----------------------------------\n");
    printf("\nMonoclonal antibody therapy \n4a Cetuximab \n4b Rituximab\n");
    printf("\n-----------------------------------\n");
    printf("\nHIV \n5a Abacavir \n5b Nevirapine\n");
 	printf("\n-----------------------------------\n");
    printf("\nAntiseizure drugs \n6a Carbamazepine \n6b Tegretol \n6c Lamotrigine \n6d Lamictal \n6e Phenytoin \n6f Levetiracetam \n6g Valproic acid\n");
    printf("\n-----------------------------------\n");
    printf("\nMuscle relaxers invasif \n7a Atracurium \n7b Succinylcholine \n7c Vecuronium\n");
    printf("\n-----------------------------------\n");
	printf("\nChoose your allergy by inputting the digits and alphabets, input 0 to stop\n");

    FILE* file = fopen(filename, "a");

    while (1) {
        printf("\nEnter your allergy: ");
        scanf("%s", alergi);
        getchar();

        int numericPart = alergi[0] - '0';
        char alphabeticPart = alergi[1];

        if (numericPart == 0) {
            break;
        }
  
  fprintf(file, "Allergen: ");
  
        switch (numericPart) {
            case 1:
                switch (alphabeticPart) {
                    case 'a':
                        fprintf(file, "Penicillin\n");
                        break;
                    case 'b':
                        fprintf(file, "Amoxicillin\n");
                        break;
                    case 'c':
                        fprintf(file, "Ampicillin\n");
                        break;
                    case 'd':
                        fprintf(file, "Tetracycline\n");
                        break;
                    default:
                        printf("Invalid input\n");
                        break;
                }
                break;
            case 2:
                switch (alphabeticPart) {
                    case 'a':
                        fprintf(file, "Ibuprofen\n");
                        break;
                    case 'b':
                        fprintf(file, "Motrin\n");
                        break;
                    case 'c':
                        fprintf(file, "Advil\n");
                        break;
                    case 'd':
                        fprintf(file, "Naproxen\n");
                        break;
                    case 'e':
                        fprintf(file, "Aleve\n");
                        break;
                    case 'f':
                        fprintf(file, "Aspirin\n");
                        break;
                    case 'g':
                        fprintf(file, "Celecoxib\n");
                        break;
                    case 'h':
                        fprintf(file, "Celebrex\n");
                        break;
                    default:
                        printf("Invalid input\n");
                        break;
                }
                break;
            case 3:
                switch (alphabeticPart) {
                    case 'a':
                        fprintf(file, "Sulfonamide antibiotics\n");
                        break;
                    case 'b':
                        fprintf(file, "Sulfamethoxazole-trimethoprim\n");
                        break;
                    case 'c':
                        fprintf(file, "Bactrim\n");
                        break;
                    case 'd':
                        fprintf(file, "Septra\n");
                        break;
                    case 'e':
                        fprintf(file, "Erythromycin-sulfisoxazole\n");
                        break;
                    case 'f':
                        fprintf(file, "Eryzole\n");
                        break;
                    case 'g':
                        fprintf(file, "Pediazole\n");
                        break;
                    case 'h':
                        fprintf(file, "Sulfasalazine\n");
                        break;
                    case 'i':
                        fprintf(file, "Azulfidine\n");
                        break;
                    case 'j':
                        fprintf(file, "Dapsone\n");
                        break;
                    default:
                        printf("Invalid input\n");
                        break;
                }
                break;
            case 4:
                switch (alphabeticPart) {
                    case 'a':
                        fprintf(file, "Cetuximab\n");
                        break;
                    case 'b':
                        fprintf(file, "Rituximab\n");
                        break;
                    default:
                        printf("Invalid input\n");
                        break;
                }
                break;
            case 5:
                switch (alphabeticPart) {
                    case 'a':
                        fprintf(file, "Abacavir\n");
                        break;
                    case 'b':
                        fprintf(file, "Nevirapine\n");
                        break;
                    default:
                        printf("Invalid input\n");
                        break;
                }
                break;
            case 6:
                switch (alphabeticPart) {
                    case 'a':
                        fprintf(file, "Carbamazepine\n");
                        break;
                    case 'b':
                        fprintf(file, "Tegretol\n");
                        break;
                    case 'c':
                        fprintf(file, "Lamotrigine\n");
                        break;
                    case 'd':
                        fprintf(file, "Lamictal\n");
                        break;
                    case 'e':
                        fprintf(file, "Phenytoin\n");
                        break;
                    case 'f':
                        fprintf(file, "Levetiracetam\n");
                        break;
                    case 'g':
                        fprintf(file, "Valproic acid\n");
                        break;
                    default:
                        printf("Invalid input\n");
                        break;
                }
                break;
            case 7:
                switch (alphabeticPart) {
                    case 'a':
                        fprintf(file, "Atracurium\n");
                        break;
                    case 'b':
                        fprintf(file, "Succinylcholine\n");
                        break;
                    case 'c':
                        fprintf(file, "Vecuronium\n");
                        break;
                    default:
                        printf("Invalid input\n");
                        break;
                }
                break;
            default:
                printf("Invalid input\n");
                break;
        }
    }

    fclose(file);
}

void displayAllergies(char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("No allergies recorded.\n");
        return;
    }

    char line[MAX_SIZE];
    int isFirstLine = 1;  
    while (fgets(line, sizeof(line), file)) {
        if (isFirstLine) {
            isFirstLine = 0;
            continue;
        }
        printf("- %s", line);
    }

    fclose(file);
}

void gender(const char* filename) {
    int gender;
    printf("\nEnter your gender (1 for Male, 2 for Female): ");
    scanf("%d", &gender);

    char genderStr[MAX_SIZE];
    switch (gender) {
        case 1:
            strcpy(genderStr, "Male");
            break;
        case 2:
            strcpy(genderStr, "Female");
            break;
        default:
            printf("Invalid input\n");
            return;
    }

    appendToPatientFile(filename, genderStr, "Gender"); 
}

void lahir(const char* filename) {
    tanggal lahir;
    int valid = 0;

    while (!valid) {
        printf("\nEnter your date of birth (format: DD-MM-YYYY): ");
        scanf("%d-%d-%d", &lahir.hari, &lahir.bulan, &lahir.tahun);

        if (lahir.hari < 1 || lahir.hari > 31 || lahir.bulan < 1 || lahir.bulan > 12 || lahir.tahun > 2023) {
            printf("Invalid date of birth. Please try again.\n");
        } else {
            valid = 1; 
        }
    }

    char dob[MAX_SIZE];
    sprintf(dob, "%d-%d-%d", lahir.tahun, lahir.bulan, lahir.hari);

    appendToPatientFile(filename, dob, "Birth Date");
}

void hp(const char* filename) {
    char hp[MAX_SIZE];
    printf("\nEnter your phone number: ");
    getchar();
    fgets(hp, sizeof(hp), stdin);

    appendToPatientFile(filename, hp, "Phone Number"); 
}

int hitungUsia(tanggal tanggallahir) {
    time_t now;
    struct tm *localTime;
    int TahunNow, BulanNow, HariNow, umur;

    time(&now);
    localTime = localtime(&now);

    TahunNow = localTime->tm_year + 1900;
    BulanNow = localTime->tm_mon + 1;
    HariNow = localTime->tm_mday;

    umur = TahunNow - tanggallahir.tahun;

    if (BulanNow < tanggallahir.bulan) {
        umur--;
    } else if (BulanNow == tanggallahir.bulan && HariNow < tanggallahir.hari) {
        umur--;
    }

    return umur;
}

void displayWaktu() {
    time_t waktuSekarang = time(NULL);
    struct tm *localTime = localtime(&waktuSekarang);

    int hari = localTime->tm_mday;
    int bulan = localTime->tm_mon + 1;
    int tahun = localTime->tm_year + 1900;

    printf("\n%02d-%02d-%04d\n", hari, bulan, tahun);
}

typedef struct {
    char name[MAX_NAME_LENGTH];
} Obat;

void extractAllergens(const char* patientName) {
    char inputFileName[100];
    char outputFileName[100];

    sprintf(inputFileName, "%s.txt", patientName);
    sprintf(outputFileName, "allergen_database.txt");

    FILE* inputFile = fopen(inputFileName, "r");
    FILE* outputFile = fopen(outputFileName, "w");

    if (inputFile == NULL || outputFile == NULL) {
        printf("Error opening files.\n");
        return;
    }

    char line[100];
    while (fgets(line, sizeof(line), inputFile)) {
        if (strncmp(line, "Allergen:", 9) == 0) {
            char* allergen = strchr(line, ':') + 2;  // Extract the allergen text after the colon
            allergen[strcspn(allergen, "\n")] = '\0';  // Remove the newline character

            fprintf(outputFile, "%s\n", allergen);  // Write the allergen to the output file
        }
    }

    fclose(inputFile);
    fclose(outputFile);
}

int checkAlergi(const char* composition) {
    FILE* allergenFile = fopen("allergen_database.txt", "r");

    if (allergenFile == NULL) {
        printf("Error opening allergen database.\n");
        return 0; // Unable to check for allergy
    }

    char line[100];
    while (fgets(line, sizeof(line), allergenFile)) {
        line[strcspn(line, "\n")] = '\0'; // Remove the newline character

        if (strcmp(composition, line) == 0) {
            fclose(allergenFile);
            return 1; // Composition triggers allergy
        }
    }

    fclose(allergenFile);
    return 0; // Composition does not trigger allergy
}


int checkMerk(const char *merk) {
    // List of drug brands that contain compositions that trigger allergies
    const char *obatPenicillin[] = {
        "Benzathine Benzilpenicillin", 
		"Fenocin",
		"Phenoxymethyl Penicillin",
		"Procaine Benzyl Penicillin",
		"Procaine Penicillin G Meji",
		"Penicillin V"
    };
    
    const char *obatAmoxicillin[] = {
        "Penmox", 
		"Intermoxyl", 
		"Ospamox", 
		"Amoxsan", 
		"Hufanoxyl",
		"Yusimox"
    };
    
    const char *obatAmpicillin[] = {
        "Sanpicillin", 
		"Binotal 500",
		"Ampicillin", 
		"Ampicillin Trihydrate", 
		"Viccillin"
    };
    
    const char *obatTetracycline[] = {
        "Tetracycline HCl", 
		"Bufacyn", 
		"Bufatetra",
		"Decyclin",
		"Dumocycline",
		"Itracycline",
		"Katitra", 
		"Novabiotic", 
		"Novacycline", 
		"Pantocain 2%", 
		"Super Tetra", 
		"Suprabiotic", 
		"Terikortin", 
		"Tetraholi", 
		"Tetrasanbe 500", 
		"Tetrin 500", 
		"Wiclin" 
    };
    
	const char *obatIbuprofen[] = {
        "Neo Rheumacyl",
        "Bodrex Extra",
        "Paramex Nyeri Otot"
    };

    const char *obatNaproxen[] = {
        "Alif 500",
        "Xenifar"
    };
    
    const char *obatAspirin[] = {
        "Aspilets", 
		"Bodrexin", 
		"Acetylsalicylic Acid"
    };

 	const char *obatCelecoxib[] = {
        "Actrel", 
		"Celcox 100", 
		"Celcox 200", 
		"Celebrex", 
		"Novexib 100", 
		"Novexib 200", 
		"Remabrex"
    };
    
    const char *obatCotrimoxazole[] = {
        "Mesaprim", 
		"Moxalas", 
		"Novatrimm Omegtrim", 
		"Primavon"
    };

	const char *obatErythromycin[] = {
        "Corsatrocin", 
		"Dothrocyn", 
		"Duramycin", 
		"Erymed", 
		"Erysanbe", 
		"Erythrin 500", 
		"Erythromycin", 
		"Trovilon"
    };
    
    const char *obatSulfasalazine[] = {
        "Lazafin", 
		"Sulcolon", 
		"Sulfasalazine", 
		"Sulfitis"
    };
    
    const char *obatCetruximab[] = {
		"Erbitux"
    };
    
    const char *obatRituximab[] = {
		"Mabthera", 
		"Rituxikal", 
		"Rituxsanbe",
		"Truxima", 
		"Redditux"
    };
    
    const char *obatAbacavir[] = {
		"Abacavex", 
		"Abacavir Sulfate"	
    };
    
    const char *obatNevirapine[] = {
		"Neviral", 
		"Nevirapine", 
		"NVP"	
    };
    
	const char *obatCarbamazepine[] = {
		"Bamgetol 200", 
		"Carbamazepine", 
		"Tegretol", 
		"Tegretol CR"	
    };
    
    const char *obatLamotrigine[] = {
		"Lamictal", 
		"Lamictal XR"	
    };
    
    
    const char *obatPhenytoin[] = {
		"Dilantin", 
		"Kutoin", 
		"Phenitin", 
		"Kutoin", 
		"Decatena", 
		"Dilantin", 
		"Ikhapen", 
		"Curelepz", 
		"Zentropil"	
    };
    
    const char *obatLevetiracetam[] = {
		"Keppra", 
		"Lethira", 
		"Levetiracetam", 
		"Levexa"
    };
    
    const char *obatLavoric[] = {
		"Ikalem", 
		"Depakene", 
		"Vellepsy"
    };
    
    const char *obatAtracurium[] = {
		"Atracurium Besilate", 
		"Farelax", 
		"Notrixum", 
		"Tracrium", 
		"Tramus"
    };
    
    const char *obatSuccinylcholine[] = {
		"Entubate", 
		"Quelicin", 
		"Anektin"
    };
    
    const char *obatVecuronium[] = {
		"Norkuron", 
		"Ecron"
    };
    
    int i;
    int foundInList = 0;
    for ( i = 0; i < sizeof(obatPenicillin) / sizeof(obatPenicillin[0]); i++) {
        if (strstr(merk, obatPenicillin[i]) != NULL) {
        	foundInList = 1;
            if (checkAlergi("Penicillin")) {
                return 1; // Drug brand contains composition that triggers allergy
            }
        }
    }
    
    for (i = 0; i < sizeof(obatAmoxicillin) / sizeof(obatAmoxicillin[0]); i++) {
        if (strstr(merk, obatAmoxicillin[i]) != NULL) {
        	foundInList = 1;
            if (checkAlergi("Amoxicillin")) {
                return 1; // Drug brand contains composition that triggers allergy
            }
        }
    }
    
    for (i = 0; i < sizeof(obatAmpicillin) / sizeof(obatAmpicillin[0]); i++) {
        if (strstr(merk, obatAmpicillin[i]) != NULL) {
        	foundInList = 1;
            if (checkAlergi("Ampicillin")) {
                return 1; // Drug brand contains composition that triggers allergy
            }
        }
    }
    
    for (i = 0; i < sizeof(obatTetracycline) / sizeof(obatTetracycline[0]); i++) {
        if (strstr(merk, obatTetracycline[i]) != NULL) {
        	foundInList = 1;
            if (checkAlergi("Tetracycline")) {
                return 1; // Drug brand contains composition that triggers allergy
            }
        }
    }
        
    // Check if the drug brand contains ibuprofen
    for (i = 0; i < sizeof(obatIbuprofen) / sizeof(obatIbuprofen[0]); i++) {
        if (strstr(merk, obatIbuprofen[i]) != NULL) {
        	foundInList = 1;
            if (checkAlergi("Ibuprofen")) {
                return 1; // Drug brand contains composition that triggers allergy
            }
        }
    }

    // Check if the drug brand contains naproxen
    for (i = 0; i < sizeof(obatNaproxen) / sizeof(obatNaproxen[0]); i++) {
        if (strstr(merk, obatNaproxen[i]) != NULL) {
        	foundInList = 1;
            if (checkAlergi("Naproxen")) {
                return 1; // Drug brand contains composition that triggers allergy
            }
        }
    }
    
    for (i = 0; i < sizeof(obatAspirin) / sizeof(obatAspirin[0]); i++) {
        if (strstr(merk, obatAspirin[i]) != NULL) {
        	foundInList = 1;
            if (checkAlergi("Aspirin")) {
                return 1; // Drug brand contains composition that triggers allergy
            }
        }
    }
    
    for (i = 0; i < sizeof(obatCelecoxib) / sizeof(obatCelecoxib[0]); i++) {
        if (strstr(merk, obatCelecoxib[i]) != NULL) {
        	foundInList = 1;
            if (checkAlergi("Celecoxib")) {
                return 1; // Drug brand contains composition that triggers allergy
            }
        }
    }
    
    for (i = 0; i < sizeof(obatCotrimoxazole) / sizeof(obatCotrimoxazole[0]); i++) {
        if (strstr(merk, obatCotrimoxazole[i]) != NULL) {
        	foundInList = 1;
            if (checkAlergi("Cotrimoxazole")) {
                return 1; // Drug brand contains composition that triggers allergy
            }
        }
    }
    
    for (i = 0; i < sizeof(obatErythromycin) / sizeof(obatErythromycin[0]); i++) {
        if (strstr(merk, obatErythromycin[i]) != NULL) {
        	foundInList = 1;
            if (checkAlergi("Erythromycin")) {
                return 1; // Drug brand contains composition that triggers allergy
            }
        }
    }
    
    for ( i = 0; i < sizeof(obatSulfasalazine) / sizeof(obatSulfasalazine[0]); i++) {
        if (strstr(merk, obatSulfasalazine[i]) != NULL) {
        	foundInList = 1;
            if (checkAlergi("Sulfasalazine")) {
                return 1; // Drug brand contains composition that triggers allergy
            }
        }
    }
    
    for (i = 0; i < sizeof(obatCetruximab) / sizeof(obatCetruximab[0]); i++) {
        if (strstr(merk, obatCetruximab[i]) != NULL) {
        	foundInList = 1;
            if (checkAlergi("Cetruximab")) {
                return 1; // Drug brand contains composition that triggers allergy
            }
        }
    }
    
    for ( i = 0; i < sizeof(obatRituximab) / sizeof(obatRituximab[0]); i++) {
        if (strstr(merk, obatRituximab[i]) != NULL) {
        	foundInList = 1;
            if (checkAlergi("Rituximab")) {
                return 1; // Drug brand contains composition that triggers allergy
            }
        }
    }
    
    for (i = 0; i < sizeof(obatAbacavir) / sizeof(obatAbacavir[0]); i++) {
        if (strstr(merk, obatAbacavir[i]) != NULL) {
        	foundInList = 1;
            if (checkAlergi("Abacavir")) {
                return 1; // Drug brand contains composition that triggers allergy
            }
        }
    }
    
    for ( i = 0; i < sizeof(obatNevirapine) / sizeof(obatNevirapine[0]); i++) {
        if (strstr(merk, obatNevirapine[i]) != NULL) {
        	foundInList = 1;
            if (checkAlergi("Nevirapine")) {
                return 1; // Drug brand contains composition that triggers allergy
            }
        }
    }
    
    for (i = 0; i < sizeof(obatCarbamazepine) / sizeof(obatCarbamazepine[0]); i++) {
        if (strstr(merk, obatCarbamazepine[i]) != NULL) {
        	foundInList = 1;
            if (checkAlergi("Carbamazepine")) {
                return 1; // Drug brand contains composition that triggers allergy
            }
        }
    }
    
    for ( i = 0; i < sizeof(obatLamotrigine) / sizeof(obatLamotrigine[0]); i++) {
        if (strstr(merk, obatLamotrigine[i]) != NULL) {
        	foundInList = 1;
            if (checkAlergi("Lamotrigine")) {
                return 1; // Drug brand contains composition that triggers allergy
            }
        }
    }
    
    for (i = 0; i < sizeof(obatPhenytoin) / sizeof(obatPhenytoin[0]); i++) {
        if (strstr(merk, obatPhenytoin[i]) != NULL) {
        	foundInList = 1;
            if (checkAlergi("Phenytoin")) {
                return 1; // Drug brand contains composition that triggers allergy
            }
        }
    }
    
    for ( i = 0; i < sizeof(obatLevetiracetam) / sizeof(obatLevetiracetam[0]); i++) {
        if (strstr(merk, obatLevetiracetam[i]) != NULL) {
        	foundInList = 1;
            if (checkAlergi("Levetiracetam")) {
                return 1; // Drug brand contains composition that triggers allergy
            }
        }
    }
    
    for (i = 0; i < sizeof(obatLavoric) / sizeof(obatLavoric[0]); i++) {
        if (strstr(merk, obatLavoric[i]) != NULL) {
        	foundInList = 1;
            if (checkAlergi("Lavoric")) {
                return 1; // Drug brand contains composition that triggers allergy
            }
        }
    }
    
    for ( i = 0; i < sizeof(obatAtracurium) / sizeof(obatAtracurium[0]); i++) {
        if (strstr(merk, obatAtracurium[i]) != NULL) {
        	foundInList = 1;
            if (checkAlergi("Atracurium")) {
                return 1; // Drug brand contains composition that triggers allergy
            }
        }
    }
    
    for ( i = 0; i < sizeof(obatSuccinylcholine) / sizeof(obatSuccinylcholine[0]); i++) {
        if (strstr(merk, obatSuccinylcholine[i]) != NULL) {
        	foundInList = 1;
            if (checkAlergi("Succinylcholine")) {
                return 1; // Drug brand contains composition that triggers allergy
            }
        }
    }
    
    for ( i = 0; i < sizeof(obatVecuronium) / sizeof(obatVecuronium[0]); i++) {
        if (strstr(merk, obatVecuronium[i]) != NULL) {
        	foundInList = 1;
            if (checkAlergi("Vecuroinium")) {
                return 1; // Drug brand contains composition that triggers allergy
            }
        }
    }
    
    if (!foundInList) {
        return -1;
        
    }	
    
	return 0;
}

void inputObat(Obat *obat) {
    printf("Enter drug's name: ");
    fgets(obat->name, MAX_NAME_LENGTH, stdin);
    obat->name[strcspn(obat->name, "\n")] = '\0';
}

void addPurchaseRecord(const char *filename) {
    int choice = 1;
    Obat obat; // Declare the obat variable outside the while loop

    do {
        printf("Press 0 to exit or press any other number to continue: ");
        scanf("%d", &choice);
        getchar(); // Consume the newline character left in the input buffer
        printf("\n");

        if (choice == 0) {
            break;
        }

        inputObat(&obat);

        if (checkMerk(obat.name) == 1) {
            printf("\nSorry, you are allergic to the medicine brand %s that contains allergenic ingredients.\n", obat.name);
        }else if (checkMerk(obat.name)==-1){
        	printf("\nError: Drug brand '%s' not found in the list.\n",obat.name);
		}else if (checkMerk(obat.name)==0){
        
            printf("\nYou can purchase medicine with the brand %s.\n", obat.name);
            FILE *recordFile = fopen(filename, "a");
            if (recordFile == NULL) {
                printf("Failed to open the record file.\n");
                return;
            }
            time_t purchaseTime = time(NULL);
            struct tm *localTime = localtime(&purchaseTime);
        
            fprintf(recordFile, "\nMedicine Purchased: %s\n", obat.name);
            fprintf(recordFile, "Purchase Date: %02d-%02d-%04d\n", localTime->tm_mday, localTime->tm_mon + 1, localTime->tm_year + 1900);
        
            fclose(recordFile);
        
            printf("Purchase recorded successfully!\n");
        }

        printf("\n");
    }while (choice != 0);
}



void nama() {
    char nama[MAX_SIZE];
    printf("\nEnter your name: ");
    fgets(nama, sizeof(nama), stdin);

    int len = strlen(nama);
    if (nama[len - 1] == '\n') {
        nama[len - 1] = '\0';
    }

    char filename[MAX_SIZE];
    snprintf(filename, sizeof(filename), "%s.txt", nama);
    createPatientFile(filename);
	
	printf("\n===================================\n");
    appendToPatientFile(filename, nama, "Nama");
	
    alergi(filename);
    displayAllergies(filename);
    gender(filename);
    lahir(filename);
    hp(filename); 
	printf("\n===================================\n");
	
	printf("New patient data has been successfully entered!\n");
    printf("File: %s\n\n", filename);
   
}

int main_menu() {
    
    int choice;

    do {
    	printf("===================================\n\n");
        printf("Welcome to the Pharmacy Database!\n");
        printf("\nToday's date:");
        displayWaktu();
        printf("\n===================================\n");
        printf("\n1. Enter New Patient Data\n2. Access Existing Patient Data\n\nYour Choice (Enter 1 or 2): ");
        scanf("%d", &choice);

        system("cls");
        getchar();

        switch (choice) {
            case 1: {
            	printf("===================================\n\n");
                printf("Please enter new patient data!\n");
                printf("\n===================================\n");

                nama();
                break;
				clearScreen();
            
            }
            case 2: {
                char patientName[MAX_SIZE];
			    printf("Patient Name: ");
			    fgets(patientName, sizeof(patientName), stdin);
			    patientName[strcspn(patientName, "\n")] = '\0';
			
			    char filename[MAX_SIZE];
			    sprintf(filename, "%s.txt", patientName);
			    
			    printf("\n===================================\n");
			    FILE *file = fopen(filename, "r");
			    if (file == NULL) {
			        printf("Failed to open the file.\n");
			        return 1;
			    }
			
			    char line[100];
			    while (fgets(line, sizeof(line), file)) {
			        if (strncmp(line, "Birth Date: ", 12) == 0) {
			            tanggal dob;
			            sscanf(line, "Birth Date: %d-%d-%d", &dob.tahun, &dob.bulan, &dob.hari);
			            int age = hitungUsia(dob);
			            printf("Age: %d\n", age);
			        } else {
			            printf("%s", line);
			        }
			    }
			
			    fclose(file);
			    
			    extractAllergens(patientName);

                int recordChoice;
                printf("===================================\n");
                printf("\n1. Add New Purchase Record\n2. Exit\n\nYour Choice (Enter 1 or 2): ");
                scanf("%d", &recordChoice);

                switch (recordChoice) {
                    case 1: {
                        addPurchaseRecord(filename);
                    }
                    case 2: {
                        printf("Exiting...\n");
                        break;
                    }
                    default:
                        printf("Invalid choice!\n");
                        break;
                }

                break;
            }
            default:
                printf("Invalid choice!\n");
                break;
        }

        printf("\n===================================\n");

    } while (choice != 1 && choice != 2);

    return 0;
}

void loadingBar()
{
	int i;
    system("Color 03");

    char a = 177, b = 219;

    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t\tLoading...\n\n");
    printf("\t\t\t\t\t");

    for (i = 0; i < 26; i++)
        printf("%c", a);

    printf("\r");
    printf("\t\t\t\t\t");

    for (i = 0; i < 26; i++) {
        printf("%c", b);
        fflush(stdout); 

        Sleep(150);
    }
    system("cls");
}

int main() {
	loadingBar();
	system("Color 03");
    main_menu();

    return 0;
}





