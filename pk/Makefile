include $(abs_top_srcdir)/Makefrag

tests = \
	cordic

CFLAGS := $(CFLAGS) \
	-Wall \
	-Werror \
	-static \
	-I$(abs_top_srcdir)

tests_pk = $(addprefix $(PREFIX)-, $(tests))

vpath %.c $(src_dir)

all: $(tests_pk)

$(PREFIX)-%: %.c
	$(CC) $(CFLAGS) $< -o $@ $(LFLAGS)

junk += $(tests_pk)
