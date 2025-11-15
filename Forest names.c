#include <stdio.h>

int main() {
    // Array of forest names in India
    const char *forests[] = {
        "Abujmarh Forest",
        "Annekal Reserved Forest",
        "Baikunthapur Forest",
        "Bandipur National Park",
        "Bhadra Wildlife Sanctuary",
        "Bhagwan Mahaveer Sanctuary and Mollem National Park",
        "Bhitarkanika Mangroves",
        "Bondla Wildlife Sanctuary",
        "Chambal National Sanctuary",
        "Cotigao Wildlife Sanctuary",
        "Gir National Park",
        "Jim Corbett National Park",
        "Kanha National Park",
        "Keibul Lamjao National Park",
        "Kukrail Reserve Forest",
        "Mhadei Wildlife Sanctuary",
        "Molai Forest",
        "Nagarhole National Park",
        "Nallamala Hills",
        "Namdapha National Park",
        "Nanmangalam Forest",
        "Netravali Wildlife Sanctuary",
        "Pichavaram Mangrove Forest",
        "Salim Ali Bird Sanctuary",
        "Saranda Forest",
        "Shettihalli",
        "Sundarbans",
        "Tadoba Andhari Tiger Reserve",
        "Valmiki National Park",
        "Vandalur Reserve Forest",
        "Wayanad Wildlife Sanctuary"
    };
    int numForests = sizeof(forests) / sizeof(forests[0]);
    printf("List of Major Forests in India:
");
    for(int i = 0; i < numForests; i++) {
        printf("%d. %s
", i + 1, forests[i]);
    }
    return 0;
}
