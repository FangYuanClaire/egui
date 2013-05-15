/**
 * @file
 *
 * @author Dalian University of Technology
 *
 * @section LICENSE
 *
 * Copyright (C) 2010 Dalian University of Technology
 *
 * This file is part of EDUGUI.
 *
 * EDUGUI is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * EDUGUI is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with EDUGUI; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 * All rights reserved.
**/

# ifndef _BASE_TYPE_H_
# define _BASE_TYPE_H_ 1

/**
 * 字节
**/
typedef unsigned char byte_t;

/**
 * 无符号整数，08位
**/
typedef unsigned char ui08_t;

/**
 * 有符号整数，08位
**/
typedef signed char si08_t;

/**
 * 无符号整数，16位
**/
typedef unsigned short int ui16_t;

/**
 * 有符号整数，16位
**/
typedef signed short int si16_t;

/**
 * 无符号整数，32位
**/
typedef unsigned int ui32_t;

/**
 * 有符号整数，32位
**/
typedef signed int si32_t;

/**
 * 系统中位数最多的无符号整数
 *
 * sizeof(ui_t) = sizeof(size_t)
**/
typedef unsigned long int ui_t;

/**
 * 系统中位数最多的有符号整数
 *
 * sizeof(si_t) = sizeof(size_t)
**/
typedef signed long int si_t;

/**
 * 浮点数，32位
**/
typedef float f32_t;

/**
 * 浮点数，64位
**/
typedef double f64_t;

/**
 * 系统中位数最多的浮点数
**/
typedef double f_t;

/**
 * 地址类型
**/
typedef void* addr_t;

/**
 *bool类型 
 **/
typedef char  bool_t;

# endif
