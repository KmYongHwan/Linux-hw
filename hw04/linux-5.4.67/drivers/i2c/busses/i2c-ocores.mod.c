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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xfef6ccb5, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xa258faf8, "i2c_new_device" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0x5d3e4191, "devm_request_any_context_irq" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf10de535, "ioread8" },
	{ 0x26f8f0b8, "iowrite16be" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xf065f629, "ioread16be" },
	{ 0xc5534d64, "ioread16" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0xe484e35f, "ioread32" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Copencores,i2c-ocores");
MODULE_ALIAS("of:N*T*Copencores,i2c-ocoresC*");
MODULE_ALIAS("of:N*T*Caeroflexgaisler,i2cmst");
MODULE_ALIAS("of:N*T*Caeroflexgaisler,i2cmstC*");
MODULE_ALIAS("of:N*T*Csifive,fu540-c000-i2c");
MODULE_ALIAS("of:N*T*Csifive,fu540-c000-i2cC*");
MODULE_ALIAS("of:N*T*Csifive,i2c0");
MODULE_ALIAS("of:N*T*Csifive,i2c0C*");

MODULE_INFO(srcversion, "9B27F06C52F9548D0795744");
