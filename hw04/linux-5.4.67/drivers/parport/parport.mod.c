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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0x35db28d0, "bus_register" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf44a972b, "driver_register" },
	{ 0x349cba85, "strchr" },
	{ 0xf97d7de2, "register_sysctl_table" },
	{ 0x754d539c, "strlen" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x785dd9f2, "device_register" },
	{ 0x11089ac7, "_ctype" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5efde8e6, "proc_doulongvec_ms_jiffies_minmax" },
	{ 0xdf752ab4, "bus_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf720a60b, "module_put" },
	{ 0x605e35f4, "bus_for_each_dev" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7ea19302, "put_device" },
	{ 0x6be0d38b, "unregister_sysctl_table" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x963cf8c8, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x176d68b6, "bus_for_each_drv" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0xcf2a6966, "up" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F8368F937A7D6DCF7C82C29");
