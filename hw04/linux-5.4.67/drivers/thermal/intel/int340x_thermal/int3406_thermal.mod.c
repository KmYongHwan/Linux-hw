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
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x4d91a821, "thermal_cooling_device_register" },
	{ 0x46f7281c, "acpi_video_get_levels" },
	{ 0x643af09c, "backlight_device_get_by_type" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xbfd09788, "backlight_device_set_brightness" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb9b1146, "thermal_cooling_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "video");

MODULE_ALIAS("acpi*:INT3406:*");

MODULE_INFO(srcversion, "C40B94C1049D5F68A499386");
