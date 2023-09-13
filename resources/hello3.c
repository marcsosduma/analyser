/* Generated by           cobc 3.1.1.0 */
/* Generated from         /home/developer/projects/gnucobol-debug/test/resources/hello3.cbl */
/* Generated at           Dec 16 2020 11:04:17 */
/* GnuCOBOL build date    Dec 12 2020 10:39:10 */
/* GnuCOBOL package date  Dec 08 2020 22:56:13 UTC */
/* Compile command        cobc -free -x -g -fsource-location -ftraceall -Q --coverage -A --coverage -v /home/developer/projects/gnucobol-debug/test/resources/hello3.cbl */

#include <stdio.h>
#include <string.h>
#define  COB_KEYWORD_INLINE inline
#include <libcob.h>

#define  COB_SOURCE_FILE		"/home/developer/projects/gnucobol-debug/test/resources/hello3.cbl"
#define  COB_PACKAGE_VERSION		"3.1.1"
#define  COB_PATCH_LEVEL		0
#define  COB_MODULE_FORMATTED_DATE	"Dec 16 2020 11:04:17"
#define  COB_MODULE_DATE		20201216
#define  COB_MODULE_TIME		110417

/* Global variables */
#include "hello3.c.h"

/* Function prototypes */

static int		hello3 ();
static int		hello3_ (const int);
static void		hello3_module_init (cob_module *module);

/* Main function */
int
main (int argc, char **argv)
{
  cob_init (argc, argv);
  cob_stop_run (hello3 ());
}

/* Functions */

/* PROGRAM-ID 'hello3' */

/* ENTRY 'hello3' */

static int
hello3 ()
{
  return hello3_ (0);
}

static int
hello3_ (const int entry)
{
  /* Program local variables */
  #include "hello3.c.l.h"

  /* Start of function code */

  /* CANCEL callback */
  if (unlikely(entry < 0)) {
  	if (entry == -10)
  		goto P_dump;
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
  frame_ptr->return_address_ptr = &&P_cgerror;
  frame_overflow = frame_ptr + 255 - 1;

  /* Initialize rest of program */
  if (unlikely(initialized == 0)) {
  	goto P_initialize;
  }
  P_ret_initialize:

  /* Increment module active */
  module->module_active++;

  /* Entry dispatch */
  goto l_2;

  /* PROCEDURE DIVISION */

  /* Line: 6         : Entry     hello3                  : /home/developer/projects/gnucobol-debug/test/resources/hello3.cbl */
  l_2:;
#line 6 "/home/developer/projects/gnucobol-debug/test/resources/hello3.cbl"
  ENTRY_HELLO3:;
#line 100 "hello3.c"
  module->module_stmt = 0x00100006;
  cob_trace_entry (st_1);
#line 7 "/home/developer/projects/gnucobol-debug/test/resources/hello3.cbl"
  SECTION_MAIN_20SECTION:;
#line 105 "hello3.c"
  module->module_stmt = 0x00100007;
  cob_trace_sect (NULL);
#line 7 "/home/developer/projects/gnucobol-debug/test/resources/hello3.cbl"
  cob_nop ();
#line 110 "hello3.c"
  cob_trace_para (NULL);

  /* Line: 7         : MOVE               : /home/developer/projects/gnucobol-debug/test/resources/hello3.cbl */
#line 7 "/home/developer/projects/gnucobol-debug/test/resources/hello3.cbl"
  cob_trace_stmt (st_2);
#line 116 "hello3.c"
  memcpy (b_8, "World", 5);

  /* Line: 8         : DISPLAY            : /home/developer/projects/gnucobol-debug/test/resources/hello3.cbl */
  module->module_stmt = 0x00100008;
#line 8 "/home/developer/projects/gnucobol-debug/test/resources/hello3.cbl"
  cob_trace_stmt (st_3);
#line 123 "hello3.c"
  cob_display (0, 1, 2, &c_1, &f_8);

  /* Line: 9         : STOP RUN           : /home/developer/projects/gnucobol-debug/test/resources/hello3.cbl */
  module->module_stmt = 0x00100009;
#line 9 "/home/developer/projects/gnucobol-debug/test/resources/hello3.cbl"
  cob_trace_stmt (st_4);
#line 130 "hello3.c"
  cob_stop_run (b_2);

  module->module_stmt = 0x0010000A;

  /* Program exit */

  /* Decrement module active count */
  if (module->module_active) {
  	module->module_active--;
  }

  /* Trace program exit */
  cob_trace_exit (st_1);

  /* Pop module stack */
  cob_module_leave (module);

  /* Program return */
  return b_2;
  P_cgerror:
  	cob_fatal_error (COB_FERROR_CODEGEN);


  /* Program initialization */
  P_initialize:

  cob_check_version (COB_SOURCE_FILE, COB_PACKAGE_VERSION, COB_PATCH_LEVEL);

  cob_module_path = cob_glob_ptr->cob_main_argv0;

  hello3_module_init (module);

  module->crt_status = NULL;

  /* Initialize cancel callback */
  cob_set_cancel (module);

  /* Initialize WORKING-STORAGE */
  b_2 = 0;
  memset (b_8, 32, 5);

  if (0 == 1) goto P_cgerror;
  initialized = 1;
  goto P_ret_initialize;

  P_dump:
    return 0;


  /* CANCEL callback handling */
  P_cancel:

  if (!initialized)
  	return 0;
  if (module && module->module_active)
  	cob_fatal_error (COB_FERROR_CANCEL);

  initialized = 0;

  P_clear_decimal:
  return 0;

}

/* End PROGRAM-ID 'hello3' */

/* Initialize module structure for hello3 */
static void hello3_module_init (cob_module *module)
{
  module->module_name = "hello3";
  module->module_formatted_date = COB_MODULE_FORMATTED_DATE;
  module->module_source = COB_SOURCE_FILE;
  module->module_entry.funcptr = (void *(*)())hello3;
  module->module_cancel.funcptr = (void *(*)())hello3_;
  module->module_ref_count = NULL;
  module->module_path = &cob_module_path;
  module->module_active = 0;
  module->module_date = COB_MODULE_DATE;
  module->module_time = COB_MODULE_TIME;
  module->module_type = 0;
  module->module_param_cnt = 0;
  module->ebcdic_sign = 0;
  module->decimal_point = '.';
  module->currency_symbol = '$';
  module->numeric_separator = ',';
  module->flag_filename_mapping = 1;
  module->flag_binary_truncate = 1;
  module->flag_pretty_display = 1;
  module->flag_host_sign = 0;
  module->flag_no_phys_canc = 1;
  module->flag_main = 1;
  module->flag_fold_call = 0;
  module->flag_exit_program = 0;
  module->flag_debug_trace = 6;
  module->flag_dump_ready = 0;
  module->module_stmt = 0;
  module->module_sources = st_source_files;
}

/* End functions */

