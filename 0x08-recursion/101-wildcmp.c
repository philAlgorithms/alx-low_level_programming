/**
 * strlen_without_wilds - gets the length of a string
 * without considering wildcards
 * @s: the string
 *
 * Return: length of the string
 */
int strlen_without_wilds(char *s)
{
	int length = 0, i = 0;

	if (*(s + i))
	{
		if (*s != '*')
			length++;

		i++;
		length += strlen_without_wilds(s + i);
	}

	return (length);
}

/**
 * check_wild - Goes through a atring with wildcard
 * until a non-wildcard string is found
 * @s: a pointer to a pointer of the string
 */
void check_wild(char **s)
{
	if (**s == '*')
	{
		(*s)++;
		check_wild(s);
	}
}

/**
 * postfix_match - checks if a string matches the postfix of another string
 * @s1: first string
 * @s2: second dtring
 *
 * Return: a pointer to the null byte located at the end of postfix
 * if identical
 */
char *postfix_match(char *s1, char *s2)
{
	int len = strlen_without_wilds(s1) - 1;
	int postfix_len = strlen_without_wilds(s2) - 1;

	if (*s2 == '*')
		check_wild(&s2);

	if (*(s1 + len - postfix_len) == *s2 && *s2 != '\0')
	{
		s2++;
		return (postfix_match(s1, s2));
	}

	return (s2);
}

/**
 * wildcmp - compares two string and checks if they are identical
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		check_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
