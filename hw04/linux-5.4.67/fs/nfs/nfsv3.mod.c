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
	{ 0x7c6aa8ed, "get_acl" },
	{ 0x94690b58, "forget_cached_acl" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x8a78cef3, "nfs_unlink" },
	{ 0x2a3a0ec8, "nfs_symlink" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0xb30b8554, "xdr_stream_pos" },
	{ 0xd4c1219c, "nfs_access_set_mask" },
	{ 0x5306672b, "nfs_refresh_inode" },
	{ 0xdf1546ef, "nfs_close_context" },
	{ 0x80a02dc1, "nfs_free_client" },
	{ 0x754d539c, "strlen" },
	{ 0x8e7419b6, "nfs_try_mount" },
	{ 0xcb48ab33, "from_kuid_munged" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x56eaf858, "nfs_add_or_obtain" },
	{ 0xc93ec8a4, "posix_acl_access_xattr_handler" },
	{ 0xef293a9a, "nfs_permission" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x245c0be0, "put_nfs_open_context" },
	{ 0xf09cc34, "schedule_timeout_killable" },
	{ 0x41b0b9cc, "dput" },
	{ 0xdbfc550, "nfs_link" },
	{ 0xc0542655, "rpc_restart_call" },
	{ 0x2f322a0c, "init_user_ns" },
	{ 0xa0b5d4c9, "nfs_sops" },
	{ 0x8b8cf43b, "nfs_setattr_update_inode" },
	{ 0xf991831b, "nfs_async_iocounter_wait" },
	{ 0xccc5cb7b, "unregister_nfs_version" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x10c7593c, "nfs_rmdir" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3f1cc127, "xdr_reserve_space" },
	{ 0xfd7adc4f, "nfs_alloc_fattr" },
	{ 0x5db342c2, "from_kgid_munged" },
	{ 0xb58cd868, "make_kgid" },
	{ 0x98b0ece8, "nfs_init_timeout_values" },
	{ 0x1eb3479a, "rpc_delay" },
	{ 0xc7b743d, "nfs_fattr_init" },
	{ 0x6ca3bb74, "xdr_terminate_string" },
	{ 0x652796b6, "nfs_setattr" },
	{ 0xe34bf7a9, "nfs_fs_type" },
	{ 0x27d0eddf, "rpc_prepare_reply_pages" },
	{ 0x3c31cc36, "rpc_call_sync" },
	{ 0x36316413, "rpc_call_start" },
	{ 0xba312d7b, "current_task" },
	{ 0xe541dad7, "freezing_slow_path" },
	{ 0xc5850110, "printk" },
	{ 0x787582c, "register_nfs_version" },
	{ 0x25919c14, "rpc_bind_new_program" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd1d7e9e7, "nfs_zap_acl_cache" },
	{ 0x1ef993c6, "nfs_getattr" },
	{ 0xc725fb8, "posix_acl_equiv_mode" },
	{ 0x22f88b3a, "nfs_invalidate_atime" },
	{ 0x2ce869b, "get_nfs_open_context" },
	{ 0xdd640079, "posix_acl_create" },
	{ 0x25a10f0f, "nfsacl_encode" },
	{ 0x426b106a, "nfs_lookup" },
	{ 0x3333ccaf, "nfs_rename" },
	{ 0x21dd6683, "nfs_put_lock_context" },
	{ 0x26d69813, "nfs_file_operations" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0x4c75fa1a, "nfs_get_client" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7dc06536, "nfs_get_lock_context" },
	{ 0x553d7495, "nfs_revalidate_inode" },
	{ 0xe2458eb9, "nfs_mkdir" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8cd5ab8c, "nfs_create" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x1a809853, "posix_acl_from_mode" },
	{ 0x2148688e, "nfsacl_decode" },
	{ 0xedbc0d62, "xdr_read_pages" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x1f2a9970, "rpc_ntop" },
	{ 0xfb6f8d08, "nfs_post_op_update_inode" },
	{ 0x37a0cba, "kfree" },
	{ 0x797d32bd, "nfs_init_client" },
	{ 0x9263911d, "nfs_create_server" },
	{ 0xf21a2d98, "nfs_mknod" },
	{ 0x2b4d31ff, "posix_acl_default_xattr_handler" },
	{ 0xa8abcded, "__tracepoint_nfs_xdr_status" },
	{ 0x58107b60, "nfs_submount" },
	{ 0x6f19d7b1, "forget_all_cached_acls" },
	{ 0x5f734a79, "xdr_inline_decode" },
	{ 0x61e2797b, "nfs_access_zap_cache" },
	{ 0x1fa67ebb, "xdr_write_pages" },
	{ 0xc312de04, "nfs_dentry_operations" },
	{ 0x1c072454, "nfs_alloc_client" },
	{ 0xb64f52a0, "nfs_writeback_update_inode" },
	{ 0xc1a1354b, "nlmclnt_proc" },
	{ 0xe914e41e, "strcpy" },
	{ 0xbf1da7d3, "nfs_clone_server" },
};

MODULE_INFO(depends, "nfs,sunrpc,nfs_acl,lockd");


MODULE_INFO(srcversion, "A332990748E038A05328644");
