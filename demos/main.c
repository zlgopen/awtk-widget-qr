/**
 * File:   main.c
 * Author: AWTK Develop Team
 * Brief:  main window sources
 *
 * Copyright (c) 2020 - 2020  Guangzhou ZHIYUAN Electronics Co.,Ltd.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * License file for more details.
 *
 */

/**
 * History:
 * ================================================================
 * 2020-05-29 Li XianJing <xianjimli@hotmail.com> created
 *
 */

#include "awtk.h"
#include "qr/qr.h"

static ret_t on_scanned(const timer_info_t* info) {
  widget_t* win = WIDGET(info->ctx);
  widget_t* qr = widget_lookup_by_type(win, WIDGET_TYPE_QR, TRUE);

/*
 * 自定义状态对designer不太友好，所以用disable状态模拟scanned状态。
 */
  widget_set_enable(qr, FALSE);

  return RET_REMOVE;
}

static ret_t on_close(void* ctx, event_t* e) {
  tk_quit();

  return RET_OK;
}

ret_t application_init() {
  qr_register();

  widget_t* win = window_open("main");

  widget_child_on(win, "close", EVT_CLICK, on_close, win);
  widget_add_timer(win, on_scanned, 3000);

  return RET_OK;
}

ret_t application_exit() {
  return RET_OK;
}

#include "awtk_main.inc"
