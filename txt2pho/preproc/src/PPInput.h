/* Copyright (C) 1998  Thomas Portele

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

Thomas Portele
tpo@ikp.uni-bonn.de http://www.ikp.uni-bonn.de/~tpo
IKP Poppelsdorfer Allee 47, D-53115 Bonn Germany

__________________________

*/
#ifndef _PPINPUT_H_
#define _PPINPUT_H_
#include <stdio.h>

class PPInput {

   char* spacer ;
   int size ;
   int actpos ;
   int lastactpos ;
   int actstart ;
   FILE* in ;
   char* current ;
   int noget ;
   char lastz, z, nextz ;
   int stop ;
   char get_next_char(FILE*, char*) ;

 public:

   PPInput(char* i, char* sp) ;
   ~PPInput() ;
   char* get_next_token(int& pos) ;
   char* get_next_token_with_lookahead(int& pos) ; } ;

#endif   
