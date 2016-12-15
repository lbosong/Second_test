#include <stdio.h>
#include <event2/event.h>


int main(void)
{
	struct event_base*base=NULL;
	
	base=event_base_new();
	
	int i=0;
	const char**method=event_get_supported_methods();

	printf("Starting Libevent %s .Available methods are:\n",event_get_version());

	for(i=0;method[i]!=NULL;++i)
	{
		printf("%s\n",method[i]);	
	}

	event_base_dispatch(base);

	event_base_free(base);
	return 0;
}
