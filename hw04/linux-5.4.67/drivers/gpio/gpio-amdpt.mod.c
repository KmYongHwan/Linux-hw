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
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x68a82987, "gpiochip_add_data_with_key" },
	{ 0x761acc93, "bgpio_init" },
	{ 0xd1b279c, "devm_platform_ioremap_resource" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x6cb881cb, "acpi_bus_get_device" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4a95d625, "gpiochip_get_data" },
	{ 0xa77e039e, "gpiochip_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "gpio-generic");

MODULE_ALIAS("acpi*:AMDF030:*");
MODULE_ALIAS("acpi*:AMDIF030:*");

MODULE_INFO(srcversion, "F1E3139D916479DE288048D");
