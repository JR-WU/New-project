#define KEYVALLEN 2048
#define STRING_LEN 30

/*   删除左边的空格   */
char * l_trim(char * szOutput, const char *szInput);

/*   删除右边的空格   */
char *r_trim(char *szOutput, const char *szInput);

/*   删除两边的空格   */
char * a_trim(char * szOutput, const char * szInput);


int GetProfileString(char *profile, char *AppName, char *KeyName, char *KeyVal );
typedef struct _DATA_SOURCE {
	char* name;
	unsigned char type;   // 1 stand for string, 2 stand for float.
	float data;
	char string_data[STRING_LEN];
}DATA_SOURCE;

DATA_SOURCE source[100];




