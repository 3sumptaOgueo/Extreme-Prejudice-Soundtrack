# /* ************************************************************************** 
#  *                                                                          * 
#  *     (C) Copyright Paul Mensonides 2002. 
#  *     Distributed under the Boost Software License, Version 1.0. (See 
#  *     accompanying file LICENSE_1_0.txt or copy at 
#  *     http://www.boost.org/LICENSE_1_0.txt) 
#  *                                                                          * 
#  ************************************************************************** */ 
# 
# /* See http://www.boost.org for most recent version. */ 
# 
# ifndef BOOST_PREPROCESSOR_SEQ_FOLD_RIGHT_HPP 
# define BOOST_PREPROCESSOR_SEQ_FOLD_RIGHT_HPP 
# 
# include <boost/preprocessor/cat.hpp> 
# include <boost/preprocessor/detail/auto_rec.hpp> 
# include <boost/preprocessor/seq/fold_left.hpp> 
# include <boost/preprocessor/seq/reverse.hpp> 
# include <boost/preprocessor/seq/seq.hpp> 
# 
# /* BOOST_PP_SEQ_FOLD_RIGHT */ 
# 
# if 0 
#    define BOOST_PP_SEQ_FOLD_RIGHT(op, state, seq) ... 
# endif 
# 
# define BOOST_PP_SEQ_FOLD_RIGHT BOOST_PP_CAT(BOOST_PP_SEQ_FOLD_RIGHT_, BOOST_PP_AUTO_REC(BOOST_PP_SEQ_FOLD_LEFT_P, 256)) 
# 
# define BOOST_PP_SEQ_FOLD_RIGHT_257(op, st, ss) BOOST_PP_ERROR(0x0005) 
# 
# define BOOST_PP_SEQ_FOLD_RIGHT_1(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_1(op, st, BOOST_PP_SEQ_REVERSE_S(2, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_2(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_2(op, st, BOOST_PP_SEQ_REVERSE_S(3, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_3(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_3(op, st, BOOST_PP_SEQ_REVERSE_S(4, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_4(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_4(op, st, BOOST_PP_SEQ_REVERSE_S(5, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_5(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_5(op, st, BOOST_PP_SEQ_REVERSE_S(6, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_6(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_6(op, st, BOOST_PP_SEQ_REVERSE_S(7, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_7(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_7(op, st, BOOST_PP_SEQ_REVERSE_S(8, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_8(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_8(op, st, BOOST_PP_SEQ_REVERSE_S(9, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_9(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_9(op, st, BOOST_PP_SEQ_REVERSE_S(10, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_10(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_10(op, st, BOOST_PP_SEQ_REVERSE_S(11, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_11(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_11(op, st, BOOST_PP_SEQ_REVERSE_S(12, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_12(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_12(op, st, BOOST_PP_SEQ_REVERSE_S(13, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_13(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_13(op, st, BOOST_PP_SEQ_REVERSE_S(14, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_14(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_14(op, st, BOOST_PP_SEQ_REVERSE_S(15, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_15(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_15(op, st, BOOST_PP_SEQ_REVERSE_S(16, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_16(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_16(op, st, BOOST_PP_SEQ_REVERSE_S(17, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_17(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_17(op, st, BOOST_PP_SEQ_REVERSE_S(18, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_18(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_18(op, st, BOOST_PP_SEQ_REVERSE_S(19, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_19(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_19(op, st, BOOST_PP_SEQ_REVERSE_S(20, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_20(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_20(op, st, BOOST_PP_SEQ_REVERSE_S(21, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_21(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_21(op, st, BOOST_PP_SEQ_REVERSE_S(22, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_22(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_22(op, st, BOOST_PP_SEQ_REVERSE_S(23, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_23(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_23(op, st, BOOST_PP_SEQ_REVERSE_S(24, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_24(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_24(op, st, BOOST_PP_SEQ_REVERSE_S(25, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_25(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_25(op, st, BOOST_PP_SEQ_REVERSE_S(26, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_26(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_26(op, st, BOOST_PP_SEQ_REVERSE_S(27, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_27(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_27(op, st, BOOST_PP_SEQ_REVERSE_S(28, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_28(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_28(op, st, BOOST_PP_SEQ_REVERSE_S(29, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_29(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_29(op, st, BOOST_PP_SEQ_REVERSE_S(30, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_30(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_30(op, st, BOOST_PP_SEQ_REVERSE_S(31, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_31(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_31(op, st, BOOST_PP_SEQ_REVERSE_S(32, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_32(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_32(op, st, BOOST_PP_SEQ_REVERSE_S(33, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_33(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_33(op, st, BOOST_PP_SEQ_REVERSE_S(34, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_34(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_34(op, st, BOOST_PP_SEQ_REVERSE_S(35, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_35(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_35(op, st, BOOST_PP_SEQ_REVERSE_S(36, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_36(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_36(op, st, BOOST_PP_SEQ_REVERSE_S(37, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_37(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_37(op, st, BOOST_PP_SEQ_REVERSE_S(38, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_38(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_38(op, st, BOOST_PP_SEQ_REVERSE_S(39, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_39(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_39(op, st, BOOST_PP_SEQ_REVERSE_S(40, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_40(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_40(op, st, BOOST_PP_SEQ_REVERSE_S(41, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_41(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_41(op, st, BOOST_PP_SEQ_REVERSE_S(42, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_42(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_42(op, st, BOOST_PP_SEQ_REVERSE_S(43, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_43(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_43(op, st, BOOST_PP_SEQ_REVERSE_S(44, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_44(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_44(op, st, BOOST_PP_SEQ_REVERSE_S(45, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_45(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_45(op, st, BOOST_PP_SEQ_REVERSE_S(46, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_46(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_46(op, st, BOOST_PP_SEQ_REVERSE_S(47, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_47(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_47(op, st, BOOST_PP_SEQ_REVERSE_S(48, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_48(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_48(op, st, BOOST_PP_SEQ_REVERSE_S(49, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_49(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_49(op, st, BOOST_PP_SEQ_REVERSE_S(50, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_50(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_50(op, st, BOOST_PP_SEQ_REVERSE_S(51, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_51(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_51(op, st, BOOST_PP_SEQ_REVERSE_S(52, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_52(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_52(op, st, BOOST_PP_SEQ_REVERSE_S(53, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_53(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_53(op, st, BOOST_PP_SEQ_REVERSE_S(54, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_54(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_54(op, st, BOOST_PP_SEQ_REVERSE_S(55, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_55(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_55(op, st, BOOST_PP_SEQ_REVERSE_S(56, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_56(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_56(op, st, BOOST_PP_SEQ_REVERSE_S(57, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_57(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_57(op, st, BOOST_PP_SEQ_REVERSE_S(58, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_58(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_58(op, st, BOOST_PP_SEQ_REVERSE_S(59, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_59(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_59(op, st, BOOST_PP_SEQ_REVERSE_S(60, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_60(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_60(op, st, BOOST_PP_SEQ_REVERSE_S(61, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_61(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_61(op, st, BOOST_PP_SEQ_REVERSE_S(62, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_62(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_62(op, st, BOOST_PP_SEQ_REVERSE_S(63, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_63(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_63(op, st, BOOST_PP_SEQ_REVERSE_S(64, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_64(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_64(op, st, BOOST_PP_SEQ_REVERSE_S(65, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_65(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_65(op, st, BOOST_PP_SEQ_REVERSE_S(66, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_66(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_66(op, st, BOOST_PP_SEQ_REVERSE_S(67, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_67(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_67(op, st, BOOST_PP_SEQ_REVERSE_S(68, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_68(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_68(op, st, BOOST_PP_SEQ_REVERSE_S(69, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_69(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_69(op, st, BOOST_PP_SEQ_REVERSE_S(70, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_70(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_70(op, st, BOOST_PP_SEQ_REVERSE_S(71, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_71(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_71(op, st, BOOST_PP_SEQ_REVERSE_S(72, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_72(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_72(op, st, BOOST_PP_SEQ_REVERSE_S(73, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_73(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_73(op, st, BOOST_PP_SEQ_REVERSE_S(74, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_74(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_74(op, st, BOOST_PP_SEQ_REVERSE_S(75, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_75(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_75(op, st, BOOST_PP_SEQ_REVERSE_S(76, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_76(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_76(op, st, BOOST_PP_SEQ_REVERSE_S(77, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_77(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_77(op, st, BOOST_PP_SEQ_REVERSE_S(78, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_78(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_78(op, st, BOOST_PP_SEQ_REVERSE_S(79, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_79(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_79(op, st, BOOST_PP_SEQ_REVERSE_S(80, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_80(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_80(op, st, BOOST_PP_SEQ_REVERSE_S(81, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_81(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_81(op, st, BOOST_PP_SEQ_REVERSE_S(82, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_82(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_82(op, st, BOOST_PP_SEQ_REVERSE_S(83, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_83(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_83(op, st, BOOST_PP_SEQ_REVERSE_S(84, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_84(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_84(op, st, BOOST_PP_SEQ_REVERSE_S(85, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_85(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_85(op, st, BOOST_PP_SEQ_REVERSE_S(86, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_86(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_86(op, st, BOOST_PP_SEQ_REVERSE_S(87, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_87(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_87(op, st, BOOST_PP_SEQ_REVERSE_S(88, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_88(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_88(op, st, BOOST_PP_SEQ_REVERSE_S(89, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_89(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_89(op, st, BOOST_PP_SEQ_REVERSE_S(90, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_90(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_90(op, st, BOOST_PP_SEQ_REVERSE_S(91, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_91(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_91(op, st, BOOST_PP_SEQ_REVERSE_S(92, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_92(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_92(op, st, BOOST_PP_SEQ_REVERSE_S(93, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_93(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_93(op, st, BOOST_PP_SEQ_REVERSE_S(94, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_94(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_94(op, st, BOOST_PP_SEQ_REVERSE_S(95, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_95(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_95(op, st, BOOST_PP_SEQ_REVERSE_S(96, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_96(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_96(op, st, BOOST_PP_SEQ_REVERSE_S(97, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_97(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_97(op, st, BOOST_PP_SEQ_REVERSE_S(98, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_98(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_98(op, st, BOOST_PP_SEQ_REVERSE_S(99, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_99(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_99(op, st, BOOST_PP_SEQ_REVERSE_S(100, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_100(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_100(op, st, BOOST_PP_SEQ_REVERSE_S(101, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_101(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_101(op, st, BOOST_PP_SEQ_REVERSE_S(102, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_102(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_102(op, st, BOOST_PP_SEQ_REVERSE_S(103, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_103(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_103(op, st, BOOST_PP_SEQ_REVERSE_S(104, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_104(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_104(op, st, BOOST_PP_SEQ_REVERSE_S(105, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_105(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_105(op, st, BOOST_PP_SEQ_REVERSE_S(106, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_106(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_106(op, st, BOOST_PP_SEQ_REVERSE_S(107, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_107(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_107(op, st, BOOST_PP_SEQ_REVERSE_S(108, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_108(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_108(op, st, BOOST_PP_SEQ_REVERSE_S(109, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_109(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_109(op, st, BOOST_PP_SEQ_REVERSE_S(110, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_110(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_110(op, st, BOOST_PP_SEQ_REVERSE_S(111, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_111(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_111(op, st, BOOST_PP_SEQ_REVERSE_S(112, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_112(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_112(op, st, BOOST_PP_SEQ_REVERSE_S(113, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_113(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_113(op, st, BOOST_PP_SEQ_REVERSE_S(114, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_114(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_114(op, st, BOOST_PP_SEQ_REVERSE_S(115, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_115(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_115(op, st, BOOST_PP_SEQ_REVERSE_S(116, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_116(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_116(op, st, BOOST_PP_SEQ_REVERSE_S(117, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_117(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_117(op, st, BOOST_PP_SEQ_REVERSE_S(118, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_118(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_118(op, st, BOOST_PP_SEQ_REVERSE_S(119, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_119(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_119(op, st, BOOST_PP_SEQ_REVERSE_S(120, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_120(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_120(op, st, BOOST_PP_SEQ_REVERSE_S(121, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_121(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_121(op, st, BOOST_PP_SEQ_REVERSE_S(122, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_122(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_122(op, st, BOOST_PP_SEQ_REVERSE_S(123, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_123(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_123(op, st, BOOST_PP_SEQ_REVERSE_S(124, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_124(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_124(op, st, BOOST_PP_SEQ_REVERSE_S(125, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_125(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_125(op, st, BOOST_PP_SEQ_REVERSE_S(126, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_126(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_126(op, st, BOOST_PP_SEQ_REVERSE_S(127, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_127(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_127(op, st, BOOST_PP_SEQ_REVERSE_S(128, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_128(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_128(op, st, BOOST_PP_SEQ_REVERSE_S(129, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_129(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_129(op, st, BOOST_PP_SEQ_REVERSE_S(130, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_130(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_130(op, st, BOOST_PP_SEQ_REVERSE_S(131, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_131(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_131(op, st, BOOST_PP_SEQ_REVERSE_S(132, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_132(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_132(op, st, BOOST_PP_SEQ_REVERSE_S(133, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_133(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_133(op, st, BOOST_PP_SEQ_REVERSE_S(134, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_134(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_134(op, st, BOOST_PP_SEQ_REVERSE_S(135, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_135(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_135(op, st, BOOST_PP_SEQ_REVERSE_S(136, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_136(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_136(op, st, BOOST_PP_SEQ_REVERSE_S(137, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_137(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_137(op, st, BOOST_PP_SEQ_REVERSE_S(138, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_138(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_138(op, st, BOOST_PP_SEQ_REVERSE_S(139, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_139(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_139(op, st, BOOST_PP_SEQ_REVERSE_S(140, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_140(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_140(op, st, BOOST_PP_SEQ_REVERSE_S(141, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_141(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_141(op, st, BOOST_PP_SEQ_REVERSE_S(142, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_142(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_142(op, st, BOOST_PP_SEQ_REVERSE_S(143, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_143(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_143(op, st, BOOST_PP_SEQ_REVERSE_S(144, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_144(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_144(op, st, BOOST_PP_SEQ_REVERSE_S(145, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_145(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_145(op, st, BOOST_PP_SEQ_REVERSE_S(146, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_146(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_146(op, st, BOOST_PP_SEQ_REVERSE_S(147, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_147(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_147(op, st, BOOST_PP_SEQ_REVERSE_S(148, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_148(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_148(op, st, BOOST_PP_SEQ_REVERSE_S(149, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_149(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_149(op, st, BOOST_PP_SEQ_REVERSE_S(150, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_150(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_150(op, st, BOOST_PP_SEQ_REVERSE_S(151, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_151(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_151(op, st, BOOST_PP_SEQ_REVERSE_S(152, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_152(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_152(op, st, BOOST_PP_SEQ_REVERSE_S(153, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_153(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_153(op, st, BOOST_PP_SEQ_REVERSE_S(154, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_154(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_154(op, st, BOOST_PP_SEQ_REVERSE_S(155, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_155(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_155(op, st, BOOST_PP_SEQ_REVERSE_S(156, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_156(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_156(op, st, BOOST_PP_SEQ_REVERSE_S(157, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_157(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_157(op, st, BOOST_PP_SEQ_REVERSE_S(158, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_158(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_158(op, st, BOOST_PP_SEQ_REVERSE_S(159, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_159(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_159(op, st, BOOST_PP_SEQ_REVERSE_S(160, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_160(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_160(op, st, BOOST_PP_SEQ_REVERSE_S(161, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_161(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_161(op, st, BOOST_PP_SEQ_REVERSE_S(162, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_162(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_162(op, st, BOOST_PP_SEQ_REVERSE_S(163, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_163(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_163(op, st, BOOST_PP_SEQ_REVERSE_S(164, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_164(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_164(op, st, BOOST_PP_SEQ_REVERSE_S(165, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_165(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_165(op, st, BOOST_PP_SEQ_REVERSE_S(166, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_166(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_166(op, st, BOOST_PP_SEQ_REVERSE_S(167, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_167(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_167(op, st, BOOST_PP_SEQ_REVERSE_S(168, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_168(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_168(op, st, BOOST_PP_SEQ_REVERSE_S(169, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_169(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_169(op, st, BOOST_PP_SEQ_REVERSE_S(170, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_170(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_170(op, st, BOOST_PP_SEQ_REVERSE_S(171, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_171(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_171(op, st, BOOST_PP_SEQ_REVERSE_S(172, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_172(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_172(op, st, BOOST_PP_SEQ_REVERSE_S(173, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_173(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_173(op, st, BOOST_PP_SEQ_REVERSE_S(174, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_174(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_174(op, st, BOOST_PP_SEQ_REVERSE_S(175, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_175(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_175(op, st, BOOST_PP_SEQ_REVERSE_S(176, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_176(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_176(op, st, BOOST_PP_SEQ_REVERSE_S(177, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_177(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_177(op, st, BOOST_PP_SEQ_REVERSE_S(178, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_178(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_178(op, st, BOOST_PP_SEQ_REVERSE_S(179, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_179(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_179(op, st, BOOST_PP_SEQ_REVERSE_S(180, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_180(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_180(op, st, BOOST_PP_SEQ_REVERSE_S(181, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_181(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_181(op, st, BOOST_PP_SEQ_REVERSE_S(182, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_182(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_182(op, st, BOOST_PP_SEQ_REVERSE_S(183, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_183(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_183(op, st, BOOST_PP_SEQ_REVERSE_S(184, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_184(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_184(op, st, BOOST_PP_SEQ_REVERSE_S(185, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_185(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_185(op, st, BOOST_PP_SEQ_REVERSE_S(186, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_186(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_186(op, st, BOOST_PP_SEQ_REVERSE_S(187, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_187(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_187(op, st, BOOST_PP_SEQ_REVERSE_S(188, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_188(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_188(op, st, BOOST_PP_SEQ_REVERSE_S(189, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_189(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_189(op, st, BOOST_PP_SEQ_REVERSE_S(190, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_190(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_190(op, st, BOOST_PP_SEQ_REVERSE_S(191, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_191(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_191(op, st, BOOST_PP_SEQ_REVERSE_S(192, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_192(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_192(op, st, BOOST_PP_SEQ_REVERSE_S(193, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_193(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_193(op, st, BOOST_PP_SEQ_REVERSE_S(194, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_194(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_194(op, st, BOOST_PP_SEQ_REVERSE_S(195, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_195(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_195(op, st, BOOST_PP_SEQ_REVERSE_S(196, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_196(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_196(op, st, BOOST_PP_SEQ_REVERSE_S(197, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_197(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_197(op, st, BOOST_PP_SEQ_REVERSE_S(198, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_198(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_198(op, st, BOOST_PP_SEQ_REVERSE_S(199, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_199(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_199(op, st, BOOST_PP_SEQ_REVERSE_S(200, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_200(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_200(op, st, BOOST_PP_SEQ_REVERSE_S(201, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_201(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_201(op, st, BOOST_PP_SEQ_REVERSE_S(202, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_202(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_202(op, st, BOOST_PP_SEQ_REVERSE_S(203, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_203(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_203(op, st, BOOST_PP_SEQ_REVERSE_S(204, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_204(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_204(op, st, BOOST_PP_SEQ_REVERSE_S(205, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_205(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_205(op, st, BOOST_PP_SEQ_REVERSE_S(206, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_206(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_206(op, st, BOOST_PP_SEQ_REVERSE_S(207, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_207(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_207(op, st, BOOST_PP_SEQ_REVERSE_S(208, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_208(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_208(op, st, BOOST_PP_SEQ_REVERSE_S(209, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_209(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_209(op, st, BOOST_PP_SEQ_REVERSE_S(210, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_210(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_210(op, st, BOOST_PP_SEQ_REVERSE_S(211, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_211(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_211(op, st, BOOST_PP_SEQ_REVERSE_S(212, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_212(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_212(op, st, BOOST_PP_SEQ_REVERSE_S(213, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_213(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_213(op, st, BOOST_PP_SEQ_REVERSE_S(214, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_214(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_214(op, st, BOOST_PP_SEQ_REVERSE_S(215, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_215(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_215(op, st, BOOST_PP_SEQ_REVERSE_S(216, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_216(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_216(op, st, BOOST_PP_SEQ_REVERSE_S(217, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_217(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_217(op, st, BOOST_PP_SEQ_REVERSE_S(218, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_218(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_218(op, st, BOOST_PP_SEQ_REVERSE_S(219, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_219(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_219(op, st, BOOST_PP_SEQ_REVERSE_S(220, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_220(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_220(op, st, BOOST_PP_SEQ_REVERSE_S(221, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_221(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_221(op, st, BOOST_PP_SEQ_REVERSE_S(222, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_222(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_222(op, st, BOOST_PP_SEQ_REVERSE_S(223, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_223(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_223(op, st, BOOST_PP_SEQ_REVERSE_S(224, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_224(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_224(op, st, BOOST_PP_SEQ_REVERSE_S(225, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_225(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_225(op, st, BOOST_PP_SEQ_REVERSE_S(226, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_226(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_226(op, st, BOOST_PP_SEQ_REVERSE_S(227, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_227(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_227(op, st, BOOST_PP_SEQ_REVERSE_S(228, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_228(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_228(op, st, BOOST_PP_SEQ_REVERSE_S(229, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_229(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_229(op, st, BOOST_PP_SEQ_REVERSE_S(230, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_230(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_230(op, st, BOOST_PP_SEQ_REVERSE_S(231, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_231(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_231(op, st, BOOST_PP_SEQ_REVERSE_S(232, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_232(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_232(op, st, BOOST_PP_SEQ_REVERSE_S(233, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_233(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_233(op, st, BOOST_PP_SEQ_REVERSE_S(234, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_234(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_234(op, st, BOOST_PP_SEQ_REVERSE_S(235, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_235(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_235(op, st, BOOST_PP_SEQ_REVERSE_S(236, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_236(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_236(op, st, BOOST_PP_SEQ_REVERSE_S(237, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_237(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_237(op, st, BOOST_PP_SEQ_REVERSE_S(238, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_238(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_238(op, st, BOOST_PP_SEQ_REVERSE_S(239, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_239(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_239(op, st, BOOST_PP_SEQ_REVERSE_S(240, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_240(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_240(op, st, BOOST_PP_SEQ_REVERSE_S(241, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_241(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_241(op, st, BOOST_PP_SEQ_REVERSE_S(242, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_242(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_242(op, st, BOOST_PP_SEQ_REVERSE_S(243, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_243(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_243(op, st, BOOST_PP_SEQ_REVERSE_S(244, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_244(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_244(op, st, BOOST_PP_SEQ_REVERSE_S(245, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_245(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_245(op, st, BOOST_PP_SEQ_REVERSE_S(246, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_246(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_246(op, st, BOOST_PP_SEQ_REVERSE_S(247, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_247(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_247(op, st, BOOST_PP_SEQ_REVERSE_S(248, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_248(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_248(op, st, BOOST_PP_SEQ_REVERSE_S(249, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_249(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_249(op, st, BOOST_PP_SEQ_REVERSE_S(250, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_250(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_250(op, st, BOOST_PP_SEQ_REVERSE_S(251, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_251(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_251(op, st, BOOST_PP_SEQ_REVERSE_S(252, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_252(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_252(op, st, BOOST_PP_SEQ_REVERSE_S(253, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_253(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_253(op, st, BOOST_PP_SEQ_REVERSE_S(254, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_254(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_254(op, st, BOOST_PP_SEQ_REVERSE_S(255, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_255(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_255(op, st, BOOST_PP_SEQ_REVERSE_S(256, ss), BOOST_PP_SEQ_SIZE(ss)) 
# define BOOST_PP_SEQ_FOLD_RIGHT_256(op, st, ss) BOOST_PP_SEQ_FOLD_LEFT_I_256(op, st, BOOST_PP_SEQ_REVERSE_S(257, ss), BOOST_PP_SEQ_SIZE(ss)) 
# 
# endif 
