#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char getFlamesChar(int count){
		char flames[] = "FLAMES";
		if (count == 0) return ' ';
		return flames[(count - 1) % 6];
	}

const char* getRelationship(char c) {
	switch (toupper(c)) {
		case 'F': return "Friends";
		case 'L': return "Lover";
		case 'A': return "Adversaries";
		case 'M': return "Married";
		case 'E': return "Enemies";
		case 'S': return "Sweethearts";
		default: return " ";
	}
}

int main(int argc, char *argv[]) {
	
	char name1[50], name2[50];
	int count1 = 0, count2 = 0;
	int temp_count1[100] = {0}, temp_count2[100] = {0};
	int i;
	
	printf("Enter a name: ");
	fgets(name1, sizeof(name1), stdin);
	printf("Enter another name: ");
	fgets(name2, sizeof(name2), stdin);
	
	name1[strcspn(name1, "\n")] = 0;
	name2[strcspn(name2, "\n")] = 0;
	
	for (i = 0; name1[i] != '\0'; i++) {
		if (isalpha(name1[i])) temp_count1[tolower(name1[i])]++;
	}
	for (i = 0; name2[i] != '\0'; i++) {
		if (isalpha(name2[i])) temp_count2[tolower(name2[i])]++;
	}
	
	for (i = 0; i < 100; i++) {
		if (temp_count1[i] > 0 && temp_count2[i] > 0) {
			
			count1 += temp_count1[i];
			count2 += temp_count2[i];
		}
	}
	
	char resultName1, resultName2, finalresult;
	int finalCount = count1 + count2;
	
	resultName1 = getFlamesChar(count1);
	resultName2 = getFlamesChar(count2);
	finalresult = getFlamesChar(finalCount);
	
	printf("FLAMES Result\n");
	printf("First name Match Count: %d (Letter: %c)\n", count1, resultName1);
	printf("Second name Match Count: %d (Letter: %c)\n", count2, resultName2);
	printf("Combined Count: %d\n", finalCount);
	printf("Relationship: %s\n", getRelationship(finalresult));
	
	return 0;
}
