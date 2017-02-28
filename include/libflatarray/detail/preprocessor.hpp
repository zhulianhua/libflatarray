/**
 * Copyright 2016-2017 Andreas Schäfer,
 * heavily based on the Boost Preprocessor library by Paul Mensonides (copyright 2002)
 *
 * Distributed under the Boost Software License, Version 1.0. (See accompanying
 * file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#ifndef FLAT_ARRAY_DETAIL_PREPROCESSOR_HPP
#define FLAT_ARRAY_DETAIL_PREPROCESSOR_HPP

#define LIBFLATARRAY_NIL()

#ifdef _MSC_BUILD
#  message( andi1 )
#  define LIBFLATARRAY_EMPTY()
#  define LIBFLATARRAY_ELEM_I(INDEX, LIST) LIBFLATARRAY_ELEM_II(LIBFLATARRAY_ELEM_ ## INDEX LIST)
#  define LIBFLATARRAY_ELEM_II(ELEMENT) LIBFLATARRAY_ELEM_IV(LIBFLATARRAY_ELEM_III ELEMENT)
#  define LIBFLATARRAY_ELEM_III(ELEMENT, _) ELEMENT LIBFLATARRAY_EMPTY()
#  define LIBFLATARRAY_ELEM_IV(ELEMENT) ELEMENT
#else
#  message( andi2 )
#  define LIBFLATARRAY_ELEM_I(INDEX, LIST) LIBFLATARRAY_ELEM_II(LIBFLATARRAY_ELEM_ ## INDEX LIST)
#  define LIBFLATARRAY_ELEM_II(ELEMENT) LIBFLATARRAY_ELEM_III(ELEMENT)
#  define LIBFLATARRAY_ELEM_III(ELEMENT, _) ELEMENT
#endif

#define LIBFLATARRAY_ELEM_0(ELEMENT) ELEMENT, LIBFLATARRAY_NIL()
#define LIBFLATARRAY_ELEM_1(_)  LIBFLATARRAY_ELEM_0
#define LIBFLATARRAY_ELEM_2(_)  LIBFLATARRAY_ELEM_1
#define LIBFLATARRAY_ELEM_3(_)  LIBFLATARRAY_ELEM_2
#define LIBFLATARRAY_ELEM_4(_)  LIBFLATARRAY_ELEM_3
#define LIBFLATARRAY_ELEM_5(_)  LIBFLATARRAY_ELEM_4
#define LIBFLATARRAY_ELEM_6(_)  LIBFLATARRAY_ELEM_5
#define LIBFLATARRAY_ELEM_7(_)  LIBFLATARRAY_ELEM_6
#define LIBFLATARRAY_ELEM_8(_)  LIBFLATARRAY_ELEM_7
#define LIBFLATARRAY_ELEM_9(_)  LIBFLATARRAY_ELEM_8
#define LIBFLATARRAY_ELEM_10(_) LIBFLATARRAY_ELEM_9
#define LIBFLATARRAY_ELEM_11(_) LIBFLATARRAY_ELEM_10
#define LIBFLATARRAY_ELEM_12(_) LIBFLATARRAY_ELEM_11
#define LIBFLATARRAY_ELEM_13(_) LIBFLATARRAY_ELEM_12
#define LIBFLATARRAY_ELEM_14(_) LIBFLATARRAY_ELEM_13
#define LIBFLATARRAY_ELEM_15(_) LIBFLATARRAY_ELEM_14
#define LIBFLATARRAY_ELEM_16(_) LIBFLATARRAY_ELEM_15
#define LIBFLATARRAY_ELEM_17(_) LIBFLATARRAY_ELEM_16
#define LIBFLATARRAY_ELEM_18(_) LIBFLATARRAY_ELEM_17
#define LIBFLATARRAY_ELEM_19(_) LIBFLATARRAY_ELEM_18
#define LIBFLATARRAY_ELEM_20(_) LIBFLATARRAY_ELEM_19
#define LIBFLATARRAY_ELEM_21(_) LIBFLATARRAY_ELEM_20
#define LIBFLATARRAY_ELEM_22(_) LIBFLATARRAY_ELEM_21
#define LIBFLATARRAY_ELEM_23(_) LIBFLATARRAY_ELEM_22
#define LIBFLATARRAY_ELEM_24(_) LIBFLATARRAY_ELEM_23
#define LIBFLATARRAY_ELEM_25(_) LIBFLATARRAY_ELEM_24
#define LIBFLATARRAY_ELEM_26(_) LIBFLATARRAY_ELEM_25
#define LIBFLATARRAY_ELEM_27(_) LIBFLATARRAY_ELEM_26
#define LIBFLATARRAY_ELEM_28(_) LIBFLATARRAY_ELEM_27
#define LIBFLATARRAY_ELEM_29(_) LIBFLATARRAY_ELEM_28
#define LIBFLATARRAY_ELEM_30(_) LIBFLATARRAY_ELEM_29
#define LIBFLATARRAY_ELEM_31(_) LIBFLATARRAY_ELEM_30
#define LIBFLATARRAY_ELEM_32(_) LIBFLATARRAY_ELEM_31
#define LIBFLATARRAY_ELEM_33(_) LIBFLATARRAY_ELEM_32
#define LIBFLATARRAY_ELEM_34(_) LIBFLATARRAY_ELEM_33
#define LIBFLATARRAY_ELEM_35(_) LIBFLATARRAY_ELEM_34
#define LIBFLATARRAY_ELEM_36(_) LIBFLATARRAY_ELEM_35
#define LIBFLATARRAY_ELEM_37(_) LIBFLATARRAY_ELEM_36
#define LIBFLATARRAY_ELEM_38(_) LIBFLATARRAY_ELEM_37
#define LIBFLATARRAY_ELEM_39(_) LIBFLATARRAY_ELEM_38
#define LIBFLATARRAY_ELEM_40(_) LIBFLATARRAY_ELEM_39
#define LIBFLATARRAY_ELEM_41(_) LIBFLATARRAY_ELEM_40
#define LIBFLATARRAY_ELEM_42(_) LIBFLATARRAY_ELEM_41
#define LIBFLATARRAY_ELEM_43(_) LIBFLATARRAY_ELEM_42
#define LIBFLATARRAY_ELEM_44(_) LIBFLATARRAY_ELEM_43
#define LIBFLATARRAY_ELEM_45(_) LIBFLATARRAY_ELEM_44
#define LIBFLATARRAY_ELEM_46(_) LIBFLATARRAY_ELEM_45
#define LIBFLATARRAY_ELEM_47(_) LIBFLATARRAY_ELEM_46
#define LIBFLATARRAY_ELEM_48(_) LIBFLATARRAY_ELEM_47
#define LIBFLATARRAY_ELEM_49(_) LIBFLATARRAY_ELEM_48
#define LIBFLATARRAY_ELEM_50(_) LIBFLATARRAY_ELEM_49

#define LIBFLATARRAY_SIZE_I(X) LIBFLATARRAY_SIZE_II(X)
#define LIBFLATARRAY_SIZE_II(X) LIBFLATARRAY_DEREF_ ## X
#define LIBFLATARRAY_SIZE_0(_)  LIBFLATARRAY_SIZE_1
#define LIBFLATARRAY_SIZE_1(_)  LIBFLATARRAY_SIZE_2
#define LIBFLATARRAY_SIZE_2(_)  LIBFLATARRAY_SIZE_3
#define LIBFLATARRAY_SIZE_3(_)  LIBFLATARRAY_SIZE_4
#define LIBFLATARRAY_SIZE_4(_)  LIBFLATARRAY_SIZE_5
#define LIBFLATARRAY_SIZE_5(_)  LIBFLATARRAY_SIZE_6
#define LIBFLATARRAY_SIZE_6(_)  LIBFLATARRAY_SIZE_7
#define LIBFLATARRAY_SIZE_7(_)  LIBFLATARRAY_SIZE_8
#define LIBFLATARRAY_SIZE_8(_)  LIBFLATARRAY_SIZE_9
#define LIBFLATARRAY_SIZE_9(_)  LIBFLATARRAY_SIZE_10
#define LIBFLATARRAY_SIZE_10(_) LIBFLATARRAY_SIZE_11
#define LIBFLATARRAY_SIZE_11(_) LIBFLATARRAY_SIZE_12
#define LIBFLATARRAY_SIZE_12(_) LIBFLATARRAY_SIZE_13
#define LIBFLATARRAY_SIZE_13(_) LIBFLATARRAY_SIZE_14
#define LIBFLATARRAY_SIZE_14(_) LIBFLATARRAY_SIZE_15
#define LIBFLATARRAY_SIZE_15(_) LIBFLATARRAY_SIZE_16
#define LIBFLATARRAY_SIZE_16(_) LIBFLATARRAY_SIZE_17
#define LIBFLATARRAY_SIZE_17(_) LIBFLATARRAY_SIZE_18
#define LIBFLATARRAY_SIZE_18(_) LIBFLATARRAY_SIZE_19
#define LIBFLATARRAY_SIZE_19(_) LIBFLATARRAY_SIZE_20
#define LIBFLATARRAY_SIZE_20(_) LIBFLATARRAY_SIZE_21
#define LIBFLATARRAY_SIZE_21(_) LIBFLATARRAY_SIZE_22
#define LIBFLATARRAY_SIZE_22(_) LIBFLATARRAY_SIZE_23
#define LIBFLATARRAY_SIZE_23(_) LIBFLATARRAY_SIZE_24
#define LIBFLATARRAY_SIZE_24(_) LIBFLATARRAY_SIZE_25
#define LIBFLATARRAY_SIZE_25(_) LIBFLATARRAY_SIZE_26
#define LIBFLATARRAY_SIZE_26(_) LIBFLATARRAY_SIZE_27
#define LIBFLATARRAY_SIZE_27(_) LIBFLATARRAY_SIZE_28
#define LIBFLATARRAY_SIZE_28(_) LIBFLATARRAY_SIZE_29
#define LIBFLATARRAY_SIZE_29(_) LIBFLATARRAY_SIZE_30
#define LIBFLATARRAY_SIZE_30(_) LIBFLATARRAY_SIZE_31
#define LIBFLATARRAY_SIZE_31(_) LIBFLATARRAY_SIZE_32
#define LIBFLATARRAY_SIZE_32(_) LIBFLATARRAY_SIZE_33
#define LIBFLATARRAY_SIZE_33(_) LIBFLATARRAY_SIZE_34
#define LIBFLATARRAY_SIZE_34(_) LIBFLATARRAY_SIZE_35
#define LIBFLATARRAY_SIZE_35(_) LIBFLATARRAY_SIZE_36
#define LIBFLATARRAY_SIZE_36(_) LIBFLATARRAY_SIZE_37
#define LIBFLATARRAY_SIZE_37(_) LIBFLATARRAY_SIZE_38
#define LIBFLATARRAY_SIZE_38(_) LIBFLATARRAY_SIZE_39
#define LIBFLATARRAY_SIZE_39(_) LIBFLATARRAY_SIZE_40
#define LIBFLATARRAY_SIZE_40(_) LIBFLATARRAY_SIZE_41
#define LIBFLATARRAY_SIZE_41(_) LIBFLATARRAY_SIZE_42
#define LIBFLATARRAY_SIZE_42(_) LIBFLATARRAY_SIZE_43
#define LIBFLATARRAY_SIZE_43(_) LIBFLATARRAY_SIZE_44
#define LIBFLATARRAY_SIZE_44(_) LIBFLATARRAY_SIZE_45
#define LIBFLATARRAY_SIZE_45(_) LIBFLATARRAY_SIZE_46
#define LIBFLATARRAY_SIZE_46(_) LIBFLATARRAY_SIZE_47
#define LIBFLATARRAY_SIZE_47(_) LIBFLATARRAY_SIZE_48
#define LIBFLATARRAY_SIZE_48(_) LIBFLATARRAY_SIZE_49
#define LIBFLATARRAY_SIZE_49(_) LIBFLATARRAY_SIZE_50
#define LIBFLATARRAY_SIZE_50(_) LIBFLATARRAY_SIZE_51

#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_0 0
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_1 1
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_2 2
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_3 3
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_4 4
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_5 5
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_6 6
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_7 7
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_8 8
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_9 9
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_10 10
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_11 11
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_12 12
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_13 13
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_14 14
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_15 15
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_16 16
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_17 17
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_18 18
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_19 19
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_20 20
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_21 21
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_22 22
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_23 23
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_24 24
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_25 25
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_26 26
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_27 27
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_28 28
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_29 29
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_30 30
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_31 31
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_32 32
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_33 33
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_34 34
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_35 35
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_36 36
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_37 37
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_38 38
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_39 39
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_40 40
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_41 41
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_42 42
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_43 43
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_44 44
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_45 45
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_46 46
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_47 47
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_48 48
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_49 49
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_50 50
#define LIBFLATARRAY_DEREF_LIBFLATARRAY_SIZE_51 51

#define LIBFLATARRAY_FOR_EACH_I(MACRO, DEFAULT_ARG, LIST_SHORT, LIST) LIBFLATARRAY_FOR_EACH_II(MACRO, DEFAULT_ARG, LIBFLATARRAY_SIZE(LIST_SHORT), LIST)
#define LIBFLATARRAY_FOR_EACH_II(MACRO, DEFAULT_ARG, SIZE, LIST) LIBFLATARRAY_FOR_EACH_III(MACRO, DEFAULT_ARG, SIZE, LIST)
#define LIBFLATARRAY_FOR_EACH_III(MACRO, DEFAULT_ARG, SIZE, LIST) LIBFLATARRAY_FOR_EACH_ ## SIZE (MACRO, DEFAULT_ARG, LIST)
#define LIBFLATARRAY_FOR_EACH_EVAL(MACRO, ARG1, ARG2, ARG3) MACRO(ARG1, ARG2, ARG3)

#define LIBFLATARRAY_FOR_EACH_0( MACRO, DEFAULT_ARG, LIST)                                                            LIBFLATARRAY_FOR_EACH_EVAL(MACRO,  0, DEFAULT_ARG, LIBFLATARRAY_ELEM( 0, LIST))
#define LIBFLATARRAY_FOR_EACH_1( MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_0( MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO,  1, DEFAULT_ARG, LIBFLATARRAY_ELEM( 1, LIST))
#define LIBFLATARRAY_FOR_EACH_2( MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_1( MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO,  2, DEFAULT_ARG, LIBFLATARRAY_ELEM( 2, LIST))
#define LIBFLATARRAY_FOR_EACH_3( MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_2( MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO,  3, DEFAULT_ARG, LIBFLATARRAY_ELEM( 3, LIST))
#define LIBFLATARRAY_FOR_EACH_4( MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_3( MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO,  4, DEFAULT_ARG, LIBFLATARRAY_ELEM( 4, LIST))
#define LIBFLATARRAY_FOR_EACH_5( MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_4( MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO,  5, DEFAULT_ARG, LIBFLATARRAY_ELEM( 5, LIST))
#define LIBFLATARRAY_FOR_EACH_6( MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_5( MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO,  6, DEFAULT_ARG, LIBFLATARRAY_ELEM( 6, LIST))
#define LIBFLATARRAY_FOR_EACH_7( MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_6( MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO,  7, DEFAULT_ARG, LIBFLATARRAY_ELEM( 7, LIST))
#define LIBFLATARRAY_FOR_EACH_8( MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_7( MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO,  8, DEFAULT_ARG, LIBFLATARRAY_ELEM( 8, LIST))
#define LIBFLATARRAY_FOR_EACH_9( MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_8( MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO,  9, DEFAULT_ARG, LIBFLATARRAY_ELEM( 9, LIST))
#define LIBFLATARRAY_FOR_EACH_10(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_9( MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 10, DEFAULT_ARG, LIBFLATARRAY_ELEM(10, LIST))
#define LIBFLATARRAY_FOR_EACH_11(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_10(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 11, DEFAULT_ARG, LIBFLATARRAY_ELEM(11, LIST))
#define LIBFLATARRAY_FOR_EACH_12(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_11(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 12, DEFAULT_ARG, LIBFLATARRAY_ELEM(12, LIST))
#define LIBFLATARRAY_FOR_EACH_13(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_12(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 13, DEFAULT_ARG, LIBFLATARRAY_ELEM(13, LIST))
#define LIBFLATARRAY_FOR_EACH_14(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_13(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 14, DEFAULT_ARG, LIBFLATARRAY_ELEM(14, LIST))
#define LIBFLATARRAY_FOR_EACH_15(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_14(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 15, DEFAULT_ARG, LIBFLATARRAY_ELEM(15, LIST))
#define LIBFLATARRAY_FOR_EACH_16(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_15(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 16, DEFAULT_ARG, LIBFLATARRAY_ELEM(16, LIST))
#define LIBFLATARRAY_FOR_EACH_17(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_16(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 17, DEFAULT_ARG, LIBFLATARRAY_ELEM(17, LIST))
#define LIBFLATARRAY_FOR_EACH_18(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_17(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 18, DEFAULT_ARG, LIBFLATARRAY_ELEM(18, LIST))
#define LIBFLATARRAY_FOR_EACH_19(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_18(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 19, DEFAULT_ARG, LIBFLATARRAY_ELEM(19, LIST))
#define LIBFLATARRAY_FOR_EACH_20(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_19(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 20, DEFAULT_ARG, LIBFLATARRAY_ELEM(20, LIST))
#define LIBFLATARRAY_FOR_EACH_21(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_20(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 21, DEFAULT_ARG, LIBFLATARRAY_ELEM(21, LIST))
#define LIBFLATARRAY_FOR_EACH_22(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_21(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 22, DEFAULT_ARG, LIBFLATARRAY_ELEM(22, LIST))
#define LIBFLATARRAY_FOR_EACH_23(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_22(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 23, DEFAULT_ARG, LIBFLATARRAY_ELEM(23, LIST))
#define LIBFLATARRAY_FOR_EACH_24(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_23(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 24, DEFAULT_ARG, LIBFLATARRAY_ELEM(24, LIST))
#define LIBFLATARRAY_FOR_EACH_25(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_24(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 25, DEFAULT_ARG, LIBFLATARRAY_ELEM(25, LIST))
#define LIBFLATARRAY_FOR_EACH_26(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_25(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 26, DEFAULT_ARG, LIBFLATARRAY_ELEM(26, LIST))
#define LIBFLATARRAY_FOR_EACH_27(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_26(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 27, DEFAULT_ARG, LIBFLATARRAY_ELEM(27, LIST))
#define LIBFLATARRAY_FOR_EACH_28(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_27(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 28, DEFAULT_ARG, LIBFLATARRAY_ELEM(28, LIST))
#define LIBFLATARRAY_FOR_EACH_29(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_28(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 29, DEFAULT_ARG, LIBFLATARRAY_ELEM(29, LIST))
#define LIBFLATARRAY_FOR_EACH_30(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_29(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 30, DEFAULT_ARG, LIBFLATARRAY_ELEM(30, LIST))
#define LIBFLATARRAY_FOR_EACH_31(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_30(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 31, DEFAULT_ARG, LIBFLATARRAY_ELEM(31, LIST))
#define LIBFLATARRAY_FOR_EACH_32(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_31(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 32, DEFAULT_ARG, LIBFLATARRAY_ELEM(32, LIST))
#define LIBFLATARRAY_FOR_EACH_33(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_32(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 33, DEFAULT_ARG, LIBFLATARRAY_ELEM(33, LIST))
#define LIBFLATARRAY_FOR_EACH_34(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_33(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 34, DEFAULT_ARG, LIBFLATARRAY_ELEM(34, LIST))
#define LIBFLATARRAY_FOR_EACH_35(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_34(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 35, DEFAULT_ARG, LIBFLATARRAY_ELEM(35, LIST))
#define LIBFLATARRAY_FOR_EACH_36(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_35(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 36, DEFAULT_ARG, LIBFLATARRAY_ELEM(36, LIST))
#define LIBFLATARRAY_FOR_EACH_37(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_36(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 37, DEFAULT_ARG, LIBFLATARRAY_ELEM(37, LIST))
#define LIBFLATARRAY_FOR_EACH_38(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_37(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 38, DEFAULT_ARG, LIBFLATARRAY_ELEM(38, LIST))
#define LIBFLATARRAY_FOR_EACH_39(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_38(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 39, DEFAULT_ARG, LIBFLATARRAY_ELEM(39, LIST))
#define LIBFLATARRAY_FOR_EACH_40(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_39(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 40, DEFAULT_ARG, LIBFLATARRAY_ELEM(40, LIST))
#define LIBFLATARRAY_FOR_EACH_41(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_40(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 41, DEFAULT_ARG, LIBFLATARRAY_ELEM(41, LIST))
#define LIBFLATARRAY_FOR_EACH_42(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_41(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 42, DEFAULT_ARG, LIBFLATARRAY_ELEM(42, LIST))
#define LIBFLATARRAY_FOR_EACH_43(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_42(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 43, DEFAULT_ARG, LIBFLATARRAY_ELEM(43, LIST))
#define LIBFLATARRAY_FOR_EACH_44(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_43(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 44, DEFAULT_ARG, LIBFLATARRAY_ELEM(44, LIST))
#define LIBFLATARRAY_FOR_EACH_45(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_44(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 45, DEFAULT_ARG, LIBFLATARRAY_ELEM(45, LIST))
#define LIBFLATARRAY_FOR_EACH_46(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_45(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 46, DEFAULT_ARG, LIBFLATARRAY_ELEM(46, LIST))
#define LIBFLATARRAY_FOR_EACH_47(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_46(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 47, DEFAULT_ARG, LIBFLATARRAY_ELEM(47, LIST))
#define LIBFLATARRAY_FOR_EACH_48(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_47(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 48, DEFAULT_ARG, LIBFLATARRAY_ELEM(48, LIST))
#define LIBFLATARRAY_FOR_EACH_49(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_48(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 49, DEFAULT_ARG, LIBFLATARRAY_ELEM(49, LIST))
#define LIBFLATARRAY_FOR_EACH_50(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_49(MACRO, DEFAULT_ARG, LIST) LIBFLATARRAY_FOR_EACH_EVAL(MACRO, 50, DEFAULT_ARG, LIBFLATARRAY_ELEM(50, LIST))

#define LIBFLATARRAY_IF_SHORTER_I(MACRO, LIST, A, B) LIBFLATARRAY_IF_SHORTER_II(MACRO LIST, A, B)
#define LIBFLATARRAY_IF_SHORTER_II(POSTFIX, A, B) LIBFLATARRAY_IF_SHORTER_III(POSTFIX, A, B)
#define LIBFLATARRAY_IF_SHORTER_III(POSTFIX, A, B) LIBFLATARRAY_IF_SHORTER_DEREF_ ## POSTFIX (A, B)

#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M50(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M49(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M48(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M47(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M46(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M45(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M44(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M43(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M42(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M41(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M40(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M39(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M38(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M37(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M36(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M35(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M34(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M33(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M32(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M31(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M30(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M29(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M28(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M27(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M26(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M25(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M24(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M23(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M22(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M21(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M20(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M19(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M18(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M17(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M16(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M15(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M14(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M13(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M12(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M11(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M10(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M9(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M8(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M7(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M6(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M5(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M4(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M3(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M2(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_M1(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_0(A, B) B
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_1(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_2(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_3(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_4(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_5(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_6(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_7(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_8(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_9(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_10(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_11(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_12(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_13(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_14(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_15(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_16(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_17(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_18(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_19(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_20(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_21(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_22(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_23(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_24(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_25(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_26(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_27(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_28(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_29(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_30(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_31(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_32(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_33(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_34(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_35(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_36(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_37(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_38(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_39(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_40(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_41(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_42(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_43(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_44(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_45(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_46(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_47(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_48(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_49(A, B) A
#define LIBFLATARRAY_IF_SHORTER_DEREF_LIBFLATARRAY_IF_SHORTER_50(A, B) A

#define LIBFLATARRAY_IF_SHORTER_M50(_) LIBFLATARRAY_IF_SHORTER_M50
#define LIBFLATARRAY_IF_SHORTER_M49(_) LIBFLATARRAY_IF_SHORTER_M50
#define LIBFLATARRAY_IF_SHORTER_M48(_) LIBFLATARRAY_IF_SHORTER_M49
#define LIBFLATARRAY_IF_SHORTER_M47(_) LIBFLATARRAY_IF_SHORTER_M48
#define LIBFLATARRAY_IF_SHORTER_M46(_) LIBFLATARRAY_IF_SHORTER_M47
#define LIBFLATARRAY_IF_SHORTER_M45(_) LIBFLATARRAY_IF_SHORTER_M46
#define LIBFLATARRAY_IF_SHORTER_M44(_) LIBFLATARRAY_IF_SHORTER_M45
#define LIBFLATARRAY_IF_SHORTER_M43(_) LIBFLATARRAY_IF_SHORTER_M44
#define LIBFLATARRAY_IF_SHORTER_M42(_) LIBFLATARRAY_IF_SHORTER_M43
#define LIBFLATARRAY_IF_SHORTER_M41(_) LIBFLATARRAY_IF_SHORTER_M42
#define LIBFLATARRAY_IF_SHORTER_M40(_) LIBFLATARRAY_IF_SHORTER_M41
#define LIBFLATARRAY_IF_SHORTER_M39(_) LIBFLATARRAY_IF_SHORTER_M40
#define LIBFLATARRAY_IF_SHORTER_M38(_) LIBFLATARRAY_IF_SHORTER_M39
#define LIBFLATARRAY_IF_SHORTER_M37(_) LIBFLATARRAY_IF_SHORTER_M38
#define LIBFLATARRAY_IF_SHORTER_M36(_) LIBFLATARRAY_IF_SHORTER_M37
#define LIBFLATARRAY_IF_SHORTER_M35(_) LIBFLATARRAY_IF_SHORTER_M36
#define LIBFLATARRAY_IF_SHORTER_M34(_) LIBFLATARRAY_IF_SHORTER_M35
#define LIBFLATARRAY_IF_SHORTER_M33(_) LIBFLATARRAY_IF_SHORTER_M34
#define LIBFLATARRAY_IF_SHORTER_M32(_) LIBFLATARRAY_IF_SHORTER_M33
#define LIBFLATARRAY_IF_SHORTER_M31(_) LIBFLATARRAY_IF_SHORTER_M32
#define LIBFLATARRAY_IF_SHORTER_M30(_) LIBFLATARRAY_IF_SHORTER_M31
#define LIBFLATARRAY_IF_SHORTER_M29(_) LIBFLATARRAY_IF_SHORTER_M30
#define LIBFLATARRAY_IF_SHORTER_M28(_) LIBFLATARRAY_IF_SHORTER_M29
#define LIBFLATARRAY_IF_SHORTER_M27(_) LIBFLATARRAY_IF_SHORTER_M28
#define LIBFLATARRAY_IF_SHORTER_M26(_) LIBFLATARRAY_IF_SHORTER_M27
#define LIBFLATARRAY_IF_SHORTER_M25(_) LIBFLATARRAY_IF_SHORTER_M26
#define LIBFLATARRAY_IF_SHORTER_M24(_) LIBFLATARRAY_IF_SHORTER_M25
#define LIBFLATARRAY_IF_SHORTER_M23(_) LIBFLATARRAY_IF_SHORTER_M24
#define LIBFLATARRAY_IF_SHORTER_M22(_) LIBFLATARRAY_IF_SHORTER_M23
#define LIBFLATARRAY_IF_SHORTER_M21(_) LIBFLATARRAY_IF_SHORTER_M22
#define LIBFLATARRAY_IF_SHORTER_M20(_) LIBFLATARRAY_IF_SHORTER_M21
#define LIBFLATARRAY_IF_SHORTER_M19(_) LIBFLATARRAY_IF_SHORTER_M20
#define LIBFLATARRAY_IF_SHORTER_M18(_) LIBFLATARRAY_IF_SHORTER_M19
#define LIBFLATARRAY_IF_SHORTER_M17(_) LIBFLATARRAY_IF_SHORTER_M18
#define LIBFLATARRAY_IF_SHORTER_M16(_) LIBFLATARRAY_IF_SHORTER_M17
#define LIBFLATARRAY_IF_SHORTER_M15(_) LIBFLATARRAY_IF_SHORTER_M16
#define LIBFLATARRAY_IF_SHORTER_M14(_) LIBFLATARRAY_IF_SHORTER_M15
#define LIBFLATARRAY_IF_SHORTER_M13(_) LIBFLATARRAY_IF_SHORTER_M14
#define LIBFLATARRAY_IF_SHORTER_M12(_) LIBFLATARRAY_IF_SHORTER_M13
#define LIBFLATARRAY_IF_SHORTER_M11(_) LIBFLATARRAY_IF_SHORTER_M12
#define LIBFLATARRAY_IF_SHORTER_M10(_) LIBFLATARRAY_IF_SHORTER_M11
#define LIBFLATARRAY_IF_SHORTER_M9(_) LIBFLATARRAY_IF_SHORTER_M10
#define LIBFLATARRAY_IF_SHORTER_M8(_) LIBFLATARRAY_IF_SHORTER_M9
#define LIBFLATARRAY_IF_SHORTER_M7(_) LIBFLATARRAY_IF_SHORTER_M8
#define LIBFLATARRAY_IF_SHORTER_M6(_) LIBFLATARRAY_IF_SHORTER_M7
#define LIBFLATARRAY_IF_SHORTER_M5(_) LIBFLATARRAY_IF_SHORTER_M6
#define LIBFLATARRAY_IF_SHORTER_M4(_) LIBFLATARRAY_IF_SHORTER_M5
#define LIBFLATARRAY_IF_SHORTER_M3(_) LIBFLATARRAY_IF_SHORTER_M4
#define LIBFLATARRAY_IF_SHORTER_M2(_) LIBFLATARRAY_IF_SHORTER_M3
#define LIBFLATARRAY_IF_SHORTER_M1(_) LIBFLATARRAY_IF_SHORTER_M2
#define LIBFLATARRAY_IF_SHORTER_0(_) LIBFLATARRAY_IF_SHORTER_M1
#define LIBFLATARRAY_IF_SHORTER_1(_) LIBFLATARRAY_IF_SHORTER_0
#define LIBFLATARRAY_IF_SHORTER_2(_) LIBFLATARRAY_IF_SHORTER_1
#define LIBFLATARRAY_IF_SHORTER_3(_) LIBFLATARRAY_IF_SHORTER_2
#define LIBFLATARRAY_IF_SHORTER_4(_) LIBFLATARRAY_IF_SHORTER_3
#define LIBFLATARRAY_IF_SHORTER_5(_) LIBFLATARRAY_IF_SHORTER_4
#define LIBFLATARRAY_IF_SHORTER_6(_) LIBFLATARRAY_IF_SHORTER_5
#define LIBFLATARRAY_IF_SHORTER_7(_) LIBFLATARRAY_IF_SHORTER_6
#define LIBFLATARRAY_IF_SHORTER_8(_) LIBFLATARRAY_IF_SHORTER_7
#define LIBFLATARRAY_IF_SHORTER_9(_) LIBFLATARRAY_IF_SHORTER_8
#define LIBFLATARRAY_IF_SHORTER_10(_) LIBFLATARRAY_IF_SHORTER_9
#define LIBFLATARRAY_IF_SHORTER_11(_) LIBFLATARRAY_IF_SHORTER_10
#define LIBFLATARRAY_IF_SHORTER_12(_) LIBFLATARRAY_IF_SHORTER_11
#define LIBFLATARRAY_IF_SHORTER_13(_) LIBFLATARRAY_IF_SHORTER_12
#define LIBFLATARRAY_IF_SHORTER_14(_) LIBFLATARRAY_IF_SHORTER_13
#define LIBFLATARRAY_IF_SHORTER_15(_) LIBFLATARRAY_IF_SHORTER_14
#define LIBFLATARRAY_IF_SHORTER_16(_) LIBFLATARRAY_IF_SHORTER_15
#define LIBFLATARRAY_IF_SHORTER_17(_) LIBFLATARRAY_IF_SHORTER_16
#define LIBFLATARRAY_IF_SHORTER_18(_) LIBFLATARRAY_IF_SHORTER_17
#define LIBFLATARRAY_IF_SHORTER_19(_) LIBFLATARRAY_IF_SHORTER_18
#define LIBFLATARRAY_IF_SHORTER_20(_) LIBFLATARRAY_IF_SHORTER_19
#define LIBFLATARRAY_IF_SHORTER_21(_) LIBFLATARRAY_IF_SHORTER_20
#define LIBFLATARRAY_IF_SHORTER_22(_) LIBFLATARRAY_IF_SHORTER_21
#define LIBFLATARRAY_IF_SHORTER_23(_) LIBFLATARRAY_IF_SHORTER_22
#define LIBFLATARRAY_IF_SHORTER_24(_) LIBFLATARRAY_IF_SHORTER_23
#define LIBFLATARRAY_IF_SHORTER_25(_) LIBFLATARRAY_IF_SHORTER_24
#define LIBFLATARRAY_IF_SHORTER_26(_) LIBFLATARRAY_IF_SHORTER_25
#define LIBFLATARRAY_IF_SHORTER_27(_) LIBFLATARRAY_IF_SHORTER_26
#define LIBFLATARRAY_IF_SHORTER_28(_) LIBFLATARRAY_IF_SHORTER_27
#define LIBFLATARRAY_IF_SHORTER_29(_) LIBFLATARRAY_IF_SHORTER_28
#define LIBFLATARRAY_IF_SHORTER_30(_) LIBFLATARRAY_IF_SHORTER_29
#define LIBFLATARRAY_IF_SHORTER_31(_) LIBFLATARRAY_IF_SHORTER_30
#define LIBFLATARRAY_IF_SHORTER_32(_) LIBFLATARRAY_IF_SHORTER_31
#define LIBFLATARRAY_IF_SHORTER_33(_) LIBFLATARRAY_IF_SHORTER_32
#define LIBFLATARRAY_IF_SHORTER_34(_) LIBFLATARRAY_IF_SHORTER_33
#define LIBFLATARRAY_IF_SHORTER_35(_) LIBFLATARRAY_IF_SHORTER_34
#define LIBFLATARRAY_IF_SHORTER_36(_) LIBFLATARRAY_IF_SHORTER_35
#define LIBFLATARRAY_IF_SHORTER_37(_) LIBFLATARRAY_IF_SHORTER_36
#define LIBFLATARRAY_IF_SHORTER_38(_) LIBFLATARRAY_IF_SHORTER_37
#define LIBFLATARRAY_IF_SHORTER_39(_) LIBFLATARRAY_IF_SHORTER_38
#define LIBFLATARRAY_IF_SHORTER_40(_) LIBFLATARRAY_IF_SHORTER_39
#define LIBFLATARRAY_IF_SHORTER_41(_) LIBFLATARRAY_IF_SHORTER_40
#define LIBFLATARRAY_IF_SHORTER_42(_) LIBFLATARRAY_IF_SHORTER_41
#define LIBFLATARRAY_IF_SHORTER_43(_) LIBFLATARRAY_IF_SHORTER_42
#define LIBFLATARRAY_IF_SHORTER_44(_) LIBFLATARRAY_IF_SHORTER_43
#define LIBFLATARRAY_IF_SHORTER_45(_) LIBFLATARRAY_IF_SHORTER_44
#define LIBFLATARRAY_IF_SHORTER_46(_) LIBFLATARRAY_IF_SHORTER_45
#define LIBFLATARRAY_IF_SHORTER_47(_) LIBFLATARRAY_IF_SHORTER_46
#define LIBFLATARRAY_IF_SHORTER_48(_) LIBFLATARRAY_IF_SHORTER_47
#define LIBFLATARRAY_IF_SHORTER_49(_) LIBFLATARRAY_IF_SHORTER_48
#define LIBFLATARRAY_IF_SHORTER_50(_) LIBFLATARRAY_IF_SHORTER_49

#endif
