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
	{ 0xf7dba81e, "mtd_device_parse_register" },
	{ 0x886271e5, "do_map_probe" },
	{ 0xade67a19, "simple_map_init" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x13110126, "request_resource" },
	{ 0x77358855, "iomem_resource" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x2f586e32, "pci_dev_get" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0d1a95, "map_destroy" },
	{ 0x81279a8a, "mtd_device_unregister" },
	{ 0xc5e74216, "release_resource" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd,chipreg,map_funcs");


MODULE_INFO(srcversion, "31877FB0BB82DD588D29421");
