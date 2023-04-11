/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sources.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:33:27 by tate              #+#    #+#             */
/*   Updated: 2023/04/11 12:36:03 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOURCES_H
# define SOURCES_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>
# include <stdarg.h>
# include "struct.h"
# include <math.h>
# include <sys/errno.h>
# include <dirent.h>
# include <term.h>
# include <curses.h> 
# include <time.h>
# include "macro.h"

# if __has_include("memory/memory.h")
#  include "memory/memory.h"
# endif
# if __has_include("vlib/vlib.h")
#  include "vlib/vlib.h"
# endif
# if __has_include("mlib/mlib.h")
#  include "mlib/mlib.h"
# endif
# if __has_include("p/p.h")
#  include "p/p.h"
# endif
# if __has_include("string/string.h")
#  include "string/string.h"
# endif
# if __has_include("mlx/minilibx.h")
#  include "mlx/minilibx.h"
# endif
# if __has_include("cfiles/cfiles.h")
#  include "cfiles/cfiles.h"
# endif
# if __has_include("mlx/minilibx.h")
#  include "mlx/minilibx.h"
# endif
# if __has_include("list/list.h")
#  include "list/list.h"
# endif
# if __has_include("vector/vector.h")
#  include "vector/vector.h"
# endif
# if __has_include("vector/vector.h")
#  include "vector/vector.h"
# endif
# if __has_include("int/int.h")
#  include "int/int.h"
# endif
# if __has_include("str_array/str_array.h")
#  include "str_array/str_array.h"
# endif
# if __has_include("vector/vector.h")
#  include "vector/vector.h"
# endif
# if __has_include("random/random.h")
#  include "random/random.h"
# endif
# if __has_include("keyval/keyval.h")
#  include "keyval/keyval.h"
# endif

#endif