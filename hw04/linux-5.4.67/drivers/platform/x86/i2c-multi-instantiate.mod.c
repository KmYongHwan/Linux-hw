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
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xa4f2a83, "acpi_dev_gpio_irq_get" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x754d539c, "strlen" },
	{ 0x19c08435, "i2c_acpi_new_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xdc6699cb, "acpi_dev_free_resource_list" },
	{ 0xd8605fc2, "acpi_dev_get_resources" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0xd52c37ad, "acpi_match_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x60806523, "i2c_acpi_get_i2c_resource" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:BSG1160:*");
MODULE_ALIAS("acpi*:BSG2150:*");
MODULE_ALIAS("acpi*:INT3515:*");

MODULE_INFO(srcversion, "AB5962EE3066EB3ABAA8C78");
