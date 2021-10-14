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
	{ 0x6a5fa363, "sigprocmask" },
	{ 0xe7750f8, "kobject_put" },
	{ 0x95dc3deb, "blkdev_issue_discard" },
	{ 0x91d56fe1, "kset_create_and_add" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x2491a84f, "kobject_get" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xed12c1a8, "jbd2_journal_flush" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x3a966e1c, "drop_nlink" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0x117adf18, "put_pid" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x53b954a2, "up_read" },
	{ 0x1551faaa, "jbd2_journal_begin_ordered_truncate" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xf1007a76, "make_bad_inode" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x9a1e4cc5, "__mark_inode_dirty" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x97ca01a1, "filemap_fault" },
	{ 0xf84b26b2, "dquot_quotactl_sysfile_ops" },
	{ 0x4d3af7fa, "ocfs2_cluster_hangup" },
	{ 0xfee7274f, "dqput" },
	{ 0x7683599, "user_path_at_empty" },
	{ 0x5c1faf65, "inode_permission" },
	{ 0xb2686996, "dqget" },
	{ 0xad72306e, "generic_write_checks" },
	{ 0x720fcca4, "jbd2_journal_errno" },
	{ 0x63470c2a, "clean_bdev_aliases" },
	{ 0x5021f15e, "bpf_trace_run7" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0x9507547f, "ocfs2_cluster_disconnect" },
	{ 0x8351f650, "jbd2_journal_lock_updates" },
	{ 0x3a795b71, "__generic_file_write_iter" },
	{ 0xa1d986cb, "iget5_locked" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x456eb1a, "__cleancache_init_shared_fs" },
	{ 0xb1cfd4a9, "end_buffer_write_sync" },
	{ 0x287acd9f, "bdev_read_only" },
	{ 0x7bcc7dd1, "seq_release_private" },
	{ 0xf1682866, "block_invalidatepage" },
	{ 0xf11010e0, "done_path_create" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x163141cf, "seq_escape" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x856076f4, "block_is_partially_uptodate" },
	{ 0x98e3bbde, "is_bad_inode" },
	{ 0xae31b3e7, "blkdev_issue_flush" },
	{ 0x5dee76cd, "pagecache_get_page" },
	{ 0xe060ac78, "truncate_inode_pages_range" },
	{ 0xc93ec8a4, "posix_acl_access_xattr_handler" },
	{ 0xcb7a2599, "posix_acl_update_mode" },
	{ 0xaed3df50, "jbd2_log_wait_commit" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x2b20a022, "__lock_page" },
	{ 0x891536ee, "ll_rw_block" },
	{ 0x7a87b859, "qtree_get_next_id" },
	{ 0xf6118478, "filemap_write_and_wait" },
	{ 0xbf9e0160, "jbd2_journal_get_undo_access" },
	{ 0x884f7711, "__lock_buffer" },
	{ 0x57e35366, "jbd2_journal_force_commit" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x41b0b9cc, "dput" },
	{ 0xc4142837, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x44e9a829, "match_token" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x80280f8, "buffer_migrate_page" },
	{ 0x55b81fae, "inc_nlink" },
	{ 0x1d09f62f, "block_read_full_page" },
	{ 0x2f322a0c, "init_user_ns" },
	{ 0x6d6fec1f, "ktime_mono_to_any" },
	{ 0xa3ce5996, "jbd2_journal_check_used_features" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x76f40744, "ocfs2_dlm_lvb" },
	{ 0x8dcfbd07, "filemap_fdatawait_range" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4e8b32e0, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x18ba0ecf, "__dquot_free_space" },
	{ 0x69e61a65, "trace_event_buffer_reserve" },
	{ 0x2aad1fd8, "kobject_del" },
	{ 0x6a3cb3a, "generic_read_dir" },
	{ 0x4f07f96b, "__getblk_gfp" },
	{ 0xdf2fd6d5, "igrab" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x9c7b8128, "unlock_buffer" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x40846f97, "__dquot_alloc_space" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xab64c8cc, "jbd2_journal_destroy" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xcec6343e, "seq_read" },
	{ 0x2a186953, "bpf_trace_run3" },
	{ 0xa095e02e, "generic_check_addressable" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x7fdc590e, "unregister_quota_format" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x668b19a1, "down_read" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0x59f2771d, "jbd2_journal_start" },
	{ 0x2fc2002b, "simple_attr_read" },
	{ 0x446af8d8, "d_delete" },
	{ 0x1cb99de5, "jbd2_journal_wipe" },
	{ 0xece784c2, "rb_first" },
	{ 0xfad855c6, "should_remove_suid" },
	{ 0xb58cd868, "make_kgid" },
	{ 0x3bc313f3, "register_quota_format" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7cc4a5d, "printk_timed_ratelimit" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xe31ef352, "debugfs_create_u32" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x30ec9d8a, "__insert_inode_hash" },
	{ 0xa0f710cf, "inode_owner_or_capable" },
	{ 0xa976d849, "mpage_readpages" },
	{ 0x34ace064, "generic_remap_file_range_prep" },
	{ 0xbda3d4e9, "trace_define_field" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x2210d332, "from_kuid" },
	{ 0xfd1ad3bf, "jbd2_journal_dirty_metadata" },
	{ 0xee73f15c, "bpf_trace_run9" },
	{ 0x2f89cc53, "bpf_trace_run1" },
	{ 0x5e4fe626, "dquot_alloc_inode" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x5a343416, "ocfs2_kset" },
	{ 0xbc3a27c2, "__seq_open_private" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x89bbfc0f, "d_obtain_alias" },
	{ 0x5632be15, "__audit_inode_child" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa7aa4841, "jbd2_journal_extend" },
	{ 0xcf1a5815, "jbd2_trans_will_send_data_barrier" },
	{ 0x7dc69e39, "write_inode_now" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0x482f673c, "ocfs2_plock" },
	{ 0xf1e046cc, "panic" },
	{ 0x1f1cb1b0, "jbd2_journal_ack_err" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x7f4146c4, "jbd2_journal_start_commit" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x9166fada, "strncpy" },
	{ 0xb104128c, "trace_event_reg" },
	{ 0x7fd33dcc, "qtree_read_dquot" },
	{ 0xd4432990, "from_kgid" },
	{ 0x1544f4ba, "dquot_enable" },
	{ 0x6168380e, "seq_putc" },
	{ 0x7bd31922, "d_move" },
	{ 0xf15d0578, "security_inode_init_security" },
	{ 0x5a921311, "strncmp" },
	{ 0xbee380ba, "posix_acl_alloc" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x9dc84671, "set_nlink" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2588cddc, "__wait_on_buffer" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1bce5c09, "jbd2_journal_release_jbd_inode" },
	{ 0xeff83121, "setattr_copy" },
	{ 0x154a14f5, "bpf_trace_run5" },
	{ 0x1d8b9535, "dquot_resume" },
	{ 0xc5196999, "ocfs2_dlm_unlock" },
	{ 0x59b7a504, "wait_on_page_writeback" },
	{ 0xf67124c1, "unlock_two_nondirectories" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x63331ce9, "simple_attr_release" },
	{ 0xafa4e654, "vfs_ioc_setflags_prepare" },
	{ 0xb5b58439, "qtree_release_dquot" },
	{ 0x4e3567f7, "match_int" },
	{ 0x8ef38868, "unlock_page" },
	{ 0x504f092a, "generic_file_read_iter" },
	{ 0x2fc4e795, "jbd2_journal_abort" },
	{ 0xe3a53f4c, "sort" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa1f042ce, "jbd2_journal_init_inode" },
	{ 0xce24f1a4, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xd82a2711, "inode_nohighmem" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x1574c3c6, "__brelse" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x44a82c61, "jbd2_journal_clear_err" },
	{ 0x1475f64b, "ocfs2_dlm_lvb_valid" },
	{ 0xd5563066, "ilookup5" },
	{ 0xb4482091, "mark_page_accessed" },
	{ 0xaf969565, "ocfs2_dlm_lock" },
	{ 0x7caf9a1d, "qtree_write_dquot" },
	{ 0xb301748d, "file_write_and_wait_range" },
	{ 0xd6d2a096, "inode_init_once" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa726931, "ocfs2_cluster_this_node" },
	{ 0xe4fb2be3, "mnt_drop_write_file" },
	{ 0xc6cbbc89, "capable" },
	{ 0x80fa8f12, "block_commit_write" },
	{ 0x6a0c3847, "__mlog_printk" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd344e4ee, "ocfs2_stack_glue_set_max_proto_version" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xd806a273, "ocfs2_dlm_dump_lksb" },
	{ 0xce2d4295, "locks_init_lock" },
	{ 0xac50e529, "dquot_initialize" },
	{ 0x3b7d8084, "sync_mapping_buffers" },
	{ 0xa916b694, "strnlen" },
	{ 0x8bcbc0e0, "wait_for_stable_page" },
	{ 0xbdda74fd, "block_write_full_page" },
	{ 0x3989a913, "sync_blockdev" },
	{ 0xa3e59772, "truncate_inode_pages_final" },
	{ 0x8241f82, "create_empty_buffers" },
	{ 0x2648dc07, "try_to_free_buffers" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0x93abe7cc, "trace_event_ignore_this_pid" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xe0d3df6e, "jbd2_journal_get_write_access" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x142d2a39, "jbd2_journal_init_jbd_inode" },
	{ 0x5e6d920c, "make_kprojid" },
	{ 0x605790dc, "fiemap_fill_next_extent" },
	{ 0x499cb97, "unlock_new_inode" },
	{ 0x84710cf0, "mnt_want_write_file" },
	{ 0x8b8059bd, "in_group_p" },
	{ 0xa0fcaaeb, "kill_block_super" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x90cc322f, "lock_two_nondirectories" },
	{ 0x53bd49a, "inode_newsize_ok" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0xc2092042, "locks_lock_inode_wait" },
	{ 0xa3a9b3dc, "qtree_entry_unused" },
	{ 0x3623548, "dquot_scan_active" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xc410e147, "trace_event_buffer_commit" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xc9fae756, "ocfs2_cluster_connect" },
	{ 0x4bfda41c, "shrink_dcache_parent" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x67d32512, "vfs_setpos" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xe7a8f47a, "submit_bh" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x84aa78ec, "path_put" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8fb8009, "dquot_drop" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xff3b0054, "bpf_trace_run8" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x2bb6099e, "dq_data_lock" },
	{ 0x8b4894bf, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6e6709fd, "event_triggers_call" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x3a48c0e4, "bpf_trace_run2" },
	{ 0x22b21375, "iter_file_splice_write" },
	{ 0xbbc4ef97, "ocfs2_stack_supports_plocks" },
	{ 0x8d55bb8a, "qid_eq" },
	{ 0x1fb1b940, "jbd2_journal_clear_features" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x84264ced, "fs_umode_to_ftype" },
	{ 0x5ae189e3, "kset_unregister" },
	{ 0x7ede2eec, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x54d22f0c, "generic_permission" },
	{ 0x3dc9d8c1, "inode_dio_wait" },
	{ 0xda51701e, "page_get_link" },
	{ 0x71c86502, "ihold" },
	{ 0x8f5ed1d, "unmap_mapping_range" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2a09a330, "__sb_end_write" },
	{ 0xa42a5626, "trace_event_raw_init" },
	{ 0x638c7869, "current_time" },
	{ 0xaa369563, "generic_error_remove_page" },
	{ 0x68e8c57a, "jbd2_journal_unlock_updates" },
	{ 0x4690d310, "d_splice_alias" },
	{ 0x8bb0e88, "fsnotify" },
	{ 0xc550e94e, "end_buffer_read_sync" },
	{ 0xcafdd707, "ocfs2_dlm_lock_status" },
	{ 0xa88b441f, "sync_filesystem" },
	{ 0x4a0609d9, "sb_set_blocksize" },
	{ 0x355134f0, "jbd2_journal_set_features" },
	{ 0x743ba47e, "__sb_start_write" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xd6d0ea88, "__posix_acl_chmod" },
	{ 0xd58ad70d, "d_make_root" },
	{ 0xfa7b9081, "jbd2_journal_load" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xe3a155c2, "__blockdev_direct_IO" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa428078a, "__block_write_begin" },
	{ 0x58dc5de, "jbd2_journal_set_triggers" },
	{ 0x303d0fed, "filemap_fdatawrite_range" },
	{ 0x16325294, "__find_get_block" },
	{ 0x2b4d31ff, "posix_acl_default_xattr_handler" },
	{ 0xca9360b5, "rb_next" },
	{ 0x9896f0bf, "mark_buffer_dirty" },
	{ 0x5d047c3f, "jbd2_journal_restart" },
	{ 0x9e6b7219, "bpf_trace_run6" },
	{ 0x18d3e554, "jbd2_journal_inode_ranged_write" },
	{ 0xbbfbcb0d, "unregister_filesystem" },
	{ 0x1f179757, "write_one_page" },
	{ 0xca8f6c91, "init_special_inode" },
	{ 0x6f19d7b1, "forget_all_cached_acls" },
	{ 0x527fb529, "trace_raw_output_prep" },
	{ 0xf0279d39, "jbd2_journal_stop" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5e78d1ad, "fiemap_check_flags" },
	{ 0x1d928d71, "user_path_create" },
	{ 0x7ce18c9f, "from_kqid" },
	{ 0x2947182d, "new_inode" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xa7d2d66e, "generic_file_splice_read" },
	{ 0xb6812eb9, "dquot_free_inode" },
	{ 0x717cc680, "security_old_inode_init_security" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdf2c2742, "rb_last" },
	{ 0xd3a36df9, "dquot_disable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc3805cd1, "fs_ftype_to_dtype" },
	{ 0xa87e6d81, "dquot_commit_info" },
	{ 0x78b49955, "bpf_trace_run4" },
	{ 0xd172461b, "clear_inode" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9a087e18, "simple_attr_open" },
	{ 0x19973b71, "d_instantiate" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xab3192f1, "__dquot_transfer" },
	{ 0x3fa55769, "__put_page" },
	{ 0x3c226754, "jbd2_complete_transaction" },
	{ 0xf41f7e33, "clear_nlink" },
	{ 0xc04c0275, "simple_attr_write" },
	{ 0x5d92c2e, "setattr_prepare" },
	{ 0x8de6e8c0, "generic_fillattr" },
	{ 0xccb87233, "filemap_fdatawrite" },
	{ 0xdbfc0b21, "inode_init_owner" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd4a2bf33, "__posix_acl_create" },
	{ 0x23ae1e03, "truncate_inode_pages" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "ocfs2_stackglue,quota_tree,ocfs2_nodemanager");


MODULE_INFO(srcversion, "1E86C9EE2538F28689B639C");
