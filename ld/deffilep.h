/* A Bison parser, made by GNU Bison 1.875c.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NAME = 258,
     LIBRARY = 259,
     DESCRIPTION = 260,
     STACKSIZE_K = 261,
     HEAPSIZE = 262,
     CODE = 263,
     DATAU = 264,
     DATAL = 265,
     SECTIONS = 266,
     EXPORTS = 267,
     IMPORTS = 268,
     VERSIONK = 269,
     BASE = 270,
     CONSTANTU = 271,
     CONSTANTL = 272,
     PRIVATEU = 273,
     PRIVATEL = 274,
     ALIGNCOMM = 275,
     READ = 276,
     WRITE = 277,
     EXECUTE = 278,
     SHARED = 279,
     NONAMEU = 280,
     NONAMEL = 281,
     DIRECTIVE = 282,
     EQUAL = 283,
     ID = 284,
     DIGITS = 285
   };
#endif
#define NAME 258
#define LIBRARY 259
#define DESCRIPTION 260
#define STACKSIZE_K 261
#define HEAPSIZE 262
#define CODE 263
#define DATAU 264
#define DATAL 265
#define SECTIONS 266
#define EXPORTS 267
#define IMPORTS 268
#define VERSIONK 269
#define BASE 270
#define CONSTANTU 271
#define CONSTANTL 272
#define PRIVATEU 273
#define PRIVATEL 274
#define ALIGNCOMM 275
#define READ 276
#define WRITE 277
#define EXECUTE 278
#define SHARED 279
#define NONAMEU 280
#define NONAMEL 281
#define DIRECTIVE 282
#define EQUAL 283
#define ID 284
#define DIGITS 285




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 103 "deffilep.y"
typedef union YYSTYPE {
  char *id;
  int number;
  char *digits;
} YYSTYPE;
/* Line 1275 of yacc.c.  */
#line 103 "deffilep.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



