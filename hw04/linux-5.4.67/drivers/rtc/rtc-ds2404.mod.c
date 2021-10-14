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
	{ 0x9ae6bf13, "__rtc_register_device" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x74d46467, "devm_rtc_allocate_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0xe8ca8933, "gpiod_get_raw_value" },
	{ 0xf82a295d, "gpiod_direction_input" },
	{ 0xc1f391ba, "gpiod_direction_output_raw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0xfe990052, "gpio_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "713332D2968BED6D9B3F736");
