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
	{ 0x9a43e199, "_dev_info" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x58a57bfc, "devm_rtc_device_register" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x269a41d4, "i2c_new_dummy_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x58412e48, "regmap_raw_write" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xc5850110, "printk" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xacde7892, "rtc_update_irq" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:s5m-rtc");
MODULE_ALIAS("platform:s2mps13-rtc");
MODULE_ALIAS("platform:s2mps14-rtc");
MODULE_ALIAS("platform:s2mps15-rtc");

MODULE_INFO(srcversion, "F6141DBE941F8C127F7BB7F");
