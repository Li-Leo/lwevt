/**
 * \file            lwevt_opt.h
 * \brief           LwEVT options
 */

/*
 * Copyright (c) 2022 Tilen MAJERLE
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE
 * AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * This file is part of LwEVT - Lightweight event system library.
 *
 * Author:          Tilen MAJERLE <tilen@majerle.eu>
 * Version:         $_version_$
 */
#ifndef LWEVT_HDR_OPT_H
#define LWEVT_HDR_OPT_H

/* Uncomment to ignore user options (or set macro in compiler flags) */
/* #define LWEVT_IGNORE_USER_OPTS */

/* Include application options */
#ifndef LWEVT_IGNORE_USER_OPTS
#include "lwevt_opts.h"
#endif /* LWEVT_IGNORE_USER_OPTS */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/**
 * \defgroup        LWEVT_OPT Configuration
 * \brief           Default configuration setup
 * \{
 */

/**
 * \brief           Maximum number of event listeners that can receive info on event dispatch
 * 
 * It defines size of array for function pointers
 */
#ifndef LWEVT_CFG_MAX_EVT_LISTENERS
#define LWEVT_CFG_MAX_EVT_LISTENERS             8
#endif

/**
 * \}
 */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* LWEVT_HDR_OPT_H */
