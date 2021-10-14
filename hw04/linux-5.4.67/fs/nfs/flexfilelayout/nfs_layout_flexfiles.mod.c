#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x66475b0c, "pnfs_unregister_layoutdriver" },
	{ 0x9f8a4dba, "nfs4_schedule_session_recovery" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x4149290, "pnfs_nfs_generic_sync" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0x886b53bc, "xdr_init_encode" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x880286e1, "nfs4_pnfs_ds_connect" },
	{ 0xdc29230a, "__tracepoint_pnfs_mds_fallback_pg_get_mirror_count" },
	{ 0xc4843008, "pnfs_generic_clear_request_commit" },
	{ 0x13d09aee, "nfs42_proc_layouterror" },
	{ 0xdc81672e, "nfs4_setup_sequence" },
	{ 0xa2945cfd, "prepare_kernel_cred" },
	{ 0x2eca53a0, "nfs_init_cinfo" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xa319bfee, "__tracepoint_pnfs_mds_fallback_pg_init_read" },
	{ 0x711f3f59, "nfs_initiate_commit" },
	{ 0x55c3dcc1, "pnfs_error_mark_layout_for_return" },
	{ 0x6c32d1dd, "nfs4_pnfs_ds_put" },
	{ 0xd6ed7dda, "__tracepoint_pnfs_mds_fallback_write_done" },
	{ 0x54bef45, "layoutstats_timer" },
	{ 0x5c4a2bdd, "nfs4_delete_deviceid" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x2f322a0c, "init_user_ns" },
	{ 0xa285ed61, "nfs4_mark_deviceid_unavailable" },
	{ 0xdf05942f, "__tracepoint_nfs4_pnfs_commit_ds" },
	{ 0xf355fb32, "nfs4_decode_mp_ds_addr" },
	{ 0xa1989d4c, "nfs_initiate_pgio" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c4f8c0e, "pnfs_generic_commit_pagelist" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xa6bf8df4, "pnfs_generic_recover_commit_reqs" },
	{ 0xfcfcd617, "nfs4_sequence_done" },
	{ 0x3f1cc127, "xdr_reserve_space" },
	{ 0x1391f5b1, "pnfs_generic_pg_test" },
	{ 0xadd92820, "pnfs_update_layout" },
	{ 0xb58cd868, "make_kgid" },
	{ 0xa1908a94, "rpc_exit" },
	{ 0x4dd146cd, "pnfs_generic_pg_cleanup" },
	{ 0x7cfe6a8b, "pnfs_generic_write_commit_done" },
	{ 0x1eb3479a, "rpc_delay" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xdfe07841, "pnfs_generic_layout_insert_lseg" },
	{ 0xc039cbbe, "xdr_init_decode_pages" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x2210d332, "from_kuid" },
	{ 0xee960d9f, "__tracepoint_pnfs_mds_fallback_read_done" },
	{ 0x36316413, "rpc_call_start" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x80ed3399, "pnfs_read_resend_pnfs" },
	{ 0xd73da156, "nfs4_find_get_deviceid" },
	{ 0xd4432990, "from_kgid" },
	{ 0xee8e7aac, "nfs4_find_or_create_ds_client" },
	{ 0xbdf461c7, "rpc_max_payload" },
	{ 0x916d80b3, "nfs_pageio_reset_write_mds" },
	{ 0xd6b648d3, "pnfs_layout_mark_request_commit" },
	{ 0x74c523f8, "pnfs_destroy_layout" },
	{ 0x7fa553af, "nfs4_pnfs_ds_add" },
	{ 0xa61e2d8f, "pnfs_layoutcommit_inode" },
	{ 0x2d3a89, "pnfs_put_lseg" },
	{ 0x34fc633c, "nfs4_put_deviceid_node" },
	{ 0x3747d326, "pnfs_report_layoutstat" },
	{ 0xed15fb41, "nfs4_print_deviceid" },
	{ 0xc2ba9888, "pnfs_set_layoutcommit" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3da8efce, "pnfs_generic_scan_commit_lists" },
	{ 0x69d3558d, "pnfs_generic_rw_release" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0x208f5c30, "__tracepoint_pnfs_mds_fallback_read_pagelist" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1029c182, "nfs4_test_deviceid_unavailable" },
	{ 0x6085edbd, "nfs_map_string_to_numeric" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2058034f, "__put_cred" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf999267e, "pnfs_generic_commit_release" },
	{ 0x1acf441d, "pnfs_generic_pg_readpages" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0x281b4962, "pnfs_read_done_resend_to_mds" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x925ee0e, "rpc_restart_call_prepare" },
	{ 0x12e0dc62, "pnfs_generic_pg_writepages" },
	{ 0xe0e66554, "pnfs_generic_prepare_to_resend_writes" },
	{ 0x37a0cba, "kfree" },
	{ 0x84606387, "pnfs_generic_pg_check_layout" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1cdde079, "__tracepoint_nfs4_pnfs_read" },
	{ 0x22bf38d8, "pnfs_write_done_resend_to_mds" },
	{ 0x71bc40e3, "rpc_wake_up" },
	{ 0xffca5273, "rpc_count_iostats_metrics" },
	{ 0x5f734a79, "xdr_inline_decode" },
	{ 0x163831c3, "__tracepoint_nfs4_pnfs_write" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x722a53d5, "param_ops_ushort" },
	{ 0x1fa67ebb, "xdr_write_pages" },
	{ 0x5798c8e8, "nfs_pageio_reset_read_mds" },
	{ 0x3c7d84cc, "__tracepoint_pnfs_mds_fallback_write_pagelist" },
	{ 0xab8bb6e5, "nfs4_init_deviceid_node" },
	{ 0x78ecf37b, "__tracepoint_pnfs_mds_fallback_pg_init_write" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x7b4242d7, "xdr_set_scratch_buffer" },
	{ 0xb64f52a0, "nfs_writeback_update_inode" },
	{ 0x670ee463, "nfs4_mark_deviceid_available" },
	{ 0x3fa55769, "__put_page" },
	{ 0xa628339c, "pnfs_register_layoutdriver" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "nfsv4,sunrpc,nfs");


MODULE_INFO(srcversion, "FD5B8DDB1B0B02162E86FE2");
