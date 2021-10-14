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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xf4358872, "devm_kfree" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0x6cbe5161, "platform_device_add_data" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0x9a28da47, "gpiod_put" },
	{ 0xf1ebe9a5, "desc_to_gpio" },
	{ 0x1596983c, "gpiod_get_index" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xa1017bf3, "gpiod_count" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:MSHW0028:*");

MODULE_INFO(srcversion, "3D355A7E3EB48C366961A03");
