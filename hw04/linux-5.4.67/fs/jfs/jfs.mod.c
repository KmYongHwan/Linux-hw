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
	{ 0x95dc3deb, "blkdev_issue_discard" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0x334b33a, "fs_bio_set" },
	{ 0xbe54c689, "iget_failed" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3a966e1c, "drop_nlink" },
	{ 0x53b954a2, "up_read" },
	{ 0x37a1b2f7, "unload_nls" },
	{ 0x76c4c529, "bio_alloc_bioset" },
	{ 0xf1007a76, "make_bad_inode" },
	{ 0x56b51bbf, "dquot_get_next_dqblk" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x9a1e4cc5, "__mark_inode_dirty" },
	{ 0x98dcc8b9, "dquot_writeback_dquots" },
	{ 0x6877fb64, "__set_page_dirty_nobuffers" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xadfd6f08, "proc_create_single_data" },
	{ 0x2665db8c, "posix_acl_to_xattr" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x39e28e12, "generic_fh_to_parent" },
	{ 0x6e6bb587, "dquot_file_open" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x98e3bbde, "is_bad_inode" },
	{ 0x5dee76cd, "pagecache_get_page" },
	{ 0xc93ec8a4, "posix_acl_access_xattr_handler" },
	{ 0xcb7a2599, "posix_acl_update_mode" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x2b20a022, "__lock_page" },
	{ 0xf6118478, "filemap_write_and_wait" },
	{ 0x884f7711, "__lock_buffer" },
	{ 0xc4142837, "seq_printf" },
	{ 0x5de9d71b, "nobh_write_begin" },
	{ 0xa3f40039, "dquot_quota_off" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x44e9a829, "match_token" },
	{ 0x55b81fae, "inc_nlink" },
	{ 0x2f322a0c, "init_user_ns" },
	{ 0x8dcfbd07, "filemap_fdatawait_range" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4e8b32e0, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x18ba0ecf, "__dquot_free_space" },
	{ 0xae7efc5b, "page_symlink_inode_operations" },
	{ 0x3eb09dd8, "d_instantiate_new" },
	{ 0x6a3cb3a, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x4f07f96b, "__getblk_gfp" },
	{ 0xdf2fd6d5, "igrab" },
	{ 0x9c7b8128, "unlock_buffer" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x40846f97, "__dquot_alloc_space" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3a0cb9a5, "redirty_page_for_writepage" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xc9945da4, "set_page_dirty" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0xe6749241, "dquot_get_dqblk" },
	{ 0xc266be66, "truncate_setsize" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x668b19a1, "down_read" },
	{ 0x3d5e398b, "end_page_writeback" },
	{ 0xb58cd868, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xa0f710cf, "inode_owner_or_capable" },
	{ 0xa976d849, "mpage_readpages" },
	{ 0xfb578fc5, "memset" },
	{ 0x2210d332, "from_kuid" },
	{ 0xf47b3d97, "proc_mkdir" },
	{ 0xf8e5b8db, "mpage_readpage" },
	{ 0x3c39856e, "inode_add_bytes" },
	{ 0x11089ac7, "_ctype" },
	{ 0x5e4fe626, "dquot_alloc_inode" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xe541dad7, "freezing_slow_path" },
	{ 0xf824d270, "__bread_gfp" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x63baf9f7, "posix_acl_chmod" },
	{ 0x89bbfc0f, "d_obtain_alias" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf75a745e, "bio_add_page" },
	{ 0xf1e046cc, "panic" },
	{ 0xc2708aa1, "mpage_writepages" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6dcf857f, "uuid_null" },
	{ 0xd4432990, "from_kgid" },
	{ 0xf15d0578, "security_inode_init_security" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9dc84671, "set_nlink" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xeff83121, "setattr_copy" },
	{ 0x1d8b9535, "dquot_resume" },
	{ 0x59b7a504, "wait_on_page_writeback" },
	{ 0x277083e8, "insert_inode_locked" },
	{ 0xb7d7c500, "sync_dirty_buffer" },
	{ 0x4ae72e08, "truncate_pagecache" },
	{ 0x5fa3630e, "kmem_cache_create_usercopy" },
	{ 0xe151b6ee, "blkdev_get_by_dev" },
	{ 0x7ad0f76a, "set_cached_acl" },
	{ 0xafa4e654, "vfs_ioc_setflags_prepare" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x8ef38868, "unlock_page" },
	{ 0x504f092a, "generic_file_read_iter" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xd82a2711, "inode_nohighmem" },
	{ 0xdd640079, "posix_acl_create" },
	{ 0x1574c3c6, "__brelse" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x739758b1, "bio_put" },
	{ 0x7e7b0c19, "dquot_set_dqblk" },
	{ 0xb301748d, "file_write_and_wait_range" },
	{ 0xd6d2a096, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xe4fb2be3, "mnt_drop_write_file" },
	{ 0x479f68ad, "submit_bio" },
	{ 0xc6cbbc89, "capable" },
	{ 0x7582217, "xattr_full_name" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0x1bd3c261, "blkdev_put" },
	{ 0x9f62808b, "dquot_quota_on" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xec72d0b5, "dquot_operations" },
	{ 0xac50e529, "dquot_initialize" },
	{ 0x8d18a428, "generic_file_mmap" },
	{ 0xbdda74fd, "block_write_full_page" },
	{ 0x3989a913, "sync_blockdev" },
	{ 0xa3e59772, "truncate_inode_pages_final" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x49c63523, "load_nls" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x82d07ae7, "posix_acl_from_xattr" },
	{ 0x8f43ad84, "dquot_quota_sync" },
	{ 0x1953c958, "mempool_create" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x499cb97, "unlock_new_inode" },
	{ 0x84710cf0, "mnt_want_write_file" },
	{ 0xa0fcaaeb, "kill_block_super" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x53bd49a, "inode_newsize_ok" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfdc3d3fc, "simple_get_link" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8fb8009, "dquot_drop" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x8b4894bf, "register_filesystem" },
	{ 0x643db0c9, "dquot_transfer" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3c2e20be, "generic_file_write_iter" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x2581e3be, "remove_proc_subtree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x6b2d2bf1, "__test_set_page_writeback" },
	{ 0x22b21375, "iter_file_splice_write" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x7ede2eec, "iput" },
	{ 0x250f2a02, "read_cache_page" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x3dc9d8c1, "inode_dio_wait" },
	{ 0xda51701e, "page_get_link" },
	{ 0x71c86502, "ihold" },
	{ 0x69acdf38, "memcpy" },
	{ 0x638c7869, "current_time" },
	{ 0x4690d310, "d_splice_alias" },
	{ 0xa88b441f, "sync_filesystem" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0x4a0609d9, "sb_set_blocksize" },
	{ 0xf848708d, "__bforget" },
	{ 0xd58ad70d, "d_make_root" },
	{ 0xe3a155c2, "__blockdev_direct_IO" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xcdf4a2ef, "inode_set_flags" },
	{ 0x2b4d31ff, "posix_acl_default_xattr_handler" },
	{ 0x9896f0bf, "mark_buffer_dirty" },
	{ 0xbbfbcb0d, "unregister_filesystem" },
	{ 0x89949f55, "nobh_write_end" },
	{ 0x1f179757, "write_one_page" },
	{ 0xca8f6c91, "init_special_inode" },
	{ 0x84c0265, "dquot_get_state" },
	{ 0x2947182d, "new_inode" },
	{ 0xb0e602eb, "memmove" },
	{ 0xa7d2d66e, "generic_file_splice_read" },
	{ 0xb6812eb9, "dquot_free_inode" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xdfaa16a3, "discard_new_inode" },
	{ 0xd3a36df9, "dquot_disable" },
	{ 0x9984f62b, "generic_fh_to_dentry" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xffb44ec1, "dquot_set_dqinfo" },
	{ 0xd172461b, "clear_inode" },
	{ 0x19973b71, "d_instantiate" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xec5f9b49, "nobh_truncate_page" },
	{ 0x3fa55769, "__put_page" },
	{ 0x7cc76fa9, "filemap_flush" },
	{ 0x5c643c8a, "generic_block_bmap" },
	{ 0xf41f7e33, "clear_nlink" },
	{ 0x760a0f4f, "yield" },
	{ 0xc87adb4d, "iget_locked" },
	{ 0x5d92c2e, "setattr_prepare" },
	{ 0xccb87233, "filemap_fdatawrite" },
	{ 0xdbfc0b21, "inode_init_owner" },
	{ 0xe914e41e, "strcpy" },
	{ 0x23ae1e03, "truncate_inode_pages" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x68609863, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "20D5894B8BB473586619F7D");
