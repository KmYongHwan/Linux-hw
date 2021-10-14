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
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xb93527f1, "mfd_remove_devices" },
	{ 0xfe94e94a, "pcim_iomap" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0x6bb624d0, "mfd_add_devices" },
	{ 0xffb7c514, "ida_free" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001AEAd00006601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEAd00006621sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "542DA1503A3365AE66BA5ED");
