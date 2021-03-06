/*
 * Copyright 2007 Xu, Chuan <xuchuan@gmail.com>
 *
 * This file is part of ZOJ.
 *
 * ZOJ is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * ZOJ is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with ZOJ. if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __PROTOCOL_H__
#define __PROTOCOL_H__

#define CMD_PING 100
#define CMD_JUDGE 1
#define CMD_DATA 2
#define CMD_COMPILE 3
#define CMD_TESTCASE 4
#define CMD_REMOVE_PROBLEM 5
#define CMD_INFO 6

#define COMPILING 1
#define RUNNING 2
#define RUNTIME_ERROR 3
#define WRONG_ANSWER 4
#define ACCEPTED 5
#define TIME_LIMIT_EXCEEDED 6
#define MEMORY_LIMIT_EXCEEDED 7
#define OUTPUT_LIMIT_EXCEEDED 10
#define COMPILATION_ERROR 12
#define PRESENTATION_ERROR 13
#define INTERNAL_ERROR 14
#define FLOATING_POINT_ERROR 15
#define SEGMENTATION_FAULT 16
#define JUDGING 19
#define NON_ZERO_EXIT_CODE 21
#define READY 100
#define NO_SUCH_PROBLEM 101
#define INVALID_INPUT 102

#endif // __PROTOCL_H__
