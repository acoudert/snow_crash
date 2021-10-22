#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main(int ac, char **av) {
	unsigned int	counter = 0xffffffff;
	unsigned int	max_len;
	char			*arg1;
	char			currChar;
	char			buf[26];
	int				fd = open("./token", O_RDONLY);
	read(fd, buf, 25);
	buf[25] = 0;
	av[1] = buf;
LOOP:
	counter += 1; // Starts at 0
	max_len = strlen(av[1]);
	arg1 = av[1];
	do {
		if (max_len == 0)
			break;
		//printf("max_len = %u\n", max_len);
		max_len = max_len - 1;
		currChar = *arg1;
		arg1 = arg1 + 1;
	} while (currChar != '\0');
	//printf("counter = %d currChar = %d max_len = %u ~max_len = %u\n", 
	//		counter, currChar, max_len, ~max_len);
	if (strlen(av[1]) <= counter) {
		printf("\n");
		return 0;
	}
	printf("%c", *(char *)(av[1] + counter) - counter);
	goto LOOP;
}
