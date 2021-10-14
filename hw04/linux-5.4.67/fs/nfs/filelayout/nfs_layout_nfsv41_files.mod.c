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
	{ 0x5bd8bbc3, "nfs_request_add_commit_list" },
	{ 0x4149290, "pnfs_nfs_generic_sync" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0x880286e1, "nfs4_pnfs_ds_connect" },
	{ 0xc4843008, "pnfs_generic_clear_request_commit" },
	{ 0xdc81672e, "nfs4_setup_sequence" },
	{ 0x2eca53a0, "nfs_init_cinfo" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x711f3f59, "nfs_initiate_commit" },
	{ 0x55c3dcc1, "pnfs_error_mark_layout_for_return" },
	{ 0x6c32d1dd, "nfs4_pnfs_ds_put" },
	{ 0xa285ed61, "nfs4_mark_deviceid_unavailable" },
	{ 0xdf05942f, "__tracepoint_nfs4_pnfs_commit_ds" },
	{ 0xf355fb32, "nfs4_decode_mp_ds_addr" },
	{ 0xa1989d4c, "nfs_initiate_pgio" },
	{ 0xbade969e, "nfs4_set_rw_stateid" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c4f8c0e, "pnfs_generic_commit_pagelist" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xa6bf8df4, "pnfs_generic_recover_commit_reqs" },
	{ 0x1391f5b1, "pnfs_generic_pg_test" },
	{ 0xadd92820, "pnfs_update_layout" },
	{ 0xa1908a94, "rpc_exit" },
	{ 0x4dd146cd, "pnfs_generic_pg_cleanup" },
	{ 0x7cfe6a8b, "pnfs_generic_write_commit_done" },
	{ 0x1eb3479a, "rpc_delay" },
	{ 0xc039cbbe, "xdr_init_decode_pages" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xd73da156, "nfs4_find_get_deviceid" },
	{ 0xee8e7aac, "nfs4_find_or_create_ds_client" },
	{ 0x916d80b3, "nfs_pageio_reset_write_mds" },
	{ 0xd6b648d3, "pnfs_layout_mark_request_commit" },
	{ 0x74c523f8, "pnfs_destroy_layout" },
	{ 0x7fa553af, "nfs4_pnfs_ds_add" },
	{ 0x2d3a89, "pnfs_put_lseg" },
	{ 0x34fc633c, "nfs4_put_deviceid_node" },
	{ 0xed15fb41, "nfs4_print_deviceid" },
	{ 0xc2ba9888, "pnfs_set_layoutcommit" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3da8efce, "pnfs_generic_scan_commit_lists" },
	{ 0x69d3558d, "pnfs_generic_rw_release" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0xd3459767, "nfs41_sequence_done" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1029c182, "nfs4_test_deviceid_unavailable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf999267e, "pnfs_generic_commit_release" },
	{ 0x1acf441d, "pnfs_generic_pg_readpages" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x281b4962, "pnfs_read_done_resend_to_mds" },
	{ 0x4c9819ab, "rpc_count_iostats" },
	{ 0x925ee0e, "rpc_restart_call_prepare" },
	{ 0x12e0dc62, "pnfs_generic_pg_writepages" },
	{ 0xe0e66554, "pnfs_generic_prepare_to_resend_writes" },
	{ 0x37a0cba, "kfree" },
	{ 0x84606387, "pnfs_generic_pg_check_layout" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1cdde079, "__tracepoint_nfs4_pnfs_read" },
	{ 0x22bf38d8, "pnfs_write_done_resend_to_mds" },
	{ 0x71bc40e3, "rpc_wake_up" },
	{ 0x5f734a79, "xdr_inline_decode" },
	{ 0x163831c3, "__tracepoint_nfs4_pnfs_write" },
	{ 0x5798c8e8, "nfs_pageio_reset_read_mds" },
	{ 0xab8bb6e5, "nfs4_init_deviceid_node" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x4b53102f, "pnfs_set_lo_fail" },
	{ 0x7b4242d7, "xdr_set_scratch_buffer" },
	{ 0xb64f52a0, "nfs_writeback_update_inode" },
	{ 0xa628339c, "pnfs_register_layoutdriver" },
};

MODULE_INFO(depends, "nfsv4,nfs,sunrpc");


MODULE_INFO(srcversion, "04D4A0C0C898E08E1C9412B");
