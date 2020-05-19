# rows with middle cut out and 1 inst placed in cutout
source helpers.tcl
read_lef Nangate45.lef
read_def cut_rows1.def
check_placement
detailed_placement
check_placement

set def_file [make_result_file cut_rows1.def]
write_def $def_file
diff_file cut_rows1.defok $def_file