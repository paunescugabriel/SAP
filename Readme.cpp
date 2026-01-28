// OPENING AND CLOSING FILES

//1. READ BINARY FILES
FILE* f = NULL;
fopen_s(&f, "filename.ext", "rb");
fseek(f, 0, SEEK_END);
long size = ftell(f);
rewind(f);
unsigned char* buffer = (unsigned char*) malloc(size);
fread(buffer,1, size, f);
fclose(f);

//2. READ TEXT FILES
FILE* f = NULL;
fopen_s(&f, "filename.ext", "r");
char line[1024];
int lineNr = 0;
while(fgets(line, sizeof(line),f)) {
	lineNr++;
	//logic
};
fclose(f);

//3. WRITE TEXT FILES
FILE *f = NULL;
fopen_s(&f, "filename.txt", "wb+");
fprintf(f, "TEXT HERE");
fclose(f);

//4. LINE TRIMMING
char combined[2048];
size_t L = strlen(line);
while (L>0 && (line[L-1] == "\r" || line[L-1] == "\n")) {
	line[L-1] = "\0"
	L--;
}

//5. SALTING
char salt[x+1] = "kskfkdsafks";
char combined[2048];
strcpy_s(combined, sizeof(combined), line);
strcat_s(combined, sizeof(combined), salt);
//SIZEOF pointer is wrong, use size directly;

