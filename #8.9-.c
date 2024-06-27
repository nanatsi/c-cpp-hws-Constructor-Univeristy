#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Open the output file for writing
    FILE* fp_out = fopen("output.txt", "w");

    if (fp_out == NULL) {
        printf("Error occurred while opening output.txt for writing!\n");
        exit(1);
    }

    // Read the number of files to process
    int n;
    scanf("%d", &n);
    getchar();
    char buffer[64];
    int i;
    char inputi[100];
    // Process each file
    FILE* fp_2;

    for (i = 0; i < n; i++) {
        sscanf("%255s", inputi);
        getchar();

        fp_2 = fopen(inputi, "r");


        if (fp_2 == NULL) {
            printf("Error occurred with opening");
            exit(1);
        }

        char chari;
        while ((chari = fgetc(fp_2)) != EOF) {
            fputc(chari, fp_out);
        }

        fprintf(fp_out, "\n");
        fclose(fp_2);
    }
    fclose(fp_out);

    // Open the output file for reading
    fp_out = fopen("output.txt", "rb");
    if (fp_out == NULL) {
        printf("Error occurred while opening output.txt for reading!\n");
        exit(1);
    }

    printf("Concatenating the content of %d files ...\n", n);
    printf("The result is:\n");

    int bytesRead;
    while ((bytesRead = fread(buffer, 1, 64, fp_out)) > 0) {
        fwrite(buffer, 1, bytesRead, stdout);
    }

    fclose(fp_out);
    printf("The result was written into output.txt\n");
    return 0;
}