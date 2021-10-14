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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x131a5ed7, "regmap_del_irq_chip" },
	{ 0xb93527f1, "mfd_remove_devices" },
	{ 0xd52c37ad, "acpi_match_device" },
	{ 0x6bb624d0, "mfd_add_devices" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xc0ccc4df, "regmap_add_irq_chip" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x60a32ea9, "pm_power_off" },
	{ 0xeb5bce08, "regmap_write" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F62B6223162DA9F93904BC6");
