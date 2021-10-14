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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xf2d7d87, "mce_unregister_decode_chain" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9b9f3648, "pcibios_scan_specific_bus" },
	{ 0xb8b2b1f7, "mce_register_decode_chain" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xb51fbd64, "edac_op_state" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0x238ff2e9, "edac_pci_create_generic_ctl" },
	{ 0xb6f7270a, "device_add" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x2af970a3, "device_initialize" },
	{ 0x3c96fef5, "edac_mc_add_mc_with_groups" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x98d7f55f, "edac_mc_alloc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x2f586e32, "pci_dev_get" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0x7469f71, "pci_find_next_bus" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xc938d3e0, "edac_mc_free" },
	{ 0x2f27d05a, "edac_mc_del_mc" },
	{ 0x7ea19302, "put_device" },
	{ 0x4f6dbf8e, "device_del" },
	{ 0x649bb4a1, "edac_pci_release_generic_ctl" },
	{ 0x4d7e9d90, "edac_mc_handle_error" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5850110, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d0000342Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002C90sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2A9550396CF6CF40CFF103D");
