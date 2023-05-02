#include <stdio.h>

int main() 
{
    int partitions[] = {300, 600, 350, 200, 750, 125};
    int num_partitions = sizeof(partitions) / sizeof(int);
    int processes[] = {115, 500, 358, 200, 375};
    int num_processes = sizeof(processes) / sizeof(int);

    int status[num_partitions];
    for (int i = 0; i < num_partitions; i++) 
	{
        status[i] = 0;
    }
    for (int i = 0; i < num_processes; i++) 
	{
        int j;
        for (j = 0; j < num_partitions; j++) 
		{
            if (status[j] == 0 && partitions[j] >= processes[i]) 
			{
                status[j] = 1;
                printf("Process %d of size %d KB allocated to partition %d of size %d KB\n", i+1, processes[i], j+1, partitions[j]);
                break;
            }
        }
        if (j == num_partitions) 
		{
            printf("Process %d of size %d KB could not be allocated\n", i+1, processes[i]);
        }
    }
    return 0;
}

