#include <stdio.h>
#include <stdlib.h>
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

void	run_ex (int option)
{
	char *txt = "meu textinho maroto";
	char *txt_cpy = (char*)malloc (sizeof (txt));

	printf("EX%i\n", option);
	switch (option)
	{
		case 0:
		{
			printf ("%s\n",ft_strcpy(txt_cpy, txt));
			char *src;
			char *dest;
			char *ret;

			src = calloc(11, sizeof(char));
			src = "0123456789";
			dest = calloc(11, sizeof(char));
			ret = ft_strcpy(dest, src);	
			printf("src: %s\n", src);
			printf("dest: %s\n", dest);
			printf("ret: %s\n", ret);
			break;
		}
		case 1:
			printf ("%s",ft_strncpy(txt_cpy, txt, 4));
			break;
		case 2:
		{
			printf ((ft_str_is_alpha("Meutextinhomaroto")) ? "Alfabeto\n" : "Não Alfabeto\n");
			printf ((ft_str_is_alpha("Meu textinho maroto1")) ? "Alfabeto\n" : "Não Alfabeto\n");
			break;
		}
		case 3:
		{
			printf ((ft_str_is_numeric("019324")) ? "Número\n" : "Não Número\n");
			printf ((ft_str_is_numeric("")) ? "Número\n" : "Não Número\n");
			printf ((ft_str_is_numeric("Meu textinho maroto1")) ? "Número\n" : "Não Número\n");
			break;
		}
		case 4:
		{
			printf ((ft_str_is_lowercase("asdfsad")) ? "Maiúscula\n" : "Não Maiúscula\n");
			printf ((ft_str_is_lowercase("")) ? "Maiúscula\n" : "Não Maiúscula\n");
			printf ((ft_str_is_lowercase("asdSDF")) ? "Maiúscula\n" : "Não Maiúscula\n");
			break;
		}
		case 5:
		{
			printf ((ft_str_is_uppercase("SDF")) ? "Maiúscula\n" : "Não Maiúscula\n");
			printf ((ft_str_is_uppercase("")) ? "Maiúscula\n" : "Não Maiúscula\n");
			printf ((ft_str_is_uppercase("asdSDF")) ? "Maiúscula\n" : "Não Maiúscula\n");
			break;
		}
		case 6:
		{
			printf ((ft_str_is_printable("\a")) ? "Imprimivel\n" : "Não Imprimivel\n");
			printf ((ft_str_is_printable("")) ? "Imprimivel\n" : "Não Imprimivel\n");
			printf ((ft_str_is_printable("asdSDF")) ? "Imprimivel\n" : "Não Imprimivel\n");
			break;
		}
		case 7:
			printf("%s",ft_strupcase(ft_strcpy(txt_cpy, "sadfasdfasdf FDASSDF")));
			break;
		case 8:
			printf("%s",ft_strlowcase(ft_strcpy(txt_cpy, "sadfasdasdf FDASSDF")));
			break;
		case 9:
		{
			char str1[] = "alo maluco 42beleza!";
			char str2[] = "ALO MALUCO 42BELEZA!";
			char str3[] = "alo+ma|uco a2beleza!";
			char str4[] = "ALO+MALUCO*a2BELEZA!";
			char str5[] = "^uIv#= =9Hf~2y@F3A)FTzBgF";
			char str6[] = "tsR1|vn_WE}7X6{Vm2vQf(rG}qdnT`1,qH+n";

			printf("%s\n",ft_strcapitalize(ft_strcpy(txt_cpy, "meu textinho maroto")));
			printf("str1: %s\n", str1);
			ft_strcapitalize(str1);
			printf("str1_c: %s\n", str1);
			printf("str2: %s\n", str2);
			ft_strcapitalize(str2);
			printf("str2_c: %s\n", str2);
			printf("str3: %s\n", str3);
			ft_strcapitalize(str3);
			printf("str3_c: %s\n", str3);
			printf("str4: %s\n", str4);
			ft_strcapitalize(str4);
			printf("str4_c: %s\n", str4);
			printf("str5: %s\n", str5);
			ft_strcapitalize(str5);
			printf("str5_c: %s\n", str5);
			printf("str6: %s\n", str6);
			ft_strcapitalize(str6);
			printf("str6_c: %s\n", str6);
			break;
		}
		
		/*
		//O compilador continuamente retorna que a função não existe
		case 10:
		{
			int 	src_size;
			char 	*src;
			char 	*dest;

			src = calloc(11, sizeof(char));
			dest = calloc(8, sizeof(char));
			src = "alo galera";
			src_size = ft_strlcpy(dest, src, 8);
			printf("src: %s\n", src);
			printf("dest: %s\n", dest);
			printf("src_size: %d\n", src_size);
			//ft_strcpy (txt_cpy, txt);
			//ft_strlcpy(txt_cpy, "Meu textinho maroto", 5);
			break;
		}
		case 11:
			break;
		case 12:
			break;
		*/
	}
}
/* Preciso fazer a converção de string para digito int
int	ft_putnbr (char *nb)
{
	if (nb < 10)
		return number % 10;
	return ft_putnbr(number / 10);
	return number % 10;
}*/
int	main (int argc, char **argv)
{
	if (argc == 2)
		run_ex (**(++argv) - '0');
	return (0);
}
