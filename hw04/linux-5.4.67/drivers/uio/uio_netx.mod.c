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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x8fa8a174, "__uio_register_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xe484e35f, "ioread32" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xf0e16e2d, "uio_unregister_device" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "uio");

MODULE_ALIAS("pci:v000015CFd00000000sv00000000sd00000000bc*sc*i*");
MODULE_ALIAS("pci:v000015CFd00000010sv000015CFsd00000000bc*sc*i*");
MODULE_ALIAS("pci:v000015CFd00000010sv000015CFsd00000001bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000010B5sd00003235bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000010B5sd00003335bc*sc*i*");

MODULE_INFO(srcversion, "1984956BDD6718FFB26649C");
