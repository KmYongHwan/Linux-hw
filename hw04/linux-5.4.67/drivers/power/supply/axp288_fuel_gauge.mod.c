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
	{ 0xa071f2c6, "single_release" },
	{ 0xcec6343e, "seq_read" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa7e44094, "iio_read_channel_raw" },
	{ 0xc4142837, "seq_printf" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x6114f186, "power_supply_register" },
	{ 0x70c10faa, "iio_channel_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x70691c99, "single_open" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0x94438fe7, "iio_channel_release" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x479247f1, "power_supply_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("platform:axp288_fuel_gauge");

MODULE_INFO(srcversion, "23DFDDD3C980941F6179925");
