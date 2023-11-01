#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	if (size == 0 || i > size)
		return (size + j);
	if (src[i] == 0)
		return (i);
	j = 0;
	while (src[j] && (i + j < size - 1))
	{
		dst[i + j] = (char)src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}