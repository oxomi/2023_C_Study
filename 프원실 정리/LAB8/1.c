#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TITLE_SIZE 50
#define MAX_CONTENT_SIZE 500

typedef struct {
	char* title;
	char* content;
} DiaryEntry;


char* read_line() {
	char* line = NULL, temp;
	size_t size = 0, index = 0; //getchar을 이용하라는 뜻인 듯함

	// Implement your code
	index = getchar();

	while (index != '\n' /*&& index != EOF*/) {
		line = realloc(line, sizeof(char) * (size + 1));
		line[size++] = index;
	}

	line = realloc(line, sizeof(char) * (size + 1));
	line[size] = '\0';


	return line;
}

DiaryEntry* add_entry(DiaryEntry* entries, int* entry_count) {
	printf("Enter title: ");
	char* title = read_line();

	printf("Enter content: ");
	char* content = read_line();

	// Implement your code
	entries = realloc(entries, (*entry_count + 1) * sizeof(DiaryEntry)); //*entry_count 는 정수 0 인듯
	entries[*entry_count].title = title;
	entries[*entry_count].content = content;

	(*entry_count)++;

	return entries;
}

void view_entries(DiaryEntry* entries, int entry_count) {
	// Implement your code
	for (int i = 0; i < entry_count; i++) {
		printf("%s", entries[i].title);
		printf("%s", entries[i].content);
	}
}

void free_entries(DiaryEntry* entries, int entry_count) {
	//Implement your code
	for (int i = 0; i < entry_count; i++) {
		free(entries[i].title);
		free(entries[i].content);
	}
	free(entries);
}


int main() {
	DiaryEntry* entries = NULL;
	int entry_count = 0;
	int choice;

	do {
		printf("\n1. Add Entry\n2. View Entries\n3. Exit\nEnter choice: ");
		scanf("%d", &choice);
		getchar(); // remove the newline

		switch (choice) {
		case 1:
			entries = add_entry(entries, &entry_count);
			break;
		case 2:
			view_entries(entries, entry_count);
			break;
		case 3:
			free_entries(entries, entry_count);
			printf("Exiting program.\n");
			break;
		default:
			printf("Invalid choice.\n");
		}
	} while (choice != 3);

	return 0;
}





