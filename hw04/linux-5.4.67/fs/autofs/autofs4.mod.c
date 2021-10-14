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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3a966e1c, "drop_nlink" },
	{ 0x117adf18, "put_pid" },
	{ 0x349cba85, "strchr" },
	{ 0xa0798880, "get_task_pid" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x4fef1800, "path_is_mountpoint" },
	{ 0xcb48ab33, "from_kuid_munged" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xeac8bab7, "pid_vnr" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x41b0b9cc, "dput" },
	{ 0xc4142837, "seq_printf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x44e9a829, "match_token" },
	{ 0x55b81fae, "inc_nlink" },
	{ 0x4595bf6d, "dentry_open" },
	{ 0x2f322a0c, "init_user_ns" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x7ec78bdd, "rename_lock" },
	{ 0xe16a6075, "d_add" },
	{ 0x6a3cb3a, "generic_read_dir" },
	{ 0x2de6a65f, "mount_nodev" },
	{ 0x2904b38c, "path_get" },
	{ 0x21624431, "may_umount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5db342c2, "from_kgid_munged" },
	{ 0xfd94814e, "complete_all" },
	{ 0xb58cd868, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x33259f3f, "dcache_dir_lseek" },
	{ 0x47fda759, "misc_register" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xb3715ef1, "kill_litter_super" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x9dc84671, "set_nlink" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xac855e42, "__close_fd" },
	{ 0x752832c, "noop_llseek" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xa07a37f0, "memchr" },
	{ 0x4e3567f7, "match_int" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xa0fd0123, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x24e4f228, "__task_pid_nr_ns" },
	{ 0x14e942d2, "path_has_submounts" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x6d334118, "__get_user_8" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x664b3b7a, "d_drop" },
	{ 0x2bc3c806, "may_umount_tree" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x84aa78ec, "path_put" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x99b71ca9, "simple_empty" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x36bac731, "dcache_readdir" },
	{ 0x8b4894bf, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x63c10b9a, "d_lookup" },
	{ 0x64d94cda, "init_pid_ns" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe5fa9f4e, "find_get_pid" },
	{ 0xb484cd34, "dcache_dir_open" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xda5f6700, "dcache_dir_close" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0xd63831fa, "follow_up" },
	{ 0x69acdf38, "memcpy" },
	{ 0x638c7869, "current_time" },
	{ 0x5c8b5637, "fd_install" },
	{ 0xe35580fb, "fget" },
	{ 0xd58ad70d, "d_make_root" },
	{ 0x8d783de6, "__kernel_write" },
	{ 0x674e30c0, "simple_statfs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xbbfbcb0d, "unregister_filesystem" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x2947182d, "new_inode" },
	{ 0x4565e655, "follow_down_one" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xd172461b, "clear_inode" },
	{ 0x343f1816, "misc_deregister" },
	{ 0xf41f7e33, "clear_nlink" },
	{ 0xe914e41e, "strcpy" },
	{ 0xfdb2d31a, "kern_path_mountpoint" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F837A8D53B4A444019D1150");
