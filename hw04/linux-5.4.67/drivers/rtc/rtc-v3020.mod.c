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
	{ 0x58a57bfc, "devm_rtc_device_register" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x9ba2bb2b, "gpio_request_array" },
	{ 0xb0d1656c, "gpio_free_array" },
	{ 0xe8ca8933, "gpiod_get_raw_value" },
	{ 0xf82a295d, "gpiod_direction_input" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0xc1f391ba, "gpiod_direction_output_raw" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xedc03953, "iounmap" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0569BB226BC906D80C8BAC3");
