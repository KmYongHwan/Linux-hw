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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x7c4509ba, "skb_queue_head" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xb74f842f, "debugfs_create_u8" },
	{ 0xf7e2d4ee, "__hci_cmd_sync" },
	{ 0xade4637f, "hci_register_dev" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0xfaf08463, "hci_unregister_dev" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xe3634357, "debugfs_create_x16" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2505bf18, "kstrtol_from_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0xdefbea52, "default_llseek" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd0f037bf, "hci_alloc_dev" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1b4777, "hci_free_dev" },
	{ 0x9c160d9e, "skb_put" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "26430B0CBEB3559E1E3F861");
