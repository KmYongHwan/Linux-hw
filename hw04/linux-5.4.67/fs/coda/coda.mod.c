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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x3a966e1c, "drop_nlink" },
	{ 0x53b954a2, "up_read" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0xf97d7de2, "register_sysctl_table" },
	{ 0x7683599, "user_path_at_empty" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x22215a1f, "__remove_inode_hash" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x8f21dc3, "filemap_write_and_wait_range" },
	{ 0xa1d986cb, "iget5_locked" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0x4ceedc5a, "kill_anon_super" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x98e3bbde, "is_bad_inode" },
	{ 0x87bc50e4, "touch_atime" },
	{ 0x41b0b9cc, "dput" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0x3b1b6cc2, "__register_chrdev" },
	{ 0x55b81fae, "inc_nlink" },
	{ 0xbf3bb571, "d_find_alias" },
	{ 0x2f322a0c, "init_user_ns" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xabcf19bd, "vfs_fsync" },
	{ 0x6a3cb3a, "generic_read_dir" },
	{ 0x62a205aa, "super_setup_bdi" },
	{ 0x2de6a65f, "mount_nodev" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0xb58cd868, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x30ec9d8a, "__insert_inode_hash" },
	{ 0xe6f9ebc7, "kernel_read" },
	{ 0x4ab5063d, "vfs_iter_write" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x2210d332, "from_kuid" },
	{ 0xba312d7b, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xd4432990, "from_kgid" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9dc84671, "set_nlink" },
	{ 0x752832c, "noop_llseek" },
	{ 0x88e96942, "device_create" },
	{ 0x8ef38868, "unlock_page" },
	{ 0xce807a25, "up_write" },
	{ 0xc932e043, "shrink_dcache_sb" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa0fd0123, "fput" },
	{ 0xd82a2711, "inode_nohighmem" },
	{ 0x24e4f228, "__task_pid_nr_ns" },
	{ 0xd5563066, "ilookup5" },
	{ 0xd6d2a096, "inode_init_once" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa3e59772, "truncate_inode_pages_final" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0x6be0d38b, "unregister_sysctl_table" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x4d2b1e2, "vfs_iter_read" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x499cb97, "unlock_new_inode" },
	{ 0x664b3b7a, "d_drop" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe1aa3dfe, "d_prune_aliases" },
	{ 0x4bfda41c, "shrink_dcache_parent" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x84aa78ec, "path_put" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x8b4894bf, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x64d94cda, "init_pid_ns" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x7ede2eec, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0xda51701e, "page_get_link" },
	{ 0x71c86502, "ihold" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2a09a330, "__sb_end_write" },
	{ 0x638c7869, "current_time" },
	{ 0x4690d310, "d_splice_alias" },
	{ 0xa88b441f, "sync_filesystem" },
	{ 0xe35580fb, "fget" },
	{ 0x743ba47e, "__sb_start_write" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0xd58ad70d, "d_make_root" },
	{ 0xdc051931, "task_active_pid_ns" },
	{ 0xbbfbcb0d, "unregister_filesystem" },
	{ 0xca8f6c91, "init_special_inode" },
	{ 0x2947182d, "new_inode" },
	{ 0xa7d2d66e, "generic_file_splice_read" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x66414bc7, "__class_create" },
	{ 0xd172461b, "clear_inode" },
	{ 0x19973b71, "d_instantiate" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf41f7e33, "clear_nlink" },
	{ 0x8de6e8c0, "generic_fillattr" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "89FDE8A3C13E815D481AB32");
