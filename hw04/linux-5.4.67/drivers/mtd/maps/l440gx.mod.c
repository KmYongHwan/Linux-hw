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
	{ 0xf0d1a95, "map_destroy" },
	{ 0x81279a8a, "mtd_device_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf7dba81e, "mtd_device_parse_register" },
	{ 0x886271e5, "do_map_probe" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xedc03953, "iounmap" },
	{ 0xdd39fac7, "pci_assign_resource" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xade67a19, "simple_map_init" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xc5850110, "printk" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "chipreg,mtd,map_funcs");


MODULE_INFO(srcversion, "40EED9593657446D970FF15");
