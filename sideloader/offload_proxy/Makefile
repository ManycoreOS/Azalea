.PHONY: prepare all

ifeq ($(TARGET),)
        TARGET=knl
endif

UKDIR = ../..

#INCS = -I$(UKDIR)/include/$(TARGET) -I$(UKDIR)/include
INCS = -I$(UKDIR)/include/$(TARGET) 
#CFLAGS = -Wall -D_GNU_SOURCE -g  
CFLAGS = -Wall -D_GNU_SOURCE -O0 -g

.DEFAULT_GOAL := all

CC = gcc
offload_local_proxy: offload_local_proxy.c

	$(CC) $(CFLAGS) $(INCS) $< offload_channel.o offload_mmap.o offload_message.o offload_fio.o offload_network.o offload_thread_pool.o -lpthread -o $@

prepare:
	$(CC) $(CFLAGS) $(INCS) offload_channel.c -o offload_channel.o -c
	$(CC) $(CFLAGS) $(INCS) offload_mmap.c -o offload_mmap.o -c
	$(CC) $(CFLAGS) $(INCS) offload_message.c -o offload_message.o -c
	$(CC) $(CFLAGS) $(INCS) offload_fio.c -o offload_fio.o -c
	$(CC) $(CFLAGS) $(INCS) offload_network.c -o offload_network.o -c
	$(CC) $(CFLAGS) $(INCS) offload_thread_pool.c -o offload_thread_pool.o -c

all: prepare offload_local_proxy

clean:
	rm -f *.o
	rm -f tags
	rm -f offload_local_proxy 
