char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL && s2 == NULL)
	return (NULL);

	size_t len1 = (s1 != NULL) ? strlen(s1) : 0;
	size_t len2 = (s2 != NULL) ? strlen(s2) : 0;
	char *res = malloc(len1 + len2 + 1);

	if (res == NULL)
	return (NULL);

	if (s1 != NULL)
	memcpy(res, s1, len1);

	if (s2 != NULL)
	memcpy(res + len1, s2, len2);

	res[len1 + len2] = '\0';
	return (res);
}
