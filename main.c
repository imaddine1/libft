#include "libft.h"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char	dest[100] = "tripouille";

	//memset(dest, 'r', 6);
	printf("%s\n", ft_strjoin(dest, "imad"));

//	printf("%s\n", dest);
//	printf("%s\n", src);
//	printf("%s\n", f1);
//	printf("%s\n", ft_strnstr("sbpaaaasbpo", "po", 20));
//	printf("%s\n", strnstr("sbpsaaaasbpo", "po", 20));
	return (0);
}
