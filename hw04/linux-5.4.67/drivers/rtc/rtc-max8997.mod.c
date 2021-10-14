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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xc9328139, "irq_create_mapping" },
	{ 0x58a57bfc, "devm_rtc_device_register" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x521f25fc, "max8997_bulk_write" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0xc5850110, "printk" },
	{ 0x285b06c8, "max8997_update_reg" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa9703100, "max8997_write_reg" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3a0d27c4, "max8997_read_reg" },
	{ 0xac319f89, "max8997_bulk_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xacde7892, "rtc_update_irq" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:max8997-rtc");

MODULE_INFO(srcversion, "76174828739DCAF1DFED3C2");
