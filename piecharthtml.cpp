#include <stdio.h>

#define MAX_ITEMS 50
#define MAX_NAME_LENGTH 50

void inputItems(char items[MAX_ITEMS][MAX_NAME_LENGTH], int numItems, const char *itemName) {
    printf("Inserisci il numero di %s: ", itemName);
    scanf("%d", &numItems);

    printf("Inserisci i %s:\n", itemName);
    for (int i = 0; i < numItems; i++) {
        printf("%s %d: ", itemName, i + 1);
        scanf("%s", items[i]);
    }
}

void printHTMLHeader() {
    printf("<html>\n");
    printf("<head>\n");
    printf("<title>Homepage</title>\n");
    printf("</head>\n");
    printf("<body>\n");
}

void printHTMLFooter() {
    printf("</body>\n");
    printf("</html>\n");
}

void printPieChart(char items[MAX_ITEMS][MAX_NAME_LENGTH], int numItems, const char *chartTitle) {
    printf("<h2>%s</h2>\n", chartTitle);
    printf("<svg width=\"300\" height=\"300\">\n");

    int startAngle = 0;
    int endAngle;

    for (int i = 0; i < numItems; i++) {
        endAngle = startAngle + 360 * (i + 1) / numItems;
        printf("<path d=\"M150,150 L150,0 A150,150 0 %d,1 %d,%d Z\" fill=\"%s\"/>\n",
               startAngle, endAngle, startAngle, items[i]);
        startAngle = endAngle;
    }

    printf("</svg>\n");
}

int main() {
    char impegni[MAX_ITEMS][MAX_NAME_LENGTH];
    char progetti[MAX_ITEMS][MAX_NAME_LENGTH];
    int numImpegni = 0, numProgetti = 0;

    inputItems(impegni, numImpegni, "impegni");
    inputItems(progetti, numProgetti, "progetti");

    printHTMLHeader();
    printPieChart(impegni, numImpegni, "Diagramma a Torta - Impegni");
    printPieChart(progetti, numProgetti, "Diagramma a Torta - Progetti");
    printHTMLFooter();

    return 0;
}

