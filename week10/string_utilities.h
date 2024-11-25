#ifndef STRING_UTILITIES_H
#define STRING_UTILITIES_H

void to_upper(char *str);
char *to_lower_pure(const char *str);
void find_content(const char *str, char **first, char **last);
char *trim(const char *str);

#endif
