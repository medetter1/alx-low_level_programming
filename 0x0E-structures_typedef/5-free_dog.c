#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function destroy
 * @d: instance of dog struct
 * Reurn: void
 *
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
