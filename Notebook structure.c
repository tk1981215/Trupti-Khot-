#include <stdio.h>
#include <string.h>

#define MAX_NOTES 50

struct Notebook {
    int note_id;
    char title[50];
    char content[200];
};

void addNote(struct Notebook notes[], int *count) {
    if (*count >= MAX_NOTES) {
        printf("Notebook is full!\n");
        return;
    }

    struct Notebook newNote;
    newNote.note_id = *count + 1;

    printf("Enter note title: ");
    getchar(); // clear buffer
    fgets(newNote.title, sizeof(newNote.title), stdin);
    newNote.title[strcspn(newNote.title, "\n")] = '\0'; // remove newline

    printf("Enter note content: ");
    fgets(newNote.content, sizeof(newNote.content), stdin);
    newNote.content[strcspn(newNote.content, "\n")] = '\0';

    notes[*count] = newNote;
    (*count)++;

    printf("Note added successfully!\n");
}

void displayNotes(struct Notebook notes[], int count) {
    if (count == 0) {
        printf("No notes to display!\n");
        return;
    }

    printf("\n--- All Notes ---\n");
    for (int i = 0; i < count; i++) {
        printf("\nNote ID: %d\nTitle: %s\nContent: %s\n", 
               notes[i].note_id, notes[i].title, notes[i].content);
    }
}

void searchNoteByTitle(struct Notebook notes[], int count) {
    char searchTitle[50];
    printf("Enter title to search: ");
    getchar();
    fgets(searchTitle, sizeof(searchTitle), stdin);
    searchTitle[strcspn(searchTitle, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcasecmp(notes[i].title, searchTitle) == 0) {
            printf("\nNote Found:\n");
            printf("ID: %d\nTitle: %s\nContent: %s\n", 
                   notes[i].note_id, notes[i].title, notes[i].content);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Note not found!\n");
}

int main() {
    struct Notebook notes[MAX_NOTES];
    int count = 0;
    int choice;

    do {
        printf("\n===== NOTEBOOK MENU =====\n");
        printf("1. Add Note\n");
        printf("2. Display All Notes\n");
        printf("3. Search Note by Title\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addNote(notes, &count);
                break;
            case 2:
                displayNotes(notes, count);
                break;
            case 3:
                searchNoteByTitle(notes, count);
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
