#include <stdio.h> 


int main(int argc, char* argv[]) {

	
	int loc_8 = 0;
	for (int i = 0; i <= 6; i++) {
		loc_8 += i;
	}
	//printf("%s %d", "local-8 = ", loc_8);//==21

	if (argc == 1) {
		return 0;
	}
	else
	{     //if argv[1] == 21
		if (atoi(argv[1]) == loc_8) {
			printf("WIN!");
		}
	}

	return 0;
}