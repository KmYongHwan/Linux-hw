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
	{ 0x19c8a776, "register_sja1000dev" },
	{ 0x8e1cd0de, "alloc_sja1000dev" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x61c68018, "free_sja1000dev" },
	{ 0xe1e16bbd, "unregister_sja1000dev" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf10de535, "ioread8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sja1000");

MODULE_ALIAS("pci:v0000144Ad00007841sv*sd*bc02sc80i00*");
MODULE_ALIAS("pci:v0000144Ad00007841sv*sd*bc07sc80i00*");
MODULE_ALIAS("pci:v000010B5d00009050sv000012FEsd00000004bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000012FEsd0000010Bbc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000012FEsd00000501bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv000012FEsd00000009bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv000012FEsd0000000Ebc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv000012FEsd00000200bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv*sd00002540bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00002715sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00003432sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001498d0000032Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000012C4sd00000900bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv0000E1C5sd00000301bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv00003000sd00001001bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv00003000sd00001002bc*sc*i*");

MODULE_INFO(srcversion, "3D64BED3BD1EB20EB9395E0");
