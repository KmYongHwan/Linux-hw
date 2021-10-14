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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0xc63f0727, "platform_device_add_properties" },
	{ 0x40b69005, "platform_device_add_resources" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000016C3d0000ABCDsv*sd*bc0Csc03i*");
MODULE_ALIAS("pci:v000016C3d0000ABCEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016C3d0000ABCFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2820E7C5D6CF5489A8340E7");
