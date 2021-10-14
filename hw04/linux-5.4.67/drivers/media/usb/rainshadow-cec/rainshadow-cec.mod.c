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
	{ 0x3b96fa46, "serio_unregister_driver" },
	{ 0x61b38ed4, "__serio_register_driver" },
	{ 0x4d78006b, "cec_register_adapter" },
	{ 0xb248b951, "cec_delete_adapter" },
	{ 0x456d997d, "serio_open" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf8a9fd43, "cec_allocate_adapter" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x510a2188, "cec_received_msg_ts" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x1416969e, "cec_transmit_attempt_done_ts" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x11089ac7, "_ctype" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x29361773, "complete" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x22600440, "serio_close" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x7408623a, "cec_unregister_adapter" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("serio:ty02pr41id*ex*");

MODULE_INFO(srcversion, "04ABF947BB6C5CC7357B563");
