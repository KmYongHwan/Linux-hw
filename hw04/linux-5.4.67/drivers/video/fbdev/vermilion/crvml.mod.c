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
	{ 0xc5850110, "printk" },
	{ 0x16e6c20, "vmlfb_unregister_subsys" },
	{ 0x90c018c6, "vmlfb_register_subsys" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xedc03953, "iounmap" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
};

MODULE_INFO(depends, "vmlfb");


MODULE_INFO(srcversion, "98F09F4F475D789CEAEE776");
