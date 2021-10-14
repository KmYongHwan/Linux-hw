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
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x323cb790, "register_c_can_dev" },
	{ 0xd83f84a5, "alloc_c_can_dev" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x90b8d10f, "pci_clear_master" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x9abc4796, "free_c_can_dev" },
	{ 0xb9b2e1cd, "unregister_c_can_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "c_can");

MODULE_ALIAS("pci:v0000104Ad0000CC11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008818sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8833D8DBC372CF14A40EE82");
