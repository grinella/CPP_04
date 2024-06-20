flags = -Wall -Wextra -Werror -std=c++98

name=I_want_to_set_the_world_on_fire

all:
	@clear
	@echo Sto creando gli oggetti...
	@c++ $(flags) *.cpp -o $(name)
	@sleep 0.2
	@echo Fatto ✓

fclean:
	@clear
	@echo Sto cancellando...
	@-rm -f $(name)
	@sleep 0.4
	@echo Fatto ✓

re: fclean all