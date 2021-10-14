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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xe4413db4, "clk_get" },
	{ 0x168728b, "__mdiobus_register" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5c415271, "devm_ioremap" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c64ae14, "devm_mdiobus_alloc_size" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmarvell,orion-mdio");
MODULE_ALIAS("of:N*T*Cmarvell,orion-mdioC*");
MODULE_ALIAS("of:N*T*Cmarvell,xmdio");
MODULE_ALIAS("of:N*T*Cmarvell,xmdioC*");

MODULE_INFO(srcversion, "FAE60DDE9763417478AD30A");
