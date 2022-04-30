# **************************************************************************** #
# Makefile
#
# User: mlanca-c
# Version: 2.1
# URL: https://github.com/mlanca-c/utils
#
# Description:
#
# Makefile by fletcher97
# Some changes by mlanca-c
# Version: 2.4
# Repo: www.github.com/fletcher97/utils
#
# v2.4: Added PEDANTIC variable on configs section. If set to true a lot of
# warning flags will be added to use while compiling. By default this feature is
# turned on. Setting the variable to anything else will disable extra warnings.
# Turning it off will still compile with -Wall -Wextra -Werror.
#
# A LANG variable was aslo added to to specify what language the program is
# using so as to be able to detect the extentions of the files (not implemented)
# and enable more warnings.
#
# v2.3: A rule to check if a program can be compiled was added in other to be
# used for git hooks. A folder with hooks can be found in the same repository
# this makefile came from.
#
# As of version 2.2 this Makefile expects an asan.c file to be present in the
# asan folder inside the SRC_ROOT directory. A copy of the file is provided
# with the Makefile. Also it now uses clang instead of gcc.
#
# This makefile can be copied to a directory and it will generate the file
# structure and initialize a git repository with the .init rule. Any variables
# and rules for the specific project can be added in the appropriate section.
#
# By default this makefile assumes that libft, 42's student made library, a copy
# of which can be obtained by cloning https://github.com/fletcher97/libft.git,
# is being used. It can be removed by simply commenting any reference to it on
# the library section.
# **************************************************************************** #

PROJECT	:= libft
VERSION	:= 4.0

USER	:= mlanca-c

# **************************************************************************** #
# Project Variables
# **************************************************************************** #

NAME1	:= libft.a

NAMES	:= ${NAME1}

# **************************************************************************** #
# Configs
# **************************************************************************** #

# Operative System
OS	:= $(shell uname)

# Verbose levels
# 0: Make will be totaly silenced
# 1: Make will print echos and printf
# 2: Make will not be silenced but target commands will not be printed
# 3: Make will print each command
# 4: Make will print all debug info
#
# If no value is specified or an incorrect value is given make will print each
# command like if VERBOSE was set to 3.
VERBOSE	:= 2

# Version 2.1 and above of this makefile can generate targets to use other
# makefiles as dependencies. This feature will execute the rule of same name in
# an other makefile. This can be usefull in many situation but also a hinderence
# in others. If for example you just want to clean the root directory the clean
# rule will be executed in any other makefile specified. You can deactivate the
# creation of these targets by setting the bellow variable to 0.
CREATE_LIB_TARGETS	:= 0

# Pedantic allows for extra warning flags to be used while compiling. If set to
# true these flags are applied. If set to anything else the flags will not be
# used. By default it's turned on.
PEDANTIC	:= false

# When set to true, all the *_ROOT folders will be set to ./
# I recommend setting this true for small projects with just one or two files.
SINGLE_DIR	:= false

# **************************************************************************** #
# Language
# **************************************************************************** #

# Specify the language use by your program. This will allow to detect file
# extentions automatically (not implemented). It also allows fo warnings to be
# activated/deactivated based on the language used.
LANG	:= c
LANG	:= $(shell echo '${LANG}' | tr '[:lower:]' '[:upper:]')

# Add more extensions here.
ifeq (${LANG},C)
EXT		:= c
HEXT	:= h
endif
ifeq (${LANG},C++)
EXT		:= cpp
HEXT	:= hpp
endif

# **************************************************************************** #
# Colors and Messages
# **************************************************************************** #

GREEN		:= \e[38;5;2m
BLUE		:= \e[38;5;20m
YELLOW		:= \e[38;5;3m
RED			:= \e[38;5;1m
DRED		:= \e[38;5;88m
GRAY		:= \e[38;5;8m
RESET		:= \e[0m

_OBJS	:= ${DRED}[obj]: ${RESET}
_BINS	:= ${BLUE}[bin]: ${RESET}
_LIBS	:= ${YELLOW}[lib]: ${RESET}
_DEPS	:= ${GRAY}[dep]: ${RESET}

_SUCCESS	:= ${GREEN}[ok]:${RESET}
_FAILURE	:= ${RED}[ko]:${RESET}
_INFO		:= ${YELLOW}[info]:${RESET}


# **************************************************************************** #
# Compiler & Flags
# **************************************************************************** #

# Compiler
AR	:= ar -rc
ifeq (${LANG},C)
	CC := gcc
else ifeq (${LANG},C++)
	CC := c++
endif

# Compiler flags
CFLAGS := -Wall -Wextra -Werror

# Pedantic flags
ifeq (${PEDANTIC},true)
	CFLAGS += -Wpedantic -Werror=pedantic -pedantic-errors -Wcast-align
	CFLAGS += -Wcast-qual -Wdisabled-optimization -Wformat=2 -Wuninitialized
	CFLAGS += -Winit-self -Wmissing-include-dirs -Wredundant-decls -Wshadow
	CFLAGS += -Wstrict-overflow=5 -Wundef -fdiagnostics-show-option
	CFLAGS += -fstack-protector-all -fstack-clash-protection
	ifeq (${CC},gcc)
		CFLAGS += -Wformat-signedness -Wformat-truncation=2 -Wformat-overflow=2
		CFLAGS += -Wlogical-op -Wstringop-overflow=4
	endif
	ifeq (${LANG},C++)
		CFLAGS += -Wctor-dtor-privacy -Wold-style-cast -Woverloaded-virtual
		CFLAGS += -Wsign-promo
		ifeq (${CC},gcc)
			CFLAGS += -Wstrict-null-sentinel -Wnoexcept
		else ifeq (${CC},c++)
			CFLAGS += -std=c++98
		endif
	endif
endif

# Generic debug flags
DFLAGS := -g

# Address sanitizing flags
ASAN := -fsanitize=address -fsanitize-recover=address
ASAN += -fno-omit-frame-pointer -fno-common
ASAN += -fsanitize=pointer-subtract -fsanitize=pointer-compare
# Technicaly UBSan but works with ASan
ASAN += -fsanitize=undefined
# Technicaly LSan but works with ASan
ASAN += -fsanitize=leak
# Thread sanitizing flags
TSAN := -fsanitize=thread
# Memory sanitizing flags
MSAN := -fsanitize=memory -fsanitize-memory-track-origins

# **************************************************************************** #
# File Manipulation
# **************************************************************************** #

RM		:= rm -f
PRINT	:= printf
CP		:= cp -r
MKDIR	:= mkdir -p
NORM	:= norminette
FIND	:= find
ifeq (${OS},Linux)
 SED	:= sed -i.tmp --expression
else ifeq (${OS},Darwin)
 SED	:= sed -i.tmp
endif

# Definitions
T		:= 1
comma	:= ,
empty	:=
space	:= $(empty) $(empty)
tab		:= $(empty)	$(empty)

# **************************************************************************** #
# Root Folders
# **************************************************************************** #

ifeq (${SINGLE_DIR},false)
BIN_ROOT	:= bin/
DEP_ROOT	:= dep/
INC_ROOT	:= inc/
LIB_ROOT	:= ./
OBJ_ROOT	:= obj/
SRC_ROOT	:= src/
else
$(foreach var,\
	BIN_ROOT DEP_ROOT INC_ROOT LIB_ROOT OBJ_ROOT SRC_ROOT,\
	$(eval $(var) := ./)\
)
endif

# **************************************************************************** #
# Libraries
# **************************************************************************** #

# # Libft
# LIBFT_TARGET	= ${CREATE_LIB_TARGETS}
# LIBFT_ROOT	:= ${LIB_ROOT}libft/
# LIBFT_INC	:= ${LIBFT_ROOT}inc/
# LIBFT		:= ${LIBFT_ROOT}bin/libft.a
# 
# ifeq (${LIBFT_TARGET},0)
# undefine LIBFT
# undefine LIBFT_ROOT
# undefine LIBFT_INC
# endif
# 
# # MLX
# MLX_TARGET	:= false
# MLX_TYPE	:= mms
# ifeq (${OS},Linux)
# 	MLX			:= minilibx-linux
# 	MLX_ROOT	:= ${LIB_ROOT}minilibx-linux/
# 	MLX_LIB		:= ${MLX_ROOT}libmlx.a
# 	MLX_FLAGS	+= -lbsd -L${MLX_ROOT} -lmlx -lXext -lX11 -lm
# else ifeq ($(shell uname),Darwin)
# 	ifeq (${MLX_TYPE}, opengl)
# 		MLX			:= minilibx_opengl_20191021
# 		MLX_ROOT	:= ${LIB_ROOT}minilibx_opengl_20191021/
# 		MLX_FLAGS	:= -L${MLX_ROOT} -lmlx 
# 		MLX_FLAG	+= -framework OpenGL -framework AppKit -lz
# 		MLX_LIB		:= ${MLX_ROOT}libmlx.dylib
# 	else ifeq (${MLX_TYPE}, mms)
# 		MLX			:= minilibx_mms_20200219 
# 		MLX_ROOT	:= ${LIB_ROOT}minilibx_mms_20200219/
# 		MLX_FLAG	:= -L${MLX_ROOT} -lmlx
# 		MLX_LIB		:= ${MLX_ROOT}libmlx.dylib
# 	endif
# endif
# 
# ifeq (${MLX_TARGET},false)
# undefine MLX
# undefine MLX_ROOT
# undefine MLX_FLAGS
# undefine MLX_LIB
# endif
# 
# INC_DIRS	+= ${LIBFT_INC} ${MLX_ROOT}
# LIBS		+= ${LIBFT} ${MLX}
# CFLAGS		+= ${MLX_FLAGS}
# 
# DEFAULT_LIBS		:= ${LIBFT_ROOT}
# DEFAULT_LIB_RULES	:= all clean re
# DEFAULT_LIB_RULES	+= fclean clean_all clean_dep
# DEFAULT_LIB_RULES	+= debug debug_re debug_asan debug_asan_re
# DEFAULT_LIB_RULES	+= debug_tsan debug_tsan_re debug_msan debug_msan_re

# **************************************************************************** #
# Content Folders
# **************************************************************************** #

# Lists of ':' separated folders inside SRC_ROOT containing source files. Each
# folder needs to end with a '/'. The path to the folders is relative to
# SRC_ROOTIf SRC_ROOT contains files './' needs to be in the list. Each list is
# separated by a space or by going to a new line and adding onto the var.
# Exemple:
# DIRS := folder1/:folder2/
# DIRS += folder1/:folder3/:folder4/
DIRS	:= ft_ctype/:ft_lst/:ft_math/:ft_readline/:ft_stdio/:ft_stdlib/:ft_string/
		   

SRC_DIRS_LIST	:= $(addprefix ${SRC_ROOT},${DIRS})
SRC_DIRS_LIST	:= $(foreach dl,${SRC_DIRS_LIST},$(subst :,:${SRC_ROOT},${dl}))

SRC_DIRS	= $(call rmdup,$(subst :,${space},${SRC_DIRS_LIST}))
OBJ_DIRS	= $(subst ${SRC_ROOT},${OBJ_ROOT},${SRC_DIRS})
DEP_DIRS	= $(subst ${SRC_ROOT},${DEP_ROOT},${SRC_DIRS})

# List of folders with header files.Each folder needs to end with a '/'. The
# path to the folders is relative to the root of the makefile. Library includes
# can be specified here.
INC_DIRS	+= ${INC_ROOT}

# **************************************************************************** #
# Files
# **************************************************************************** #

SRCS_LIST	= $(foreach dl,${SRC_DIRS_LIST},$(subst ${space},:,\
	$(strip $(foreach dir,$(subst :,${space},${dl}),\
	$(wildcard ${dir}*.${EXT})))))
OBJS_LIST	= $(subst ${SRC_ROOT},${OBJ_ROOT},$(subst .${EXT},.o,${SRCS_LIST}))

SRCS	= $(foreach dir,${SRC_DIRS},$(wildcard ${dir}*.${EXT}))
OBJS	= $(subst ${SRC_ROOT},${OBJ_ROOT},${SRCS:.${EXT}=.o})
DEPS	= $(subst ${SRC_ROOT},${DEP_ROOT},${SRCS:.${EXT}=.d})

INCS	:= ${addprefix -I,${INC_DIRS}}

BINS	:= ${addprefix ${BIN_ROOT},${NAMES}}

# **************************************************************************** #
# Conditions
# **************************************************************************** #

ifeq (${OS},Linux)
	SED := sed -i.tmp --expression
else ifeq (${OS},Darwin)
	SED := sed -i.tmp
endif

ifeq ($(VERBOSE),0)
	MAKEFLAGS += --silent
	BLOCK := &>/dev/null
else ifeq ($(VERBOSE),1)
	MAKEFLAGS += --silent
else ifeq ($(VERBOSE),2)
	AT := @
else ifeq ($(VERBOSE),4)
	MAKEFLAGS += --debug=v
endif

# ifeq (${CREATE_LIB_TARGETS},0)
# 	undefine DEFAULT_LIBS
# endif

# **************************************************************************** #
# VPATHS
# **************************************************************************** #

vpath %.o $(OBJ_ROOT)
vpath %.${HEXT} $(INC_ROOT)
vpath %.${EXT} $(SRC_DIRS)
vpath %.d $(DEP_DIRS)

# **************************************************************************** #
# Project Target
# **************************************************************************** #

all: ${BINS}

.SECONDEXPANSION:
${BIN_ROOT}${NAME1}: $$(call get_files,$${@F},$${OBJS_LIST})
	${AT}${MKDIR} ${@D} ${BLOCK}
	${AT}${AR} $@ $^ ${BLOCK}
	${AT}${PRINT} "${_LIBS} $@\n" ${BLOCK}

# **************************************************************************** #
# Clean Targets
# **************************************************************************** #

clean: $$(call get_lib_target,$${DEFAULT_LIBS},$$@)
	${AT}${PRINT} "${_INFO} removed objects\n" ${BLOCK}
	${AT}${MKDIR} ${OBJ_ROOT} ${BLOCK}
	${AT}${FIND} ${OBJ_ROOT} -type f -name "*.o" -delete ${BLOCK}

fclean: $$(call get_lib_target,$${DEFAULT_LIBS},$$@)
	${AT}${PRINT} "${_INFO} removed objects\n" ${BLOCK}
	${AT}${MKDIR} ${OBJ_ROOT} ${BLOCK}
	${AT}${FIND} ${OBJ_ROOT} -type f -name "*.o" -delete ${BLOCK}
	${AT}${PRINT} "${_INFO} removed bins\n" ${BLOCK}
	${AT}${MKDIR} ${BIN_ROOT} ${BLOCK}
	${AT}${FIND} ${BIN_ROOT} -type f\
		$(addprefix -name ,${NAMES}) -delete ${BLOCK}

clean_dep: $$(call get_lib_target,$${DEFAULT_LIBS},$$@)
	${AT}${PRINT} "${_INFO} removed dependencies\n" ${BLOCK}
	${AT}${MKDIR} ${DEP_ROOT} ${BLOCK}
	${AT}${FIND} ${DEP_ROOT} -type f -name "*.d" -delete ${BLOCK}

clean_all: fclean clean_dep

re: fclean all

# **************************************************************************** #
# Debug Targets
# **************************************************************************** #

debug: CFLAGS += ${DFLAGS}
debug: $$(call get_lib_target,$${DEFAULT_LIBS},$$@) all

obj/asan/asan.o: src/asan/asan.c
	${AT}${MKDIR} ${@D} ${BLOCK}
	${AT}${CC} -o $@ -c $< ${BLOCK}

debug_asan: CFLAGS += ${DFLAGS} ${ASAN}
debug_asan: ASAN_FILE = obj/asan/asan.o
debug_asan: $$(call get_lib_target,$${DEFAULT_LIBS},$$@) obj/asan/asan.o all

debug_tsan: CFLAGS += ${DFLAGS} ${TSAN}
debug_tsan: $$(call get_lib_target,$${DEFAULT_LIBS},$$@) all

debug_msan: CFLAGS += ${DFLAGS} ${MSAN}
debug_msan: $$(call get_lib_target,$${DEFAULT_LIBS},$$@) all

debug_re: fclean debug

debug_asan_re: fclean debug_asan

debug_tsan_re: fclean debug_tsan

debug_msan_re: fclean debug_msan

# **************************************************************************** #
# Utility Targets
# **************************************************************************** #

.init:
	${AT}${PRINT} "${_INFO} creating folder structure\n" ${BLOCK}
	${AT}${MKDIR} ${DEP_ROOT} ${BLOCK}
	${AT}${MKDIR} ${BIN_ROOT} ${BLOCK}
	${AT}${MKDIR} ${DEP_ROOT} ${BLOCK}
	${AT}${MKDIR} ${INC_ROOT} ${BLOCK}
	${AT}${MKDIR} ${OBJ_ROOT} ${BLOCK}
	${AT}${MKDIR} ${SRC_ROOT} ${BLOCK}
	${AT}${PRINT} "${_INFO} initializing git repository\n" ${BLOCK}
	${AT}git init ${BLOCK}
	${AT}echo "*.o\n*.d\n.vscode\na.out\n.DS_Store\nbin/\n*.ignore"\
		> .gitignore ${BLOCK}
	${AT}date > $@ ${BLOCK}
	${AT}${PRINT} "${_INFO} creating first commit\n" ${BLOCK}
	${AT}git add .gitignore ${BLOCK}
	${AT}git add $@ ${BLOCK}
	${AT}git add Makefile ${BLOCK}
	${AT}git commit -m "init" ${BLOCK}

# Meta target to force a target to be executed
.FORCE: ;

# Print a specifique variable
print-%: ; @echo $*=$($*)

# List all the targets in alphabetical order
targets:
	${AT}${MAKE} LC_ALL=C -pRrq -f ${CURRENT_FILE} : 2>/dev/null\
		| awk -v RS= -F: '/^# File/,/^# files hash-table stats/\
			{if ($$1 !~ "^[#]") {print $$1}}\
			{if ($$1 ~ "# makefile") {print $$2}}'\
		| sort

compile-test: ${addprefix compile-test/,${NAMES}}

# **************************************************************************** #
# .PHONY
# **************************************************************************** #

# Phony clean targets
.PHONY: clean fclean clean_dep clean_all

# Phony debug targets
.PHONY: debug debug_re debug_asan debug_asan_re debug_tsan debug_tsan_re

# Phony utility targets
.PHONY: targets .FORCE compile-test

# Phony execution targets
.PHONY: re all

# **************************************************************************** #
# Constantes
# **************************************************************************** #

NULL =
SPACE = ${NULL} #
CURRENT_FILE = ${MAKEFILE_LIST}

# **************************************************************************** #
# Functions
# **************************************************************************** #

# Get the index of a given word in a list
_index = $(if $(findstring $1,$2),$(call _index,$1,\
	$(wordlist 2,$(words $2),$2),x $3),$3)
index = $(words $(call _index,$1,$2))

# Get value at the same index
lookup = $(word $(call index,$1,$2),$3)

# Remove duplicates
rmdup = $(if $1,$(firstword $1) $(call rmdup,$(filter-out $(firstword $1),$1)))

# Get files for a specific binary
get_files = $(subst :,${space},$(call lookup,$1,${NAMES},$2))

# Get default target for libs given a rule
get_lib_target = $(foreach lib,$1,${lib}/$2)

# **************************************************************************** #
# Target Templates
# **************************************************************************** #

define make_bin_def
${1}: ${2}
endef

define make_obj_def
${1}: ${2} ${3}
	$${AT}$${PRINT} "$${_OBJS} $${@F}\n" $${BLOCK}
	$${AT}${MKDIR} $${@D} $${BLOCK}
	$${AT}$${CC} $${CFLAGS} $${INCS} -c $$< -o $$@ $${BLOCK}
endef

define make_dep_def
${1}: ${2}
	$${AT}$${PRINT} "$${_DEPS} $${@F}\n" $${BLOCK}
	$${AT}${MKDIR} $${@D} $${BLOCK}
	$${AT}$${CC} -MM $$< $${INCS} -MF $$@ $${BLOCK}
	$${AT}$${SED} 's|:| $$@ :|' $$@ $${SED_END} $${BLOCK}
	$${AT}$${SED} '1 s|^|$${@D}/|' $$@ && rm -f $$@.tmp $${BLOCK}
	$${AT}$${SED} '1 s|^$${DEP_ROOT}|$${OBJ_ROOT}|' $$@\
		&& rm -f $$@.tmp $${BLOCK}
endef

define make_lib_def
${1}/${2}: .FORCE
	make -C ${1} ${2}
	$${AT}$${PRINT} "$${_LIBS} $${@F}\n" $${BLOCK}
endef

define make_compile_test_def
compile-test/${1}: .FORCE
	$${AT}$${PRINT} "[testing]: $${@F}\n" $${BLOCK}
	$${AT}$${CC} $${CFLAGS} -fsyntax-only $${INCS} $${ASAN_FILE}\
		$$(call get_files,$${@F},$${SRCS_LIST}) $${BLOCK}
endef

# **************************************************************************** #
# Target Generator
# **************************************************************************** #

ifneq (${BIN_ROOT},./)
$(foreach bin,${BINS},$(eval\
$(call make_bin_def,$(notdir ${bin}),${bin})))
endif

$(foreach src,${SRCS},$(eval\
$(call make_dep_def,$(subst ${SRC_ROOT},${DEP_ROOT},${src:.${EXT}=.d}),${src})))

$(foreach src,${SRCS},$(eval\
$(call make_obj_def,$(subst ${SRC_ROOT},${OBJ_ROOT},${src:.${EXT}=.o}),\
${src},\
$(subst ${SRC_ROOT},${DEP_ROOT},${src:.${EXT}=.d}))))

$(foreach lib,${DEFAULT_LIBS},$(foreach target,${DEFAULT_LIB_RULES},$(eval\
$(call make_lib_def,${lib},${target}))))

$(foreach name,$(NAMES),$(eval\
$(call make_compile_test_def,${name})))

# **************************************************************************** #
# Includes
# **************************************************************************** #

-include ${DEPS}
