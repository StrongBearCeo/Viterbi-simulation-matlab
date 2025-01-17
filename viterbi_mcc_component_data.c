/*
 * MATLAB Compiler: 4.8 (R2008a)
 * Date: Mon Feb 16 16:55:37 2009
 * Arguments: "-B" "macro_default" "-m" "-W" "main" "-T" "link:exe" "viterbi.m" 
 */

#include "mclmcrrt.h"

#ifdef __cplusplus
extern "C" {
#endif
const unsigned char __MCC_viterbi_session_key[] = {
    '3', 'C', 'B', 'B', '8', '5', '4', '9', '2', '1', '6', 'E', 'E', '5', 'E',
    '0', '7', 'B', '5', 'A', 'D', '4', 'F', 'C', '6', 'A', '0', '9', 'B', 'E',
    'B', '9', '6', '2', '4', 'F', '5', 'D', 'B', '4', 'D', 'F', '4', 'A', 'A',
    'F', 'C', '1', '8', '3', '1', 'F', 'B', '7', '5', '7', '0', 'B', '8', 'F',
    '9', 'A', 'E', 'D', 'B', '7', 'E', 'C', '3', '0', '9', '3', 'F', '3', 'F',
    'F', 'C', 'C', '6', 'A', '1', 'D', 'C', '5', 'C', 'C', '9', 'B', '7', '0',
    'C', '1', '3', '8', '8', 'B', 'F', '9', '3', 'F', '5', 'F', '0', '3', '4',
    '3', '0', 'F', '5', '9', '9', '2', '2', '9', 'D', '7', 'D', '6', 'D', '3',
    '7', '0', 'E', '1', '9', 'E', 'A', '6', '8', '9', 'C', '2', '1', 'B', 'E',
    '4', 'D', '1', 'A', '3', 'A', '8', 'B', 'D', '3', 'C', 'C', '4', '1', '9',
    'F', '3', '8', 'D', 'E', '8', 'E', '1', '3', '2', '3', 'E', 'E', 'F', '5',
    '6', 'F', '6', '9', 'A', '1', '9', '9', '9', 'A', 'D', '8', '4', '4', 'F',
    'F', 'A', '5', '4', '2', '0', 'C', 'A', 'C', '8', '4', '8', 'C', '1', 'A',
    '3', 'C', '3', '7', 'B', '0', 'D', '1', 'E', 'E', 'D', '4', 'A', '0', '0',
    '7', '3', '2', '1', 'B', '2', 'D', '8', 'C', 'A', '0', '6', '4', 'C', '7',
    'E', '1', '8', 'F', '7', '8', 'F', '4', '4', 'C', 'C', '5', 'B', 'A', 'B',
    'E', '4', '5', 'F', '9', '0', '3', 'D', '8', '3', 'F', 'A', '5', 'C', 'A',
    'E', '\0'};

const unsigned char __MCC_viterbi_public_key[] = {
    '3', '0', '8', '1', '9', 'D', '3', '0', '0', 'D', '0', '6', '0', '9', '2',
    'A', '8', '6', '4', '8', '8', '6', 'F', '7', '0', 'D', '0', '1', '0', '1',
    '0', '1', '0', '5', '0', '0', '0', '3', '8', '1', '8', 'B', '0', '0', '3',
    '0', '8', '1', '8', '7', '0', '2', '8', '1', '8', '1', '0', '0', 'C', '4',
    '9', 'C', 'A', 'C', '3', '4', 'E', 'D', '1', '3', 'A', '5', '2', '0', '6',
    '5', '8', 'F', '6', 'F', '8', 'E', '0', '1', '3', '8', 'C', '4', '3', '1',
    '5', 'B', '4', '3', '1', '5', '2', '7', '7', 'E', 'D', '3', 'F', '7', 'D',
    'A', 'E', '5', '3', '0', '9', '9', 'D', 'B', '0', '8', 'E', 'E', '5', '8',
    '9', 'F', '8', '0', '4', 'D', '4', 'B', '9', '8', '1', '3', '2', '6', 'A',
    '5', '2', 'C', 'C', 'E', '4', '3', '8', '2', 'E', '9', 'F', '2', 'B', '4',
    'D', '0', '8', '5', 'E', 'B', '9', '5', '0', 'C', '7', 'A', 'B', '1', '2',
    'E', 'D', 'E', '2', 'D', '4', '1', '2', '9', '7', '8', '2', '0', 'E', '6',
    '3', '7', '7', 'A', '5', 'F', 'E', 'B', '5', '6', '8', '9', 'D', '4', 'E',
    '6', '0', '3', '2', 'F', '6', '0', 'C', '4', '3', '0', '7', '4', 'A', '0',
    '4', 'C', '2', '6', 'A', 'B', '7', '2', 'F', '5', '4', 'B', '5', '1', 'B',
    'B', '4', '6', '0', '5', '7', '8', '7', '8', '5', 'B', '1', '9', '9', '0',
    '1', '4', '3', '1', '4', 'A', '6', '5', 'F', '0', '9', '0', 'B', '6', '1',
    'F', 'C', '2', '0', '1', '6', '9', '4', '5', '3', 'B', '5', '8', 'F', 'C',
    '8', 'B', 'A', '4', '3', 'E', '6', '7', '7', '6', 'E', 'B', '7', 'E', 'C',
    'D', '3', '1', '7', '8', 'B', '5', '6', 'A', 'B', '0', 'F', 'A', '0', '6',
    'D', 'D', '6', '4', '9', '6', '7', 'C', 'B', '1', '4', '9', 'E', '5', '0',
    '2', '0', '1', '1', '1', '\0'};

static const char * MCC_viterbi_matlabpath_data[] = 
  { "viterbi/", "toolbox/compiler/deploy/",
    "$TOOLBOXMATLABDIR/general/", "$TOOLBOXMATLABDIR/ops/",
    "$TOOLBOXMATLABDIR/lang/", "$TOOLBOXMATLABDIR/elmat/",
    "$TOOLBOXMATLABDIR/elfun/", "$TOOLBOXMATLABDIR/specfun/",
    "$TOOLBOXMATLABDIR/matfun/", "$TOOLBOXMATLABDIR/datafun/",
    "$TOOLBOXMATLABDIR/polyfun/", "$TOOLBOXMATLABDIR/funfun/",
    "$TOOLBOXMATLABDIR/sparfun/", "$TOOLBOXMATLABDIR/scribe/",
    "$TOOLBOXMATLABDIR/graph2d/", "$TOOLBOXMATLABDIR/graph3d/",
    "$TOOLBOXMATLABDIR/specgraph/", "$TOOLBOXMATLABDIR/graphics/",
    "$TOOLBOXMATLABDIR/uitools/", "$TOOLBOXMATLABDIR/strfun/",
    "$TOOLBOXMATLABDIR/imagesci/", "$TOOLBOXMATLABDIR/iofun/",
    "$TOOLBOXMATLABDIR/audiovideo/", "$TOOLBOXMATLABDIR/timefun/",
    "$TOOLBOXMATLABDIR/datatypes/", "$TOOLBOXMATLABDIR/verctrl/",
    "$TOOLBOXMATLABDIR/codetools/", "$TOOLBOXMATLABDIR/helptools/",
    "$TOOLBOXMATLABDIR/winfun/", "$TOOLBOXMATLABDIR/demos/",
    "$TOOLBOXMATLABDIR/timeseries/", "$TOOLBOXMATLABDIR/hds/",
    "$TOOLBOXMATLABDIR/guide/", "$TOOLBOXMATLABDIR/plottools/",
    "toolbox/local/", "toolbox/shared/dastudio/",
    "$TOOLBOXMATLABDIR/datamanager/", "toolbox/compiler/" };

static const char * MCC_viterbi_classpath_data[] = 
  { "" };

static const char * MCC_viterbi_libpath_data[] = 
  { "" };

static const char * MCC_viterbi_app_opts_data[] = 
  { "" };

static const char * MCC_viterbi_run_opts_data[] = 
  { "" };

static const char * MCC_viterbi_warning_state_data[] = 
  { "off:MATLAB:dispatcher:nameConflict" };


mclComponentData __MCC_viterbi_component_data = { 

  /* Public key data */
  __MCC_viterbi_public_key,

  /* Component name */
  "viterbi",

  /* Component Root */
  "",

  /* Application key data */
  __MCC_viterbi_session_key,

  /* Component's MATLAB Path */
  MCC_viterbi_matlabpath_data,

  /* Number of directories in the MATLAB Path */
  38,

  /* Component's Java class path */
  MCC_viterbi_classpath_data,
  /* Number of directories in the Java class path */
  0,

  /* Component's load library path (for extra shared libraries) */
  MCC_viterbi_libpath_data,
  /* Number of directories in the load library path */
  0,

  /* MCR instance-specific runtime options */
  MCC_viterbi_app_opts_data,
  /* Number of MCR instance-specific runtime options */
  0,

  /* MCR global runtime options */
  MCC_viterbi_run_opts_data,
  /* Number of MCR global runtime options */
  0,
  
  /* Component preferences directory */
  "viterbi_CED6261A9E065193397F72454839CC04",

  /* MCR warning status data */
  MCC_viterbi_warning_state_data,
  /* Number of MCR warning status modifiers */
  1,

  /* Path to component - evaluated at runtime */
  NULL

};

#ifdef __cplusplus
}
#endif


