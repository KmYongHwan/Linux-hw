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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x637d18c6, "watchdog_register_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xf3e0e1df, "allocate_resource" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xc5850110, "printk" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xc5e74216, "release_resource" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7137f851, "watchdog_unregister_device" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D4BB0CDFE8B6FCF10108A49");
