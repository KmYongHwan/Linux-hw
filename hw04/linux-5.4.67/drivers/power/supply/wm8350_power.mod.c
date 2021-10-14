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
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0x20c596ce, "wm8350_set_bits" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0x6114f186, "power_supply_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x393598ec, "wm8350_reg_lock" },
	{ 0xa87833ff, "wm8350_reg_write" },
	{ 0x580d049, "wm8350_reg_unlock" },
	{ 0x10af5210, "wm8350_read_auxadc" },
	{ 0x479247f1, "power_supply_unregister" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x51cb89cd, "wm8350_reg_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E6D04D822FD426D3F420613");
