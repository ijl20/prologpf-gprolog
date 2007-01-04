/*-------------------------------------------------------------------------*
 * GNU Prolog                                                              *
 *                                                                         *
 * Part  : FD constraint solver buit-in predicates                         *
 * File  : math_supp.h                                                     *
 * Descr.: mathematical support - header file                              *
 * Author: Daniel Diaz                                                     *
 *                                                                         *
 * Copyright (C) 1999-2007 Daniel Diaz                                     *
 *                                                                         *
 * GNU Prolog is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU General Public License as published by the   *
 * Free Software Foundation; either version 2, or any later version.       *
 *                                                                         *
 * GNU Prolog is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of              *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU        *
 * General Public License for more details.                                *
 *                                                                         *
 * You should have received a copy of the GNU General Public License along *
 * with this program; if not, write to the Free Software Foundation, Inc.  *
 * 51 Franklin St, Fifth Floor, Boston, MA  02110-1301, USA.               *
 *-------------------------------------------------------------------------*/

/* $Id$ */

/*---------------------------------*
 * Constants                       *
 *---------------------------------*/

#define MASK_EMPTY                 0
#define MASK_LEFT                  1
#define MASK_RIGHT                 2




#if 0
#define DEBUG
#endif




/*---------------------------------*
 * Type Definitions                *
 *---------------------------------*/

/*---------------------------------*
 * Global Variables                *
 *---------------------------------*/


#ifdef MATH_SUPP_FILE

Bool full_ac;

#ifdef DEBUG
char *cur_op;
#endif

#else

#ifdef DEBUG
char *cur_op;
#endif

extern Bool full_ac;

#endif


/*---------------------------------*
 * Function Prototypes             *
 *---------------------------------*/

Bool Load_Left_Right(Bool optim_eq, WamWord le_word, WamWord re_word,
		     int *mask, long *c, WamWord *l_word, WamWord *r_word);

Bool Term_Math_Loading(WamWord l_word, WamWord r_word);

Bool Fd_Math_Unify_X_Y(WamWord x, WamWord y);



#ifdef DEBUG

void Debug_Display(char *fct, int n, ...);

#endif



	  /* defined in fd_math_fd.fd */

Bool x_eq_c(WamWord x, WamWord c);	/* in math_supp.c */

Bool x_eq_y(WamWord x, WamWord y);

Bool x_plus_c_eq_y(WamWord x, WamWord c, WamWord y);

Bool x_eq_y_F(WamWord x, WamWord y);

Bool x_plus_c_eq_y_F(WamWord x, WamWord c, WamWord y);



Bool x_neq_c(WamWord x, WamWord c);

Bool x_neq_y(WamWord x, WamWord y);

Bool x_plus_c_neq_y(WamWord x, WamWord c, WamWord y);



Bool x_lt_y(WamWord x, WamWord y);



Bool x_lte_c(WamWord x, WamWord c);

Bool x_lte_y(WamWord x, WamWord y);

Bool x_plus_c_lte_y(WamWord x, WamWord c, WamWord y);



Bool x_gte_c(WamWord x, WamWord c);

Bool x_plus_c_gte_y(WamWord x, WamWord c, WamWord y);



Bool ax_eq_y(WamWord a, WamWord x, WamWord y);

Bool x_plus_y_eq_z(WamWord x, WamWord y, WamWord z);

Bool ax_plus_y_eq_z(WamWord a, WamWord x, WamWord y, WamWord z);

Bool ax_plus_by_eq_z(WamWord a, WamWord x, WamWord b, WamWord y, WamWord z);

Bool x_plus_y_plus_z_eq_t(WamWord x, WamWord y, WamWord z, WamWord t);

Bool ax_plus_y_plus_z_eq_t(WamWord a, WamWord x, WamWord y, WamWord z,
			   WamWord t);

Bool ax_plus_by_plus_z_eq_t(WamWord a, WamWord x, WamWord b, WamWord y,
			    WamWord z, WamWord t);

Bool ax_eq_y_F(WamWord a, WamWord x, WamWord y);

Bool x_plus_y_eq_z_F(WamWord x, WamWord y, WamWord z);

Bool ax_plus_y_eq_z_F(WamWord a, WamWord x, WamWord y, WamWord z);

Bool ax_plus_by_eq_z_F(WamWord a, WamWord x, WamWord b, WamWord y,
		       WamWord z);

Bool x_plus_y_plus_z_eq_t_F(WamWord x, WamWord y, WamWord z, WamWord t);

Bool ax_plus_y_plus_z_eq_t_F(WamWord a, WamWord x, WamWord y, WamWord z,
			     WamWord t);

Bool ax_plus_by_plus_z_eq_t_F(WamWord a, WamWord x, WamWord b, WamWord y,
			      WamWord z, WamWord t);



Bool zero_power_n_eq_y(WamWord n, WamWord y);

Bool a_power_n_eq_y(WamWord a, WamWord n, WamWord y);

Bool x_power_a_eq_y(WamWord x, WamWord a, WamWord y);

Bool x2_eq_y(WamWord x, WamWord y);

Bool xy_eq_z(WamWord x, WamWord y, WamWord z);

Bool a_power_n_eq_y_F(WamWord a, WamWord n, WamWord y);

Bool x_power_a_eq_y_F(WamWord x, WamWord a, WamWord y);

Bool x2_eq_y_F(WamWord x, WamWord y);

Bool xy_eq_z_F(WamWord x, WamWord y, WamWord z);



Bool min_x_a_eq_z(WamWord x, WamWord a, WamWord z);

Bool min_x_y_eq_z(WamWord x, WamWord y, WamWord z);

Bool min_x_a_eq_z_F(WamWord x, WamWord a, WamWord z);

Bool min_x_y_eq_z_F(WamWord x, WamWord y, WamWord z);

Bool max_x_a_eq_z(WamWord x, WamWord a, WamWord z);

Bool max_x_y_eq_z(WamWord x, WamWord y, WamWord z);

Bool max_x_a_eq_z_F(WamWord x, WamWord a, WamWord z);

Bool max_x_y_eq_z_F(WamWord x, WamWord y, WamWord z);



Bool abs_x_minus_a_eq_z(WamWord x, WamWord a, WamWord z);

Bool abs_x_minus_y_eq_z(WamWord x, WamWord y, WamWord z);

Bool abs_x_minus_a_eq_z_F(WamWord x, WamWord a, WamWord z);

Bool abs_x_minus_y_eq_z_F(WamWord x, WamWord y, WamWord z);



Bool quot_rem_a_y_r_eq_z(WamWord a, WamWord y, WamWord r, WamWord z);

Bool quot_rem_x_a_r_eq_z(WamWord x, WamWord a, WamWord r, WamWord z);

Bool quot_rem_x_y_r_eq_z(WamWord x, WamWord y, WamWord r, WamWord z);

Bool quot_rem_a_y_r_eq_z_F(WamWord a, WamWord y, WamWord r, WamWord z);

Bool quot_rem_x_a_r_eq_z_F(WamWord x, WamWord a, WamWord r, WamWord z);

Bool quot_rem_x_y_r_eq_z_F(WamWord x, WamWord y, WamWord r, WamWord z);



	  /* defined in fd_bool_fd.fd */

Bool not_x_eq_b(WamWord x, WamWord b);

Bool x_equiv_y_eq_b(WamWord x, WamWord y, WamWord b);

Bool x_nequiv_y_eq_b(WamWord x, WamWord y, WamWord b);

Bool x_imply_y_eq_1(WamWord x, WamWord y);

Bool x_imply_y_eq_b(WamWord x, WamWord y, WamWord b);

Bool x_nimply_y_eq_b(WamWord x, WamWord y, WamWord b);

Bool x_and_y_eq_0(WamWord x, WamWord y);

Bool x_and_y_eq_b(WamWord x, WamWord y, WamWord b);

Bool x_nand_y_eq_b(WamWord x, WamWord y, WamWord b);

Bool x_or_y_eq_1(WamWord x, WamWord y);

Bool x_or_y_eq_b(WamWord x, WamWord y, WamWord b);

Bool x_nor_y_eq_b(WamWord x, WamWord y, WamWord b);



Bool truth_x_eq_c(WamWord x, WamWord c, WamWord b);

Bool truth_x_eq_y(WamWord x, WamWord y, WamWord b);

Bool truth_x_plus_c_eq_y(WamWord x, WamWord c, WamWord y, WamWord b);

Bool truth_x_eq_c_F(WamWord x, WamWord c, WamWord b);

Bool truth_x_eq_y_F(WamWord x, WamWord y, WamWord b);

Bool truth_x_plus_c_eq_y_F(WamWord x, WamWord c, WamWord y, WamWord b);



Bool truth_x_neq_c(WamWord x, WamWord c, WamWord b);

Bool truth_x_neq_y(WamWord x, WamWord y, WamWord b);

Bool truth_x_plus_c_neq_y(WamWord x, WamWord c, WamWord y, WamWord b);

Bool truth_x_neq_c_F(WamWord x, WamWord c, WamWord b);

Bool truth_x_neq_y_F(WamWord x, WamWord y, WamWord b);

Bool truth_x_plus_c_neq_y_F(WamWord x, WamWord c, WamWord y, WamWord b);



Bool truth_x_lt_y(WamWord x, WamWord y, WamWord b);



Bool truth_x_lte_c(WamWord x, WamWord c, WamWord b);

Bool truth_x_lte_y(WamWord x, WamWord y, WamWord b);

Bool truth_x_plus_c_lte_y(WamWord x, WamWord c, WamWord y, WamWord b);



Bool truth_x_gte_c(WamWord x, WamWord c, WamWord b);

Bool truth_x_plus_c_gte_y(WamWord x, WamWord c, WamWord y, WamWord b);



#ifdef DEBUG

#define DEBUG_2(f, a1, a2)                 Debug_Display(#f, 2, a1, a2)

#define DEBUG_3(f, a1, a2, a3)             Debug_Display(#f, 3, a1, a2, a3)

#define DEBUG_4(f, a1, a2, a3, a4)         Debug_Display(#f, 4, a1, a2, a3, a4)

#define DEBUG_5(f, a1, a2, a3, a4, a5)     Debug_Display(#f, 5, a1, a2, a3, a4, a5)

#define DEBUG_6(f, a1, a2, a3, a4, a5, a6) Debug_Display(#f, 6, a1, a2, a3, a4, a5, a6)

#else

#define DEBUG_2(f, a1, a2)

#define DEBUG_3(f, a1, a2, a3)

#define DEBUG_4(f, a1, a2, a3, a4)

#define DEBUG_5(f, a1, a2, a3, a4, a5)

#define DEBUG_6(f, a1, a2, a3, a4, a5, a6)

#endif



#define PRIM_CSTR_2(f, a1, a2)			\
  do						\
    {						\
      DEBUG_2(f, a1, a2);			\
      if (!f(a1, a2))				\
	return FALSE;				\
    }						\
  while (0)

#define PRIM_CSTR_3(f, a1, a2, a3)		\
  do						\
    {						\
      DEBUG_3(f, a1, a2, a3);			\
      if (!f(a1, a2, a3))			\
	return FALSE;				\
    }						\
  while (0)

#define PRIM_CSTR_4(f, a1, a2, a3, a4)		\
  do						\
    {						\
      DEBUG_4(f, a1, a2, a3, a4);		\
      if (!f(a1, a2, a3, a4))			\
	return FALSE;				\
    }						\
  while (0)

#define PRIM_CSTR_5(f, a1, a2, a3, a4, a5)	\
  do						\
    {						\
      DEBUG_5(f, a1, a2, a3, a4, a5);		\
      if (!f(a1, a2, a3, a4, a5))		\
	return FALSE;				\
    }						\
  while (0)

#define PRIM_CSTR_6(f, a1, a2, a3, a4, a5, a6)	\
  do						\
    {						\
      DEBUG_6(f, a1, a2, a3, a4, a5, a6);	\
      if (!f(a1, a2, a3, a4, a5, a6))		\
	return FALSE;				\
    }						\
  while (0)




#define MATH_CSTR_2(f, a1, a2)			\
  do						\
    {						\
      if (full_ac == FALSE)			\
	PRIM_CSTR_2(f, a1, a2);			\
      else					\
	PRIM_CSTR_2(f##_F, a1, a2);		\
    }						\
  while (0)

#define MATH_CSTR_3(f, a1, a2, a3)		\
  do						\
    {						\
      if (full_ac == FALSE)			\
	PRIM_CSTR_3(f, a1, a2, a3);		\
      else					\
	PRIM_CSTR_3(f##_F, a1, a2, a3);		\
    }						\
  while (0)

#define MATH_CSTR_4(f, a1, a2, a3, a4)		\
  do						\
    {						\
      if (full_ac == FALSE)			\
	PRIM_CSTR_4(f, a1, a2, a3, a4);		\
      else					\
	PRIM_CSTR_4(f##_F, a1, a2, a3, a4);	\
    }						\
  while (0)

#define MATH_CSTR_5(f, a1, a2, a3, a4, a5)	\
  do						\
    {						\
      if (full_ac == FALSE)			\
	PRIM_CSTR_5(f, a1, a2, a3, a4, a5);	\
      else					\
	PRIM_CSTR_5(f##_F, a1, a2, a3, a4, a5);	\
    }						\
  while (0)

#define MATH_CSTR_6(f, a1, a2, a3, a4, a5, a6)		\
  do							\
    {							\
      if (full_ac == FALSE)				\
	PRIM_CSTR_6(f, a1, a2, a3, a4, a5, a6);		\
      else						\
	PRIM_CSTR_6(f##_F, a1, a2, a3, a4, a5, a6);	\
    }							\
  while (0)

