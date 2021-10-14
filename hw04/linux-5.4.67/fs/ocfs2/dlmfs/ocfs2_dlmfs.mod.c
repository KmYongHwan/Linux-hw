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
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9a1e4cc5, "__mark_inode_dirty" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9507547f, "ocfs2_cluster_disconnect" },
	{ 0x8d324cbd, "simple_lookup" },
	{ 0x7b26f7c9, "generic_delete_inode" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x55b81fae, "inc_nlink" },
	{ 0x76f40744, "ocfs2_dlm_lvb" },
	{ 0xdf2fd6d5, "igrab" },
	{ 0x2de6a65f, "mount_nodev" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb3715ef1, "kill_litter_super" },
	{ 0xdefbea52, "default_llseek" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xeff83121, "setattr_copy" },
	{ 0xc5196999, "ocfs2_dlm_unlock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1475f64b, "ocfs2_dlm_lvb_valid" },
	{ 0xaf969565, "ocfs2_dlm_lock" },
	{ 0xd6d2a096, "inode_init_once" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x90975a51, "simple_getattr" },
	{ 0x6a0c3847, "__mlog_printk" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0xd344e4ee, "ocfs2_stack_glue_set_max_proto_version" },
	{ 0xcdf61d99, "simple_unlink" },
	{ 0x64042456, "simple_dir_operations" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x8b4894bf, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x7ede2eec, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x638c7869, "current_time" },
	{ 0xcafdd707, "ocfs2_dlm_lock_status" },
	{ 0xd58ad70d, "d_make_root" },
	{ 0x674e30c0, "simple_statfs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xbbfbcb0d, "unregister_filesystem" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xcfd3fc5, "ocfs2_cluster_connect_agnostic" },
	{ 0x2947182d, "new_inode" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xd172461b, "clear_inode" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x19973b71, "d_instantiate" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x44ece099, "simple_rmdir" },
	{ 0x5d92c2e, "setattr_prepare" },
	{ 0xdbfc0b21, "inode_init_owner" },
};

MODULE_INFO(depends, "ocfs2_stackglue,ocfs2_nodemanager");


MODULE_INFO(srcversion, "4733B99A121831128B030BC");
