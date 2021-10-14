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
	{ 0x442639ef, "param_ops_uint" },
	{ 0x77179d2e, "param_ops_string" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe0cf7d08, "thermal_zone_device_register" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0x4d91a821, "thermal_cooling_device_register" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x6d7be210, "thermal_zone_device_update" },
	{ 0xb845f41d, "thermal_zone_bind_cooling_device" },
	{ 0xc4c56a, "thermal_zone_unbind_cooling_device" },
	{ 0xc708f1fe, "ec_write" },
	{ 0xd8d49ad4, "thermal_zone_device_unregister" },
	{ 0xdb9b1146, "thermal_cooling_device_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x5a921311, "strncmp" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FE0D9838712E19A0980A2AD");
