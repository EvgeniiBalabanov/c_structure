LIBS	=	dict libft line list dlist

define		makes
	for library in $(LIBS) ; do \
		make $(1) -C $$library ;\
	done
endef

fclean:
	$(call makes, fclean)