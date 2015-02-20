#include "stdafx.h"
#include "Emu/System.h"
#include "Emu/ARMv7/PSVFuncList.h"

extern psv_log_base sceSqlite;

#define REG_FUNC(nid, name) reg_psv_func<(func_ptr)name>(nid, &sceSqlite, #name, name)

psv_log_base sceSqlite("SceSqlite", []()
{
	sceSqlite.on_load = nullptr;
	sceSqlite.on_unload = nullptr;
	sceSqlite.on_stop = nullptr;

	//REG_FUNC(0x26E46324, sqlite3_libversion);
	//REG_FUNC(0x4CCB58A2, sqlite3_sourceid);
	//REG_FUNC(0x5982F404, sqlite3_libversion_number);
	//REG_FUNC(0xA3B818DA, sqlite3_threadsafe);
	//REG_FUNC(0x7DF94B79, sqlite3_close);
	//REG_FUNC(0x2371E86A, sqlite3_exec);
	//REG_FUNC(0xC22AF627, sqlite3_initialize);
	//REG_FUNC(0x99B5A4A3, sqlite3_shutdown);
	//REG_FUNC(0xBD304836, sqlite3_os_init);
	//REG_FUNC(0x9CE7C4C3, sqlite3_os_end);
	//REG_FUNC(0x96C5D388, sqlite3_config);
	//REG_FUNC(0xADFB25C0, sqlite3_db_config);
	//REG_FUNC(0x3892C4B8, sqlite3_extended_result_codes);
	//REG_FUNC(0x301851A1, sqlite3_last_insert_rowid);
	//REG_FUNC(0xF206FBA1, sqlite3_changes);
	//REG_FUNC(0x02ADA92D, sqlite3_total_changes);
	//REG_FUNC(0x3CB771AC, sqlite3_interrupt);
	//REG_FUNC(0x2E28B2A7, sqlite3_complete);
	//REG_FUNC(0x4EAB317B, sqlite3_complete16);
	//REG_FUNC(0xB5B5D287, sqlite3_busy_handler);
	//REG_FUNC(0xAE8E3630, sqlite3_busy_timeout);
	//REG_FUNC(0xF2AB9C89, sqlite3_get_table);
	//REG_FUNC(0x1FEC6959, sqlite3_free_table);
	//REG_FUNC(0xE630216C, sqlite3_mprintf);
	//REG_FUNC(0xC6372184, sqlite3_vmprintf);
	//REG_FUNC(0xCC189941, sqlite3_snprintf);
	//REG_FUNC(0xF01DEB95, sqlite3_malloc);
	//REG_FUNC(0xD1CF5631, sqlite3_realloc);
	//REG_FUNC(0xCBF0CA8A, sqlite3_free);
	//REG_FUNC(0x8E4F6ED5, sqlite3_memory_used);
	//REG_FUNC(0x2F33DAD6, sqlite3_memory_highwater);
	//REG_FUNC(0x5A2590BF, sqlite3_randomness);
	//REG_FUNC(0x77FB3458, sqlite3_set_authorizer);
	//REG_FUNC(0xFC127A83, sqlite3_trace);
	//REG_FUNC(0x48B789A1, sqlite3_profile);
	//REG_FUNC(0x19165D04, sqlite3_progress_handler);
	//REG_FUNC(0x8E506859, sqlite3_open);
	//REG_FUNC(0x881EEDD8, sqlite3_open16);
	//REG_FUNC(0xA1E98A41, sqlite3_open_v2);
	//REG_FUNC(0xA7AAE2E7, sqlite3_errcode);
	//REG_FUNC(0x91187282, sqlite3_extended_errcode);
	//REG_FUNC(0xABFB8B6E, sqlite3_errmsg);
	//REG_FUNC(0xF0DE1A97, sqlite3_errmsg16);
	//REG_FUNC(0xDED2D517, sqlite3_limit);
	//REG_FUNC(0x0C1B5509, sqlite3_prepare);
	//REG_FUNC(0xBC4BDCF4, sqlite3_prepare_v2);
	//REG_FUNC(0xC657CFB8, sqlite3_prepare16);
	//REG_FUNC(0x426D81D2, sqlite3_prepare16_v2);
	//REG_FUNC(0x082C36D4, sqlite3_sql);
	//REG_FUNC(0x3F225D62, sqlite3_bind_blob);
	//REG_FUNC(0xDE007F1B, sqlite3_bind_double);
	//REG_FUNC(0x14ABCBCC, sqlite3_bind_int);
	//REG_FUNC(0x43D967EF, sqlite3_bind_int64);
	//REG_FUNC(0xFF8A9974, sqlite3_bind_null);
	//REG_FUNC(0x613AB709, sqlite3_bind_text);
	//REG_FUNC(0x9D0FEAEF, sqlite3_bind_text16);
	//REG_FUNC(0x8A667D2A, sqlite3_bind_value);
	//REG_FUNC(0x78FBA2D0, sqlite3_bind_zeroblob);
	//REG_FUNC(0x17D4F00B, sqlite3_bind_parameter_count);
	//REG_FUNC(0x96D3B5F9, sqlite3_bind_parameter_name);
	//REG_FUNC(0xD4D2A5D8, sqlite3_bind_parameter_index);
	//REG_FUNC(0x690947E2, sqlite3_clear_bindings);
	//REG_FUNC(0x8567A8DE, sqlite3_column_count);
	//REG_FUNC(0xBC422DF6, sqlite3_column_name);
	//REG_FUNC(0x6EF9A642, sqlite3_column_name16);
	//REG_FUNC(0x5AE92D67, sqlite3_column_decltype);
	//REG_FUNC(0xE058DE60, sqlite3_column_decltype16);
	//REG_FUNC(0xCA8755B7, sqlite3_step);
	//REG_FUNC(0x61911935, sqlite3_data_count);
	//REG_FUNC(0xFE237ED7, sqlite3_column_blob);
	//REG_FUNC(0x36013FE4, sqlite3_column_bytes);
	//REG_FUNC(0x439F160B, sqlite3_column_bytes16);
	//REG_FUNC(0xC4866097, sqlite3_column_double);
	//REG_FUNC(0xE5B6BA01, sqlite3_column_int);
	//REG_FUNC(0x90BA0B88, sqlite3_column_int64);
	//REG_FUNC(0x8E68D270, sqlite3_column_text);
	//REG_FUNC(0xD7BD6B76, sqlite3_column_text16);
	//REG_FUNC(0xDBB25C43, sqlite3_column_type);
	//REG_FUNC(0x2227F21D, sqlite3_column_value);
	//REG_FUNC(0xB656B7E2, sqlite3_finalize);
	//REG_FUNC(0xA6ECC214, sqlite3_reset);
	//REG_FUNC(0xB0543897, sqlite3_create_function);
	//REG_FUNC(0x7655FA45, sqlite3_create_function16);
	//REG_FUNC(0x6AB02532, sqlite3_aggregate_count);
	//REG_FUNC(0xF8AA518B, sqlite3_expired);
	//REG_FUNC(0x6EC012E5, sqlite3_transfer_bindings);
	//REG_FUNC(0xF48E021B, sqlite3_global_recover);
	//REG_FUNC(0x173C9C0B, sqlite3_thread_cleanup);
	//REG_FUNC(0x56EDF517, sqlite3_memory_alarm);
	//REG_FUNC(0xC9962B31, sqlite3_value_blob);
	//REG_FUNC(0x5368EF1F, sqlite3_value_bytes);
	//REG_FUNC(0x4D10900D, sqlite3_value_bytes16);
	//REG_FUNC(0xF1F2C9BE, sqlite3_value_double);
	//REG_FUNC(0x4809A520, sqlite3_value_int);
	//REG_FUNC(0xA6581C04, sqlite3_value_int64);
	//REG_FUNC(0x7EB97356, sqlite3_value_text);
	//REG_FUNC(0x5BBE38C2, sqlite3_value_text16);
	//REG_FUNC(0x014863A6, sqlite3_value_text16le);
	//REG_FUNC(0x3B89AA8D, sqlite3_value_text16be);
	//REG_FUNC(0xC5EEBB5D, sqlite3_value_type);
	//REG_FUNC(0x81B7D43D, sqlite3_value_numeric_type);
	//REG_FUNC(0xAA8BE477, sqlite3_aggregate_context);
	//REG_FUNC(0x78FF81FB, sqlite3_user_data);
	//REG_FUNC(0x74259C09, sqlite3_context_db_handle);
	//REG_FUNC(0x394FC1CB, sqlite3_get_auxdata);
	//REG_FUNC(0x129E01C9, sqlite3_set_auxdata);
	//REG_FUNC(0x90CDF8C1, sqlite3_result_blob);
	//REG_FUNC(0xC2A5C2F8, sqlite3_result_double);
	//REG_FUNC(0x063BFACA, sqlite3_result_error);
	//REG_FUNC(0xAB2AEB4A, sqlite3_result_error16);
	//REG_FUNC(0xAB9EFF96, sqlite3_result_error_toobig);
	//REG_FUNC(0x944E747A, sqlite3_result_error_nomem);
	//REG_FUNC(0x1165223C, sqlite3_result_error_code);
	//REG_FUNC(0x5C9CD9D4, sqlite3_result_int);
	//REG_FUNC(0x0EF1AA07, sqlite3_result_int64);
	//REG_FUNC(0x6DE09482, sqlite3_result_null);
	//REG_FUNC(0x696B5E6A, sqlite3_result_text);
	//REG_FUNC(0x3AF5D206, sqlite3_result_text16);
	//REG_FUNC(0x845B4FC2, sqlite3_result_text16le);
	//REG_FUNC(0xEE3E906A, sqlite3_result_text16be);
	//REG_FUNC(0x09664492, sqlite3_result_value);
	//REG_FUNC(0x3D463CF7, sqlite3_result_zeroblob);
	//REG_FUNC(0xC61B63FB, sqlite3_create_collation);
	//REG_FUNC(0x4B110AF2, sqlite3_create_collation_v2);
	//REG_FUNC(0xF7FE99C8, sqlite3_create_collation16);
	//REG_FUNC(0x836C99A3, sqlite3_collation_needed);
	//REG_FUNC(0x537066CE, sqlite3_collation_needed16);
	//REG_FUNC(0x6B88D1D4, sqlite3_sleep);
	//REG_FUNC(0x0910C3CB, sqlite3_get_autocommit);
	//REG_FUNC(0x2C62429E, sqlite3_db_handle);
	//REG_FUNC(0xD257592A, sqlite3_next_stmt);
	//REG_FUNC(0x4BAE6E3B, sqlite3_commit_hook);
	//REG_FUNC(0x67F53D6B, sqlite3_rollback_hook);
	//REG_FUNC(0xEB05FE87, sqlite3_update_hook);
	//REG_FUNC(0xF0094BED, sqlite3_enable_shared_cache);
	//REG_FUNC(0x8F99FBE5, sqlite3_release_memory);
	//REG_FUNC(0xD1458BA7, sqlite3_soft_heap_limit);
	//REG_FUNC(0xC9EA8E1F, sqlite3_load_extension);
	//REG_FUNC(0x9BFC6F07, sqlite3_enable_load_extension);
	//REG_FUNC(0x24738263, sqlite3_auto_extension);
	//REG_FUNC(0xC4296FFD, sqlite3_reset_auto_extension);
	//REG_FUNC(0x8970C45F, sqlite3_create_module);
	//REG_FUNC(0x1AA3BC1A, sqlite3_create_module_v2);
	//REG_FUNC(0x7E2A5E8F, sqlite3_declare_vtab);
	//REG_FUNC(0xAF680D40, sqlite3_overload_function);
	//REG_FUNC(0xD35B3E55, sqlite3_blob_open);
	//REG_FUNC(0xC085A15D, sqlite3_blob_close);
	//REG_FUNC(0xA07AEEE3, sqlite3_blob_bytes);
	//REG_FUNC(0x71393AA4, sqlite3_blob_read);
	//REG_FUNC(0xBDB46BCF, sqlite3_blob_write);
	//REG_FUNC(0x0C6DD8C3, sqlite3_vfs_find);
	//REG_FUNC(0x65F53B9C, sqlite3_vfs_register);
	//REG_FUNC(0x69CF4171, sqlite3_vfs_unregister);
	//REG_FUNC(0xEEB7839F, sqlite3_mutex_alloc);
	//REG_FUNC(0x38E933E2, sqlite3_mutex_free);
	//REG_FUNC(0x60DB89C0, sqlite3_mutex_enter);
	//REG_FUNC(0x218D700E, sqlite3_mutex_try);
	//REG_FUNC(0x545ABDDB, sqlite3_mutex_leave);
	//REG_FUNC(0xA8E53D26, sqlite3_db_mutex);
	//REG_FUNC(0xBB096FBD, sqlite3_file_control);
	//REG_FUNC(0x324D4EFD, sqlite3_test_control);
	//REG_FUNC(0xD8C435AA, sqlite3_status);
	//REG_FUNC(0xB5DFAF6A, sqlite3_db_status);
	//REG_FUNC(0xF7ABF5FA, sqlite3_stmt_status);
	//REG_FUNC(0x91DDB12A, sqlite3_backup_init);
	//REG_FUNC(0x2A15E081, sqlite3_backup_step);
	//REG_FUNC(0x93A6B7EF, sqlite3_backup_finish);
	//REG_FUNC(0x9962540B, sqlite3_backup_remaining);
	//REG_FUNC(0x20D054CF, sqlite3_backup_pagecount);
	//REG_FUNC(0x12E2FC18, sqlite3_strnicmp);
	//REG_FUNC(0xB80D43C7, sqlite3_version);
	//REG_FUNC(0x1AEC1F74, sqlite3_temp_directory);
});
