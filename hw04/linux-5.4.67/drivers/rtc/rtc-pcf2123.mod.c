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
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x9ae6bf13, "__rtc_register_device" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x74d46467, "devm_rtc_allocate_device" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x42d6f363, "__devm_regmap_init_spi" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xacde7892, "rtc_update_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "608EA2B6C20B43F30A85B5C");
