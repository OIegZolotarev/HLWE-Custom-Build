
#include "string.h"
#include "ss_keywords.h"

bool IsKW (char *token)
{
	for (int i = 0; i < COUNT_OF_KEYWORDS; ++i)
	{
		if (!strcmp(token, keywords[i]))
		{
			return true;
		}
	}

	return false;
}