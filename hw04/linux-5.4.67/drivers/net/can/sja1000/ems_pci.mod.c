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
	{ 0x890b3d61, "_dev_err" },
	{ 0x19c8a776, "register_sja1000dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8e1cd0de, "alloc_sja1000dev" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x61c68018, "free_sja1000dev" },
	{ 0xe1e16bbd, "unregister_sja1000dev" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sja1000");

MODULE_ALIAS("pci:v0000110Ad00002104sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000010B5sd00004000bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000010B5sd00004002bc*sc*i*");

MODULE_INFO(srcversion, "94ACAA31193E52B0EFD1BA9");
