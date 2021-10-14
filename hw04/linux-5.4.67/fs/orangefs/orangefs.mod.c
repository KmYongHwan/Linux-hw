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
	{ 0xe7750f8, "kobject_put" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x139cee21, "wait_for_completion_io_timeout" },
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0xbe54c689, "iget_failed" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3a966e1c, "drop_nlink" },
	{ 0xf5a44787, "set_anon_super" },
	{ 0x53b954a2, "up_read" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xf1007a76, "make_bad_inode" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x9a1e4cc5, "__mark_inode_dirty" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x6877fb64, "__set_page_dirty_nobuffers" },
	{ 0x97ca01a1, "filemap_fault" },
	{ 0x349cba85, "strchr" },
	{ 0x8062d817, "iov_iter_revert" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x38602934, "generic_update_time" },
	{ 0x754d539c, "strlen" },
	{ 0x8f21dc3, "filemap_write_and_wait_range" },
	{ 0xa1d986cb, "iget5_locked" },
	{ 0x115266a3, "__cancel_dirty_page" },
	{ 0x4ceedc5a, "kill_anon_super" },
	{ 0xcfb8a37, "dget_parent" },
	{ 0x79ff3bbe, "seq_open" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x2665db8c, "posix_acl_to_xattr" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x9337cd0, "__wake_up_locked_key" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x5dee76cd, "pagecache_get_page" },
	{ 0xa8d9d69d, "generic_file_open" },
	{ 0xc93ec8a4, "posix_acl_access_xattr_handler" },
	{ 0xcb7a2599, "posix_acl_update_mode" },
	{ 0x2b20a022, "__lock_page" },
	{ 0xfe736ff9, "kobject_uevent" },
	{ 0xf6118478, "filemap_write_and_wait" },
	{ 0x87bc50e4, "touch_atime" },
	{ 0x724a073e, "deactivate_locked_super" },
	{ 0x7b26f7c9, "generic_delete_inode" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xd8ee8610, "iov_iter_zero" },
	{ 0x41b0b9cc, "dput" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x44e9a829, "match_token" },
	{ 0x3b1b6cc2, "__register_chrdev" },
	{ 0xe2a32370, "invalidate_inode_pages2" },
	{ 0x917490b, "wait_for_completion_killable_timeout" },
	{ 0x2f322a0c, "init_user_ns" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3eb09dd8, "d_instantiate_new" },
	{ 0x6a3cb3a, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x62a205aa, "super_setup_bdi" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xcec6343e, "seq_read" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x425c1719, "copy_page_from_iter" },
	{ 0xc9945da4, "set_page_dirty" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xce00c00a, "insert_inode_locked4" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbdff3e7d, "mutex_lock_killable" },
	{ 0x3d5e398b, "end_page_writeback" },
	{ 0xb58cd868, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x7b1e61ab, "iov_iter_bvec" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x2210d332, "from_kuid" },
	{ 0xdefbea52, "default_llseek" },
	{ 0xba312d7b, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x42cd103f, "copy_page_to_iter" },
	{ 0x63baf9f7, "posix_acl_chmod" },
	{ 0x89bbfc0f, "d_obtain_alias" },
	{ 0x7dc69e39, "write_inode_now" },
	{ 0xaf81bddc, "sget" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xd4432990, "from_kgid" },
	{ 0x5a921311, "strncmp" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x9dc84671, "set_nlink" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1c55d392, "file_update_time" },
	{ 0xaa856dd6, "write_cache_pages" },
	{ 0xeff83121, "setattr_copy" },
	{ 0x59b7a504, "wait_on_page_writeback" },
	{ 0x4ae72e08, "truncate_pagecache" },
	{ 0x2773c485, "__wake_up_locked" },
	{ 0x5fa3630e, "kmem_cache_create_usercopy" },
	{ 0x7ad0f76a, "set_cached_acl" },
	{ 0xafa4e654, "vfs_ioc_setflags_prepare" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x8ef38868, "unlock_page" },
	{ 0x504f092a, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xdd640079, "posix_acl_create" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xd6d2a096, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa916b694, "strnlen" },
	{ 0x51a4d68e, "__filemap_set_wb_err" },
	{ 0x8bcbc0e0, "wait_for_stable_page" },
	{ 0xd64b0a8e, "fs_kobj" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x82d07ae7, "posix_acl_from_xattr" },
	{ 0x499cb97, "unlock_new_inode" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0xc346258e, "inode_set_bytes" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfdc3d3fc, "simple_get_link" },
	{ 0x7d1ff3c7, "clear_page_dirty_for_io" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xcbe0fe99, "sync_inode_metadata" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x8b4894bf, "register_filesystem" },
	{ 0x3c2e20be, "generic_file_write_iter" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x6b2d2bf1, "__test_set_page_writeback" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x7ede2eec, "iput" },
	{ 0xa0e08b5, "posix_lock_file" },
	{ 0x37a0cba, "kfree" },
	{ 0x54d22f0c, "generic_permission" },
	{ 0x8f5ed1d, "unmap_mapping_range" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2a09a330, "__sb_end_write" },
	{ 0x638c7869, "current_time" },
	{ 0x4690d310, "d_splice_alias" },
	{ 0x743ba47e, "__sb_start_write" },
	{ 0x96848186, "scnprintf" },
	{ 0xd58ad70d, "d_make_root" },
	{ 0x2b4d31ff, "posix_acl_default_xattr_handler" },
	{ 0xbbfbcb0d, "unregister_filesystem" },
	{ 0x8897195d, "filemap_map_pages" },
	{ 0x29361773, "complete" },
	{ 0x4167f609, "seq_release" },
	{ 0x2947182d, "new_inode" },
	{ 0x31867396, "grab_cache_page_write_begin" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x74801e4, "param_ops_ulong" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x622bfb1f, "pagecache_isize_extended" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3fa55769, "__put_page" },
	{ 0x856befeb, "get_user_pages_fast" },
	{ 0x5d92c2e, "setattr_prepare" },
	{ 0x8de6e8c0, "generic_fillattr" },
	{ 0xe914e41e, "strcpy" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x5d12bbd5, "posix_test_lock" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A4FBD12441CD6600F9DA4C6");
