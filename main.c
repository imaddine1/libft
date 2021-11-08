#include "libft.h"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char src[100] = "oussama";

	
//	__builtin___ft_memmove_chk (dst1 + 3, dst1, size, __builtin_object_size (dst1 + 3, 0));
//	printf("%s\n", memmove(dst1 + 3, dst2, size));
	printf("\n%s\n", ft_memmove(src + 2, src, 3));
	

//	printf("%s\n", dest);
//	printf("%s\n", src);
//	printf("%s\n", f1);
//	printf("%s\n", ft_strnstr("sbpaaaasbpo", "po", 20));
//	printf("%s\n", strnstr("sbpsaaaasbpo", "po", 20));
	return (0);
}
