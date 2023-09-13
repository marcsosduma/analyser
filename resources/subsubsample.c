/* Generated by           cobc 2.2.0 */
/* Generated from         subsubsample.cbl */
/* Generated at           Apr 23 2020 17:56:17 */
/* GnuCOBOL build date    Jul 17 2018 20:29:40 */
/* GnuCOBOL package date  Sep 06 2017 18:48:43 UTC */
/* Compile command        cobc -free -x -g -d -fdebugging-line -fsource-location -ftraceall /home/developer/projects/gnucobol-debug/test/resources/sample.cbl subsample.cbl subsubsample.cbl */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <math.h>
#define  COB_KEYWORD_INLINE __inline
#include <libcob.h>

#define  COB_SOURCE_FILE		"subsubsample.cbl"
#define  COB_PACKAGE_VERSION		"2.2"
#define  COB_PATCH_LEVEL		0
#define  COB_MODULE_FORMATTED_DATE	"Apr 23 2020 17:56:17"
#define  COB_MODULE_DATE		20200423
#define  COB_MODULE_TIME		175617

/* Global variables */
#include "subsubsample.c.h"

/* Function prototypes */

int		subsubsample (cob_u8_t *);
static int		subsubsample_ (const int, cob_u8_t *);

/* Functions */

/* PROGRAM-ID 'subsubsample' */

/* ENTRY 'subsubsample' */

int
subsubsample (cob_u8_t *b_6)
{
  /* Get current number of call parameters,
     if the parameter count is unknown, set it to all */
  if (cob_get_global_ptr ()->cob_current_module) {
  	cob_call_params = cob_get_global_ptr ()->cob_call_params;
  } else {
  	cob_call_params = 1;
  };

  return subsubsample_ (0, b_6);
}

static int
subsubsample_ (const int entry, cob_u8_t *b_6)
{
  /* Program local variables */
  #include "subsubsample.c.l.h"

  /* Start of function code */

  /* CANCEL callback */
  if (unlikely(entry < 0)) {
  	if (entry == -20)
  		goto P_clear_decimal;
  	goto P_cancel;
  }

  /* Check initialized, check module allocated, */
  /* set global pointer, */
  /* push module stack, save call parameter count */
  if (cob_module_global_enter (&module, &cob_glob_ptr, 0, entry, 0))
  	return -1;

  /* Set address of module parameter list */
  module->cob_procedure_params = cob_procedure_params;

  /* Set frame stack pointer */
  frame_ptr = frame_stack;
  frame_ptr->perform_through = 0;
  frame_overflow = frame_ptr + 255 - 1;

  /* Initialize rest of program */
  if (unlikely(initialized == 0)) {
  	goto P_initialize;
  }
  P_ret_initialize:

  /* Increment module active */
  module->module_active++;

  /* Set not passed parameter pointers to NULL */
  switch (cob_call_params) {
  case 0:
  	b_6 = NULL;
  default:
	break;
  }

  /* Entry dispatch */
  goto l_2;

  /* PROCEDURE DIVISION */

  /* Line: 14        : Entry     subsubsample            : subsubsample.cbl */
  l_2:;
  cob_trace_section (st_2, st_1, 14);
  cob_trace_section (st_3, st_1, 14);
  cob_trace_section (st_4, st_1, 14);

  /* Line: 14        : DISPLAY            : subsubsample.cbl */
  cob_set_location (st_1, 14, NULL, NULL, st_5);
  cob_display (0, 1, 1, COB_SET_DATA (f_11, b_6 + 18));

  /* Program exit */

  /* Decrement module active count */
  if (module->module_active) {
  	module->module_active--;
  }

  /* Trace program exit */
  cob_trace_section (st_6, NULL, 0);

  /* Pop module stack */
  cob_module_leave (module);

  /* Program return */
  return b_2;

  /* Program initialization */
  P_initialize:

  cob_check_version (COB_SOURCE_FILE, COB_PACKAGE_VERSION, COB_PATCH_LEVEL);

  /* Initialize module structure */
  module->module_name = "subsubsample";
  module->module_formatted_date = COB_MODULE_FORMATTED_DATE;
  module->module_source = COB_SOURCE_FILE;
  module->module_entry.funcptr = (void *(*)())subsubsample;
  module->module_cancel.funcptr = (void *(*)())subsubsample_;
  module->collating_sequence = NULL;
  module->crt_status = NULL;
  module->cursor_pos = NULL;
  module->module_ref_count = NULL;
  module->module_path = &cob_module_path;
  module->module_active = 0;
  module->module_date = COB_MODULE_DATE;
  module->module_time = COB_MODULE_TIME;
  module->module_type = 0;
  module->module_param_cnt = 1;
  module->module_returning = 0;
  module->ebcdic_sign = 0;
  module->decimal_point = '.';
  module->currency_symbol = '$';
  module->numeric_separator = ',';
  module->flag_filename_mapping = 1;
  module->flag_binary_truncate = 1;
  module->flag_pretty_display = 1;
  module->flag_host_sign = 0;
  module->flag_no_phys_canc = 1;
  module->flag_main = 0;
  module->flag_fold_call = 0;
  module->flag_exit_program = 0;

  /* Initialize cancel callback */
  cob_set_cancel (module);

  /* Initialize WORKING-STORAGE */
  b_2 = 0;

  initialized = 1;
  goto P_ret_initialize;

  /* CANCEL callback handling */
  P_cancel:

  if (!initialized) {
  	return 0;
  }
  if (module->module_active) {
  	cob_fatal_error (COB_FERROR_CANCEL);
  }

  b_2 = 0;
  cob_module_free (&module);

  initialized = 0;

  P_clear_decimal:

  return 0;

}

/* End PROGRAM-ID 'subsubsample' */

/* End functions */

