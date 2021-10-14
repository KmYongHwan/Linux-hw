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
	{ 0xc0af0f07, "wake_up_process" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x6114f186, "power_supply_register" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xe541dad7, "freezing_slow_path" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xba312d7b, "current_task" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0xf9a482f9, "msleep" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x479247f1, "power_supply_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,tps65090-charger");
MODULE_ALIAS("of:N*T*Cti,tps65090-chargerC*");

MODULE_INFO(srcversion, "979915176865055AAA911BA");
