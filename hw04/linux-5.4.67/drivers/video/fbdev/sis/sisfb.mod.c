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
	{ 0x85bd1608, "__request_region" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0x9b55ed4a, "pci_unmap_rom" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x8d4d8561, "pci_get_slot" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x98d87b25, "pci_get_class" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x68195e7e, "cfb_fillrect" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xe990fee, "cfb_imageblit" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x8c1ea5ee, "pci_map_rom" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0x5a921311, "strncmp" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa916b694, "strnlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0x96b48f1b, "cfb_copyarea" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x2620a062, "unregister_framebuffer" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001039d00000300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00005300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00006300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00000310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00000315sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00000325sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00005315sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00006325sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00000330sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00006330sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018CAd00000020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018CAd00000040sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EF4CE4202CEBF494CDB5675");
