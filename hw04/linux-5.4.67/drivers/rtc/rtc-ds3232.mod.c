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
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0x42d6f363, "__devm_regmap_init_spi" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1c437023, "device_set_wakeup_capable" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x2cd9f628, "rtc_nvmem_register" },
	{ 0x58a57bfc, "devm_rtc_device_register" },
	{ 0xfce9c328, "devm_hwmon_device_register_with_info" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xacde7892, "rtc_update_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cdallas,ds3232");
MODULE_ALIAS("of:N*T*Cdallas,ds3232C*");
MODULE_ALIAS("i2c:ds3232");

MODULE_INFO(srcversion, "0C4A63875213CDA8BDEC6BF");
