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
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf44a972b, "driver_register" },
	{ 0x754d539c, "strlen" },
	{ 0x72dbaa7, "__srcu_read_unlock" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x1f58e882, "platform_bus_type" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xf47e020f, "cleanup_srcu_struct" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x33dd9940, "__srcu_read_lock" },
	{ 0xe193ad0d, "sysfs_remove_link" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x565c8b0a, "init_srcu_struct" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xe01dfded, "sysfs_create_link" },
	{ 0xf720a60b, "module_put" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0x7efb8de5, "driver_find_device" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12b678d5, "platform_device_register" },
	{ 0x7ea19302, "put_device" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf3954f31, "synchronize_srcu" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x77bc13a0, "strim" },
	{ 0x74801e4, "param_ops_ulong" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "888952E3AD44FBE5367242E");
