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
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xf9cc3e04, "devm_lcd_device_register" },
	{ 0x502e851d, "devm_backlight_device_register" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lcd");


MODULE_INFO(srcversion, "4FBE513C3575F1485F03BA3");
